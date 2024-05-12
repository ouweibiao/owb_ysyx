 #include<stdio.h>
 #include<stdlib.h>
 #include<assert.h>
 #include <verilated.h>   //访问验证程序例程的库
 #include <verilated_vcd_c.h>  //向VCD文件中写入波形
 #include "Vtop.h"       //包含top模型的顶层文件转化的类
 #define MAX_SIM_TIME 20   //最大仿真时间
 vluint64_t sim_time = 0;
 int main(int argc, char** argv) {
     //构建VerilatedContext以保留模拟时间
     VerilatedContext* contextp = new VerilatedContext;
     contextp->commandArgs(argc, argv);
     //用VerilatedContext实例化自己的顶层类
     Vtop* top = new Vtop{contextp};
     //开启波形追踪
     Verilated::traceEverOn(true);
     VerilatedVcdC *m_trace = new VerilatedVcdC;
     top->trace(m_trace, 5); //顶层类设置测试波形参数
     m_trace->open("waveform.vcd"); //设置波形写入的文件
     
     while (sim_time < MAX_SIM_TIME) {
         int a = rand() &1;
         int b = rand() &1;
         top->a = a; //实例化模型的信号赋值
         top->b = b;
         top->eval(); //评估信号    
         m_trace->dump(sim_time); //将信号写入波形
         sim_time++;        
         printf("a = %d, b = %d,f = %d\n",a,b,top->f);
         assert(top->f == (a^b));
     }
     m_trace->close();
     top->final();
     delete top;
     return 0;
}

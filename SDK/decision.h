#include"robot.h"
#include"workbench.h"
class decision{
public:

////////////////////////////////////////////////////////////
//This is common workspace.
//put the variables structures and functions we both use here.
    robot robots[4]; //四个机器人
    workbench workbenches[50];//小于等于 50 个工作台，9类工作台
    int bench_number;

/////////////////////////////////////////////////////////////
//this is metaverse-c's workspace.
//控制信息
    int destWorkBench[4];//目标workbench
    bool buy[4];
    bool sell[4];
    bool destory[4];

    bool readUntilOK();
//第一帧到来之前初始化
    decision(); //标准输入流的输入接口用于接收标准输入
//每帧数据到来之前初始化
   void setRobandWork();
//give command after decision
    void giveRobotCommand();//set (every robot) buy,sell,destory,destworkbench
    void giveOrder();//标准输出流输出判断器命令

///////////////////////////////////////////////////////////////////////////////////
//This is smqqzy's workspace.
//please add your variables and functions here. 
//If you want to add new variables which is not included in this file.you have to add new variables here.
//if you want to add new functions.You'd better tell its input output and its function clearly.

//structures and variables.
    int money;



//decision function(add your function here).
    void makeDecision();
}

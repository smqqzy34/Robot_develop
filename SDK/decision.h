#include"robot.h"
#include"workbench.h"
class decision{
public:
    robot robots[4]; //四个机器人
    workbench workbenches[50];//小于等于 50 个工作台，9类工作台

//基本信息
    int frame_id;
    int money;
    int num_of_



//控制信息
    int destWorkBench[4];//目标workbench
    bool buy[4];
    bool sell[4];
    bool destory[4];

//structures needed for decision(add your decision here)




//第一帧到来之前初始化
    decision(); //标准输入流的输入接口用于接收标准输入
    bool readUntilOK();
//每帧数据到来之前初始化
   void setRobandWork();
//decision function(add your function here)
    void makeDecision();





//give command after decision
    void giveRobotCommand();//set (every robot) buy,sell,destory,destworkbench
    void giveOrder();//标准输出流输出判断器命令
}

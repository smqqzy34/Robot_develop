#include <stdio.h>
#include <stdbool.h>
#include <time.h>

class robot{
public:
////////////////////////////////////////////////////////////
//This is common workspace.
//put the variables and structures  we both use here.
    int workbench_id;
    int carry_product_id;
    double time_value_factor;
    double crush_value_factor;

//use to describe basic infomation
    double angle_speed;
    double line_speedx,line_speedy;
    double direction;

    double current_p_x,current_p_y;

/////////////////////////////////////////////////////////////
//this is metaverse-c's workspace.
//command given buy decision
    bool buy;
    bool sell;
    bool destory;
    int dest_work_bench;//    int workbench_id;

    robot();
    setRobot();
    bool testIfReach();
    void calSpeed();
    void giveOrder();

///////////////////////////////////////////////////////////////////////////////////
//This is smqqzy's workspace.
//please add your variables and functions here. 
//If you want to add new variables which is not included in this file.you have to add new variables here.
//if you want to add new functions.You'd better tell its input output and function clearly.

    int project_id;
    int robot_id;
    double destination_x,destination_y;


    int num_of_workbench();

    double time_to_reach();

    double get_lineSpeed();

    double get_angleSpeed();



}

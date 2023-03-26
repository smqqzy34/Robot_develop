#include"decision.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/////////////////////////////////////////////////////////////
//this is metaverse-c's workspace.
decision::decision(){

}
bool decision::readMap() {
    //init robots[4] and workbenches[4]
    char line[1024];
    int benchnumber = 0;
    int row = 0;
    while (fgets(line, sizeof(line), stdin)) {
        if (line[0] == 'O' && line[1] == 'K') {
            return true;
        }
        else {
            char word;
            int col = 0;
            while ((word = line[col]) != '\n') {
                if (word > '0' && word < '10') {
                    workbenches[benchnumber].init(benchnumber, word, row, col);
                    benchnumber++;
                }
                col++;
            }
        }
    }
    return false;
}


void decision::setRobandWork(){
    //update robots[4] and workbenches[4]
    scanf("%d", &money);
    scanf("%d", &benchnumber);
    char line[1024];
    int row = 0;
    while (row < benchnumber) {
        //deal with workbench info.
        int a, timetofinish, rawstatus, ifproductexist;
        double positionx, positiony;
        scanf("%d %lf &lf %d %d %d", &a, &positionx, &positiony, &timetofinish, &rawstatus, &ifproductexist);
        workbenches[row].setworkbench(timetofinish, rawstatus, ifproductexist);
    }

     for ( int i=0; i< 4;i++) {
        //deal with robot info.
        int workbench_id,carry_product_id;
        double time_value_factor, crush_value_factor, angle_speed, line_speedx, line_speedy, direction, current_p_x, current_p_y;
        scanf("%d %d %lf %lf %lf %lf %lf %lf %lf %lf", &workbench_id, &carry_product_id, &time_value_factor, &crush_value_factor, &angle_speed, &line_speedx, &line_speedy, &direction, &current_p_x, &current_p_y);
        robots[i].setrobot(workbench_id, carry_product_id, time_value_factor, crush_value_factor, angle_speed, line_speedx, line_speedy, direction, current_p_x, current_p_y);
    }
}

void decision::giveRobotCommand(){
    for(int i=0;i<4;i++){
        int dest=destWorkBench[i];
        robots[i].dest_work_bench =dest;
        robots[i].buy=buy[i];
        robots[i].destory=destory[i];
        robots[i].sell=sell[i];
        robots[i].calspeed(workbenches[dest].positionx, workbenches[dest].positiony);
    }
}

void decision::giveOrder(){
    for(int i=0;i<4;i++){
        robots[i].giveorder();
    }
}

///////////////////////////////////////////////////////////////////////////////////
//This is smqqzy's workspace.
/*
    function:makeDecision (making decisions)
    input:whatever you want
    output:
        int destWorkBench[4];
        bool buy[4];
        bool sell[4];
        bool destory[4];

*/
void decision::makeDecision(){

}

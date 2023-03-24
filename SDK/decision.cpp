#include"decision.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

decision::decision(){
    //init robots[4] and workbenches[4]


}
bool readUntilOK(){
    char line[1024];
    const char blank[2] = '' '';
    char *token;
    int counter = 0;
    while(fgets(line,sizeof(line),stdin)){
        if(line[0]=='O'&&line[1]=='K'){
            return true;
        }
        else{
            counter ++;
            token = strtok(line,blank);
            if(counter == 1){

            }
        }

    //read data and prepare to update

        //do something
    return false;
}

void decision::setRobandWork(){
    //update robots[4] and workbenches[4]

}



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

void decision::giveRobotCommand(){
    for(int i=0;i<4;i++){
        int dest=destWorkBench[i];
        workbench temp=workbenches[dest];
        robots[i].destWorkBench=dest;
        robots[i].buy=buy[i];
        robots[i].destory=destory[i];
        robots[i].sell=sell[i];
        robots[i].calSpeed(temp.positionx,temp.positiony);
    }
}

void decision::giveOrder(){
    for(int i=0;i<4;i++){
        robots[i].giveOrder();
    }
}

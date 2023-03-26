#include<iostream>
#include <stdio.h>
#include <stdbool.h>

#include"decision.h"

using namespace std;

int main(){
    decision d; 
    d.readMap();
    puts("OK");
    fflush(stdout);
    int frameID;
    while(scanf("%d",&frameID)!=EOF){
        printf("%d\n",&frameID);
        d.setRobandWork();
        d.makeDecision();
        d.giveRobotCommand();
        d.giveOrder();
        printf("OK\n");
        fflush(stdout);
    }
}

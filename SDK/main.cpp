#include<iostream>
#include <stdio.h>
#include <stdbool.h>

#include"decision.h"

using namespace std;

int main(){
    decision d; 
    d.readUntilOK();
    puts("OK");
    fflush(stdout);
    int frameID;
    while(scanf("%d",&frameID)!=EOF){
        printf("%d",&frameID);
        d.setRobandWork();
        d.makeDecision();
        d.giveOrder();
    }
}

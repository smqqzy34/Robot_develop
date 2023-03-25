#include <stdio.h>
#include<iostream>
#include <vector>
using namespace std;
enum Type{
    Raw=1,Mid,Sell;//Raw--1,2,3;Mid--3,4,5,6,7;Sell--8,9
};
class workbench{
public:
//static infomation
    enum Type type;
    int workbench_id;//工作台编号 [0-]
    int kind;//工作台种类
    double positionx,positiony;
    int product_id;
    //time needed for production
    int timetofinish;
    //raw material
    int rawstatus;//input
    int rawid[3];
    int rawnumber;
    bool rawexist[3];

    bool ifproductexist;


    workbench();
    ~workbench();

/////////////////////////////////////////////////////////////
//this is metaverse-c's workspace.
//dynamic infomation

    void init(int workbench_id, char number, int row, int col);
    bool calraw(int rawstatus);
    void setworkbench(int timetofinish,int rawstatus,int ifproductexist);

///////////////////////////////////////////////////////////////////////////////////
//This is smqqzy's workspace.
//please add your variables and functions here. 
//If you want to add new variables which is not included in this file.you have to add new variables here.
//if you want to add new functions.You'd better tell its input output and function clearly.

}

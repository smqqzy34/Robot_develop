#include <studio.h>
enum Type{
    Raw=1,Mid,Sell;//Raw--1,2,3;Mid--3,4,5,6,7;Sell--8,9
};
class workbench{
public:
//static infomation
    int workbench_id;//工作台编号
    int kind;//工作台种类
    double positionx,positiony;
    int product_id;
    //time needed for production
    int timetoinish;
    //raw material
    int rawstatus;//input
    int rawid[3];
    bool rawexist[3];

    int product_id;
    bool ifproductexist;

    workbench();

/////////////////////////////////////////////////////////////
//this is metaverse-c's workspace.
//dynamic infomation

    bool calraw(int rawstatus);
    void setWorkbench();

///////////////////////////////////////////////////////////////////////////////////
//This is smqqzy's workspace.
//please add your variables and functions here. 
//If you want to add new variables which is not included in this file.you have to add new variables here.
//if you want to add new functions.You'd better tell its input output and function clearly.

}

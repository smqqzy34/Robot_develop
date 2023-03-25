#include <studio.h>
enum Type{
    Raw=1,Mid,Sell;//Raw--1,2,3;Mid--3,4,5,6,7;Sell--8,9
};
class workbench{
public:
//static infomation
    enum Type kind;
    int id;
    int productID;
    int rawid[3];

/////////////////////////////////////////////////////////////
//this is metaverse-c's workspace.
//dynamic infomation
    int rawstatus;//input
    //if raw material is ready
    bool rawexist[3];
    bool calraw(int rawstatus);

    bool ifproductexist;

    double positionx,positiony;
    //time needed for production
    int timetoinish;


///////////////////////////////////////////////////////////////////////////////////
//This is smqqzy's workspace.
//please add your variables and functions here. 
//If you want to add new variables which is not included in this file.you have to add new variables here.
//if you want to add new functions.You'd better tell its input output and function clearly.

}

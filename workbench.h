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

    int rawstatus;
    bool rawexist[3];
    bool calraw(int rawstatus);
    bool ifproductexist;

    double positionx,positiony;

    int timetofinish;

}

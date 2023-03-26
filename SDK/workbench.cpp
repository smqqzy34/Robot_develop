#include "workbench.h"

/////////////////////////////////////////////////////////////
//this is metaverse-c's workspace.
workbench::workbench(){

}

void workbench::init(int workbench_id, char number, int row, int col) {
	this->workbench_id = workbench_id;
	int a = int(number - '0');
	this->kind = a;
	this->positionx = col * 0.5 + 0.25;
	this->positiony = row * 0.25 + 0.25;
	switch (a){
	case 1:type = Raw; 	this->product_id = a; break;
	case 2:type = Raw; 	this->product_id = a; break;
	case 3:type = Raw; 	this->product_id = a; break;
	case 4:rawid[0] = 1; rawid[2] = 2; type = Mid; rawnumber=2; 	this->product_id = a; break;
	case 5:rawid[0] = 1; rawid[2] = 3; type = Mid; rawnumber = 2; 	this->product_id = a; break;
	case 6:rawid[0] = 2; rawid[2] = 3; type = Mid; rawnumber = 2; 	this->product_id = a; break;
	case 7:rawid[0] = 4; rawid[2] = 5; rawid[2] = 6; type = Mid; rawnumber = 3; 	this->product_id = a; break;
	case 8:type = Sell; break;
	case 9:type = Sell; break;
	}

}

void workbench::setworkbench(int timetofinish, int rawstatus, int ifproductexist) {
	this->timetofinish = timetofinish;
	this->rawstatus = rawstatus;
	this->ifproductexist = ifproductexist;
}

bool workbench::calraw(int rawstatus) {
	int temp = rawstatus;
	for (int i = rawnumber - 1; i >= 0; i--) {
		int j = pow(2, rawid[i] - 1);
		if (j <= temp) {
			temp -= j;
			rawexist[i] = true;
		}
		else {
			rawexist[i] = false;
		}
	}
}


///////////////////////////////////////////////////////////////////////////////////
//This is smqqzy's workspace.
#include "robot.h"
#include<cmath>
#define PI acos(-1)
/////////////////////////////////////////////////////////////
//this is metaverse-c's workspace.
robot::robot() {
	dest_work_bench = -2;
}

robot::~robot() {

}

void robot::setrobot(int workbench_id, int carry_product_id, double time_value_factor, double crush_value_factor, double angle_speed, double line_speedx, double line_speedy, double direction, double current_p_x, double current_p_y){
	this->workbench_id = workbench_id;
	this->carry_product_id = carry_product_id;
	this->time_value_factor = time_value_factor;
	this->crush_value_factor = crush_value_factor;
	this->angle_speed = angle_speed;
	this->line_speedx = line_speedx;
	this->line_speedy = line_speedy;
	this->direction = direction;
	this->current_p_x = current_p_x;
	this->current_p_y = current_p_y;
}


bool robot::testifreach() {
	if (workbench_id == dest_work_bench) {
		return true;
	}
	return false;
}

/*
	input: positionx, positiony;
	
*/



void robot::calspeed(double positionx, double positiony) {
	
	double distance = sqrt(pow(positionx - current_p_x, 2) + pow(positiony - current_p_y, 2));
	double angle = acos((positionx - current_p_x) / distance);
	if ((positiony - current_p_y) < 0) {
		angle = -angle;
	}

	double 	delta = angle - direction;
	

	if(fabs(delta)>)
	double threshold_distance=0.8;
	double kp = 0.4; 
	if (distance < threshold_distance) {
		line_speed = 6;
	}
	else {
		line_speed = 6*exp(-kp * (distance - threshold_distance));
	}

	double kp_angle = 0.3;
	double threshold_angle = 0.2;
	if (fabs(delta) > threshold_angle) {
		angle_speed = PI*delta/fabs(delta);
	}
	else {
		angle_speed = kp_angle * PI * delta / fabs(delta);
	}
	//ππ‘Ï
	
	
}

void robot::giveorder() {

}


///////////////////////////////////////////////////////////////////////////////////
//This is smqqzy's workspace.
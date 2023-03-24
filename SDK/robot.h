#include <stdio.h>
#include <stdbool.h>
#include <time.h>

class robot{
    struct robot{
        int robot_id; //robot_id = 1,2,3,4
        int project_id;
        int workbench_id;

        double time_value_factor;
        double crush_value_factor;

        //use to describe basic infomation
        double lineSpeed;
        double angleSpeed;
        double angle; //[0,360]

        double destination_x,destination_y;
        double current_p_x,current_p_y;
        };

        int num_of_workbench();

        double time_to_reach();

        double get_lineSpeed();

        double get_angleSpeed();


}

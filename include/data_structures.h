#ifndef DATA_STRUCTURES_H
#define DATA_STRUCTURES_H
#include "common.h"

typedef struct imu
{
    /*
         * timestamp [ns],
         * w_RS_S_x [rad s^-1],  w_RS_S_y [rad s^-1],   w_RS_S_z [rad s^-1],
         * a_RS_S_x [m s^-2],    a_RS_S_y [m s^-2],     a_RS_S_z [m s^-2]
    */
    double time_stamp;
    double wx;
    double wy;
    double wz;
    double ax;
    double ay;
    double az;
}IMU;

typedef struct camera
{
    double time_stamp;
    string img_name;
}Camera;

#endif // DATA_STRUCTURES_H


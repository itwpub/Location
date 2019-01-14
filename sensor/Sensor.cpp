//
// Created by yangcheng on 2019/1/13.
//

#include "Sensor.h"
#include "../sensor/Gyroscope.h"
#include "../sensor/Accelerometer.h"
#include "../sensor/Magnetometer.h"



void Sensor::Calibrate(MatrixXd &gyro_data,MatrixXd &acc_data,MatrixXd &mag_data, Status *status) {

    // 标定陀螺仪
    Gyroscope gyroscope;
    gyroscope.GyroCalibration(mag_data, status);

    // 标定加速计
    Accelerometer accelerometer;
    accelerometer.AccCalibration(acc_data, status);

    // 标定地磁计
    Magnetometer magnetometer;
    magnetometer.MagCalibration(mag_data, status);
}
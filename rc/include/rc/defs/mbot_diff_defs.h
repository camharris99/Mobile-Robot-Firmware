#include <rc/defs/common_defs.h>

#ifndef RC_DIFF_DEFS_H
#define RC_DIFF_DEFS_H

#define LEFT_MOTOR_CHANNEL      1
#define RIGHT_MOTOR_CHANNEL     3
#define WHEEL_RADIUS            26.5/PI/200
#define WHEEL_BASE              0.16
// #define RPM_TO_M_S				WHEEL_RADIUS*2.0*PI/60.0
// #define R_MOTOR_SLOPE           0.00357/RPM_TO_M_S
// #define L_MOTOR_SLOPE           0.00369/RPM_TO_M_S
// #define R_MOTOR_INT             0.0899
// #define L_MOTOR_INT             0.0742
// #define R_MOT_POL				-1.0
// #define L_MOT_POL				1.0

typedef enum mbot_fram_cfg_length_t{
	WHEEL_CALIBRATION_LEN = 8 * sizeof(float), // 8 floats
	PID_VALUES_LEN = 20 * sizeof(float), // 20 floats
} mbot_fram_cfg_length_t;

typedef enum mbot_fram_cfg_offset_t{
	WHEEL_CALIBRATION_ADDR = MPU_FINAL_FRAM_ADDR, // have to start at 102 since thats where the MPU stops
	PID_VALUES_ADDR = WHEEL_CALIBRATION_ADDR + WHEEL_CALIBRATION_LEN,
} mbot_fram_cfg_offset_t;

#endif
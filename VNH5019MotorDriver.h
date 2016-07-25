/*
 * Implementation of MotorDriver for the Pololu VNH5019 Motor Driver.
 * MotorDriver V_1_1 library at: https://github.com/soliedra/MotorDriver
 * 
  *
 * DC motor driver connections
 *-----------------------------
 * 
 * Function         | Pin   
 *----------------------------
 * Direcion A (CW)  | D5	 
 *----------------------------
 * Direcion B (CCW) | D7 	  
 *----------------------------
 * PWM	            | D6 (PWM Enabled PIN)  
 *------------------------------------------
 * Brake (GND)      | D5 and D7 set to LOW  
 *---------------------------------------------
 * Current sensing  | A1      
 ------------------------------
 *
 * When the Direction pins are HIGH the motor brakes to Vcc and to GND
 * when set to LOW.
 *
 * Author: Javier Casado
 * Licence: CC BY
 */
#ifndef VNH5019MotorDriver_h
#define VNH5019MotorDriver_h

#include "Arduino.h"
#include <MotorDriver.h>

class VNH5019MotorDriver : public MotorDriver
//class VNH5019MotorDriver 
{
	public:
		VNH5019MotorDriver(uint8_t pin_dcmoto_dirA = 5, uint8_t pin_dcmoto_dirB = 7, uint8_t pin_dcmoto_pwm = 6);
		
		void writePWM(int pwmSpeed);
		void setDirectionCW();
		void setDirectionCCW();
		void setBrake();
		
	private:	
		uint8_t _pin_dcmoto_dirA, _pin_dcmoto_dirB, _pin_dcmoto_pwm;
};
#endif

/*
 * Makes the driven motor turn at max speed indefinitely
 *
 * Must include MotorDriver library from https://github.com/soliedra/MotorDriver
 * The Arduino IDE doesn't include it automatically!
 *
 * Pololu VNH5019 Driver connections
 *-----------------------------
 * Function         | Pin   
 *----------------------------
 * Direcion A (CW)  | D5	 
 *----------------------------
 * Direcion B (CCW) | D7 	  
 *----------------------------
 * PWM	            | D6	  
 *------------------------------------------
 * Brake (GND)      | D5 and D7 set to LOW  
 *---------------------------------------------
 * Current sensing  | A1      
 * ------------------------------
 *
 * Modified by Javier Casado July 2016
 */
#include <MotorDriver.h>
#include <VNH5019MotorDriver.h>


#define pin_dcmoto_dirA 5
#define pin_dcmoto_dirB 7
#define pin_dcmoto_pwm  6
#define pin_current_sensing  A0
#define pin_dcmoto_encodeA 2
#define pin_dcmoto_encodeB 3

VNH5019MotorDriver driver = VNH5019MotorDriver(pin_dcmoto_dirA,pin_dcmoto_dirB,pin_dcmoto_pwm,pin_current_sensing);

void setup() {
  
  // make it turn at max speed
  driver.writePWM(255);
}

void loop() {
  // nothing to repeat
}

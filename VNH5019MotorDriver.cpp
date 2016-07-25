#include "Arduino.h"
#include "VNH5019MotorDriver.h"

VNH5019MotorDriver::VNH5019MotorDriver(uint8_t pin_dcmoto_dirA, uint8_t pin_dcmoto_dirB, uint8_t pin_dcmoto_pwm)
{
	_pin_dcmoto_dirA = pin_dcmoto_dirA;
	_pin_dcmoto_dirB = pin_dcmoto_dirB;
	_pin_dcmoto_pwm = pin_dcmoto_pwm;

	//Direction and PWM output
	pinMode(_pin_dcmoto_dirA, OUTPUT);
	pinMode(_pin_dcmoto_dirB, OUTPUT);
	pinMode(_pin_dcmoto_pwm, OUTPUT);
}
	
void VNH5019MotorDriver::writePWM(int pwmSpeed)
{
	pwmSpeed = constrain(pwmSpeed,0,255);
	analogWrite(_pin_dcmoto_pwm, pwmSpeed);		
}

void VNH5019MotorDriver::setDirectionCW()
{
	digitalWrite(_pin_dcmoto_dirA,HIGH);
	digitalWrite(_pin_dcmoto_dirB,LOW);
	
}

void VNH5019MotorDriver::setDirectionCCW()
{
	digitalWrite(_pin_dcmoto_dirA,LOW);
	digitalWrite(_pin_dcmoto_dirB,HIGH);
}

void VNH5019MotorDriver::setBrake()
{
	digitalWrite(_pin_dcmoto_dirA,HIGH);
	digitalWrite(_pin_dcmoto_dirB,HIGH);
}		

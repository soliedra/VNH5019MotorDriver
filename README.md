# VNH5019MotorDriver
 <p>
 Implementation of [MotorDriver](https://github.com/soliedra/MotorDriver) 
 for the [Pololu VNH5019 Motor Driver](https://www.pololu.com/product/1451).
 </p>
 <p> 
 This diver can drive more tahn 30 Amps through a DC motor, control its speed using PWM, control
 the direction, brake the motor and sense its current.
 </p>
 <p>
 ### Example driver connections
<table>
<tr><td>Function</td><td>Pin</td></tr>
<tr><td>Direction A (CW) </td><td>D5</td></tr>
<tr><td>Direction B (CCW) </td><td>D7</td></tr>
<tr><td>PMW</td><td>D6</td></tr>
<tr><td>Current sensing</td><td>A1</td></tr>
</table>
</p>
<p>
When the directionA pin is HIGH and directionB LOW the motor turns CW.
When the directionB pin is HIGH and directionA LOW the motor turns CCW.
When the direction pins are both HIGH the motor brake to Vcc is set (very effective).
When the direction pins are both LOW the motor brake to GND is set.
</p>
<p>  
Author: Javier Casado
License: CC BY
</p>

# ArduinoMotorShieldDriver
 <p>
 Implementation of [MotorDriver](https://github.com/soliedra/MotorDriver) 
 for the ArduinoMotorShield.
 </p>
 <p> 
 This shield provides a dual driver controlled by channels A and B.
 In this case both channels have been connected in parallel to be able
 to deliver a maximum current of 4 Amps to the driven motor.
 </p>
  
 <p>
 <h3>Connections:</h3>
 </p>
 <table>
 <tr>
 <td>Function</td><td>Channel A</td><td>Channel B</td>
 </tr>
 <tr>
 <td>Direction</td><td>D12</td><td>D13</td>
 </tr>
 <tr>
 <td>PWM</td><td>D5 (brigded to D3) </td><td>D11</td>
 </tr>
 </table>
 <p>
 When the Direction pins are HIGH the motor turns CCW and
 CW when LOW.
 </p>
 <p>
 Author: Javier Casado
 Licence: CC BY
</p>

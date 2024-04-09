#include <Servo.h>

#define speed_maxP 0   //Clockwise rotation (Max speed)
#define speed_maxN 180 //Anticlockwise rotation (Max speed)
#define speed_stop  90 //Stop

Servo  mymotor;  // create servo object to control a servo (my motor)
                 // twelve servo objects can be created on most boards

int pos=0;
void setup()
{
  mymotor.attach(9);  //attaches the motor on pin 9 to the servo object
}
void loop()
{
  /**********Using 180 degree servo library to control N20 motor******************************/
  mymotor.write(speed_stop);     //Stop
  delay(1000);                   //delay 1s
  mymotor.write(speed_maxP);     //Clockwise rotation
  delay(2000);                   //delay 2s
  for(pos=speed_maxP;pos<speed_maxN;pos++)  //slow down, change the direction and speed up
  {
    mymotor.write(pos);
    delay(50);
  }
}
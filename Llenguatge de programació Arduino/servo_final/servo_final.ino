#include <Servo.h>

Servo servo;
int eix=90;

void setup() 
{
  
  servo.attach(6);
  servo.write(90);
  
}

void loop() 
{
 
  if (analogRead(0) <200  &&  eix<180)
  {
    eix++;
    servo.write(eix);
  }
  if (analogRead(0)>700 &&  eix>0)
  {
    eix--;
    servo.write(eix);
  } 

  delay(15);

}
 

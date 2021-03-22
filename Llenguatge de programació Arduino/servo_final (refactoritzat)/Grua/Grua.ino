#region Includes
#include <Servo.h>
#endregion

#region Variables
Servo servo;
byte servoId = 6;
int axis = 90;
int minAxis = 0;
int maxAxis = 180;
byte servoAnalogIn = 0;
int minAnalogReadValue = 200;
int maxAnalogReadValue = 700;
byte delayTime = 8;
#endregion

#region Arduino methods
void setup() 
{
    AttachServo();
}

void loop() 
{ 
    ServoLoop();
    Delay();
}
#endregion

#region Servo methods
void AttachServo()
{
    servo.attach(servoId);
    servo.write(axis);
}

void ServoLoop()
{
    if(analogRead(servoAnalogIn) < minAnalogReadValue && axis < maxAxis) 
    {
        UpdateServo(axis, 1);
    }
    else if(analogRead(servoAnalogIn) > maxAnalogReadValue && axis > minAxis)
    {
        UpdateServo(axis, -1);
    }
}

void UpdateServo(int axis, int sum, bool write)
{
    axis += sum;
    servo.write(axis);
}
#endregion

#region Other methods
void Delay()
{
    delay(delayTime);
}
#endregion

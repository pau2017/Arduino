const int ledPin =  13;                  // the number of the LED pin
int ledState = LOW;                      // ledState used to set the LED
unsigned long previousMillis = 0;        // last time LED was updated
const long interval = 1000;              //interval at which to blink 

void setup()
{
   pinMode(ledPin, OUTPUT);  // set the digital pin as output
}

void loop() 
{
                // save the last time you blinked the LED
  unsigned long currentMillis = millis(); 
                // if the LED is off turn it on and vice-versa
  if (currentMillis - previousMillis >= interval)
  {
    previousMillis = currentMillis;
    if (ledState == LOW) 
    {
      ledState = HIGH;
    }
    else
    {
      ledState = LOW;
    }
          // set the LED with the ledState of the variable
    digitalWrite(ledPin, ledState);
  }
}

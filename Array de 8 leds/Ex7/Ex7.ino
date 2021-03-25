unsigned long t=150;
const int led = 5;
const int boto = 3;
int whereisthebutton = 0;
int p=0;

void setup()
{
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(whereisthebutton, INPUT);
}

void loop()
{
  whereisthebutton = digitalRead(boto);
  if (whereisthebutton==1)
  {
    for( int p=0; p<30; p++)
    {
    digitalWrite(led,1);
    delay(t);
    digitalWrite(led,0);
    delay(t);
    }
  }
  else
  {
    p=0; 
  }
}

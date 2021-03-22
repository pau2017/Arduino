word led = 13;
word timer = 200;
void setup()
{
    Serial.begin(9600);
    pinMode(led, OUTPUT);
}

void loop()
{
  Serial.println("pum pum");
    digitalWrite(led, HIGH);
    delay(timer);
    digitalWrite(led, LOW);
    delay(timer);
    digitalWrite(led, HIGH);
    delay(timer);
    digitalWrite(led, LOW);
    delay(2000);
}

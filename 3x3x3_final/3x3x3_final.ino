#define ARRAY_SIZE(array) ((sizeof(array))/(sizeof(array[0])))

int ledWait = 100;
int loopWait = 1;
float trs[] = {11, 12, 13};
float leds[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};

void setup() 
{
    for (int i = 0; i < ARRAY_SIZE(trs); i ++ )
    {
        pinMode(trs[i], OUTPUT);
        digitalWrite(trs[i], LOW);
    }

    for (int i = 0; i < ARRAY_SIZE(leds); i ++ )
    {
        pinMode(leds[i], OUTPUT);
        digitalWrite(leds[i], LOW);
    }
}

void loop()
{
    for (int j = 0; j < ARRAY_SIZE(trs); j ++ )
    {
        digitalWrite (trs[j], HIGH);
        for (int i = 0; i < ARRAY_SIZE(leds); i ++ )
        {
            digitalWrite(leds[i], HIGH);
            delay(ledWait);
            digitalWrite(leds[i], LOW);
        }
        digitalWrite (trs[j], LOW);
    }
    delay(loopWait);
}

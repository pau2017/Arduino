int IN1 = 8;
int IN2 = 9;
int IN3 = 10;
int IN4 = 11;
int excitant = 15;
int pas [8][4] =
{
  {1, 0, 0, 0},
  {1, 1, 0, 0},
  {0, 1, 0, 0},
  {0, 1, 1, 0},
  {0, 0, 1, 0},
  {0, 0, 1, 1},
  {0, 0, 0, 1},
  {1, 0, 0, 1},
  
};

void setup () 
  {
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);
  }

void loop ()
  {
   for (int i = 0; i < 512; i++) // 512 = divisio entre els 8 passos sobre els 2048 del motor.
    {
      for (int i= 0; i <8; i++)
       {
        digitalWrite(IN1, pas[i][1]);
        digitalWrite(IN2, pas[i][2]);
        digitalWrite(IN3, pas[i][3]);
        digitalWrite(IN4, pas[i][4]);
        delay(excitant);
       }
    }   

  }

  

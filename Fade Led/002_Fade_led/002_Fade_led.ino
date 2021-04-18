/**********************************************************************************
**                                 Fade LEDs                                     **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const int led0 = 3;          // donar nom al pin 3 de l’Arduino
const int led1 = 5;          // donar nom al pin 5 de l’Arduino
const int led2 = 6;          // donar nom al pin 6 de l’Arduino
const int led3 = 9;          // donar nom al pin 9 de l’Arduino
const int led4 = 10;         // donar nom al pin 10 de l’Arduino
const int led5 = 11;         // donar nom al pin 11 de l’Arduino
int velocitat = 500;         // velocitat de l'acció en ms

//********** Setup ****************************************************************
void setup()
{
  pinMode(led0, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 11 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  Sequencia1();
  delay (velocitat);
  
  Sequencia2();
  delay (velocitat);
  
  Sequencia3();
  delay (velocitat);
  
  Sequencia4();
  delay (velocitat);
  
  Sequencia5();
  delay (velocitat);
  
  Sequencia6();
  delay (velocitat);
  
  Sequencia7();
  delay (velocitat);
  
  Sequencia8();
  delay (velocitat);
  
  Sequencia9();
  delay (velocitat*2);
  
  Sequencia10();
  delay (velocitat);
  
  Sequencia11();
  delay (velocitat);
  
  Sequencia12();
  delay (velocitat);
  
  Sequencia13();
  delay (velocitat);
  
  Sequencia14();
  delay (velocitat);
  
  Sequencia15();
  delay (velocitat);
  
  Sequencia16();
  delay (velocitat);
  
  Sequencia17();
  delay (velocitat);
  
  Sequencia9();
  delay (velocitat*2);
 
}

void Sequencia1()
{
   
  analogWrite(led0, 255);     // posar PWM del pin 3 a 60
  analogWrite(led1, 0);     // posar PWM del pin 5 a 60
  analogWrite(led2, 0);     // posar PWM del pin 6 a 60
  analogWrite(led3, 0);     // posar PWM del pin 9 a 60
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
  analogWrite(led5, 0);     // posar PWM del pin 11 a 60
  
}
void Sequencia2()
{

  analogWrite(led0, 125);     // posar PWM del pin 3 a 60
  analogWrite(led1, 255);     // posar PWM del pin 5 a 60
  analogWrite(led2, 0);     // posar PWM del pin 6 a 60
  analogWrite(led3, 0);     // posar PWM del pin 9 a 60
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
  analogWrite(led5, 0);     // posar PWM del pin 11 a 60
  
}
void Sequencia3()
{
  analogWrite(led0, 60);    // posar PWM del pin 3 a 255
  analogWrite(led1, 125);    // posar PWM del pin 5 a 255
  analogWrite(led2, 255);    // posar PWM del pin 6 a 255
  analogWrite(led3, 0);    // posar PWM del pin 9 a 255
  analogWrite(led4, 0);    // posar PWM del pin 10 a 255
  analogWrite(led5, 0);    // posar PWM del pin 11 a 255
   
}
void Sequencia4()
{
  analogWrite(led0, 0);    // posar PWM del pin 3 a 125
  analogWrite(led1, 60);    // posar PWM del pin 5 a 125
  analogWrite(led2, 125);    // posar PWM del pin 6 a 125
  analogWrite(led3, 255);    // posar PWM del pin 9 a 125
  analogWrite(led4, 0);    // posar PWM del pin 10 a 125
  analogWrite(led5, 0);    // posar PWM del pin 11 a 125
}
void Sequencia5()
{
  analogWrite(led0, 0);     // posar PWM del pin 3 a 60
  analogWrite(led1, 0);     // posar PWM del pin 5 a 60
  analogWrite(led2, 60);     // posar PWM del pin 6 a 60
  analogWrite(led3, 125);     // posar PWM del pin 9 a 60
  analogWrite(led4, 255);     // posar PWM del pin 10 a 60
  analogWrite(led5, 0);     // posar PWM del pin 11 a 60
}
void Sequencia6()
{
  analogWrite(led0, 0);     // posar PWM del pin 3 a 60
  analogWrite(led1, 0);     // posar PWM del pin 5 a 60
  analogWrite(led2, 0);     // posar PWM del pin 6 a 60
  analogWrite(led3, 60);     // posar PWM del pin 9 a 60
  analogWrite(led4, 125);     // posar PWM del pin 10 a 60
  analogWrite(led5, 255);     // posar PWM del pin 11 a 60
}
void Sequencia7()
{
  analogWrite(led0, 0);     // posar PWM del pin 3 a 60
  analogWrite(led1, 0);     // posar PWM del pin 5 a 60
  analogWrite(led2, 0);     // posar PWM del pin 6 a 60
  analogWrite(led3, 0);     // posar PWM del pin 9 a 60
  analogWrite(led4, 60);     // posar PWM del pin 10 a 60
  analogWrite(led5, 125);     // posar PWM del pin 11 a 60
}
void Sequencia8()
{
  analogWrite(led0, 0);     // posar PWM del pin 3 a 60
  analogWrite(led1, 0);     // posar PWM del pin 5 a 60
  analogWrite(led2, 0);     // posar PWM del pin 6 a 60
  analogWrite(led3, 0);     // posar PWM del pin 9 a 60
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
  analogWrite(led5, 60);     // posar PWM del pin 11 a 60

}
void Sequencia9()
{
  analogWrite(led0, 0);     // posar PWM del pin 3 a 60
  analogWrite(led1, 0);     // posar PWM del pin 5 a 60
  analogWrite(led2, 0);     // posar PWM del pin 6 a 60
  analogWrite(led3, 0);     // posar PWM del pin 9 a 60
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
  analogWrite(led5, 0);     // posar PWM del pin 11 a 60

}
void Sequencia10()
{
  analogWrite(led0, 0);     // posar PWM del pin 3 a 60
  analogWrite(led1, 0);     // posar PWM del pin 5 a 60
  analogWrite(led2, 0);     // posar PWM del pin 6 a 60
  analogWrite(led3, 0);     // posar PWM del pin 9 a 60
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
  analogWrite(led5, 255);     // posar PWM del pin 11 a 60

}
void Sequencia11()
{
  analogWrite(led0, 0);     // posar PWM del pin 3 a 60
  analogWrite(led1, 0);     // posar PWM del pin 5 a 60
  analogWrite(led2, 0);     // posar PWM del pin 6 a 60
  analogWrite(led3, 0);     // posar PWM del pin 9 a 60
  analogWrite(led4, 255);     // posar PWM del pin 10 a 60
  analogWrite(led5, 125);     // posar PWM del pin 11 a 60

}

void Sequencia12()
{
  analogWrite(led0, 0);     // posar PWM del pin 3 a 60
  analogWrite(led1, 0);     // posar PWM del pin 5 a 60
  analogWrite(led2, 0);     // posar PWM del pin 6 a 60
  analogWrite(led3, 255);     // posar PWM del pin 9 a 60
  analogWrite(led4, 125);     // posar PWM del pin 10 a 60
  analogWrite(led5, 60);     // posar PWM del pin 11 a 60

}
void Sequencia13()
{
  analogWrite(led0, 0);     // posar PWM del pin 3 a 60
  analogWrite(led1, 0);     // posar PWM del pin 5 a 60
  analogWrite(led2, 255);     // posar PWM del pin 6 a 60
  analogWrite(led3, 125);     // posar PWM del pin 9 a 60
  analogWrite(led4, 60);     // posar PWM del pin 10 a 60
  analogWrite(led5, 0);     // posar PWM del pin 11 a 60

}

void Sequencia14()
{
  analogWrite(led0, 0);     // posar PWM del pin 3 a 60
  analogWrite(led1, 255);     // posar PWM del pin 5 a 60
  analogWrite(led2, 125);     // posar PWM del pin 6 a 60
  analogWrite(led3, 60);     // posar PWM del pin 9 a 60
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
  analogWrite(led5, 0);     // posar PWM del pin 11 a 60

}
void Sequencia15()
{
  analogWrite(led0, 255);     // posar PWM del pin 3 a 60
  analogWrite(led1, 125);     // posar PWM del pin 5 a 60
  analogWrite(led2, 60);     // posar PWM del pin 6 a 60
  analogWrite(led3, 0);     // posar PWM del pin 9 a 60
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
  analogWrite(led5, 0);     // posar PWM del pin 11 a 60

}
void Sequencia16()
{
  analogWrite(led0, 125);     // posar PWM del pin 3 a 60
  analogWrite(led1, 60);     // posar PWM del pin 5 a 60
  analogWrite(led2, 0);     // posar PWM del pin 6 a 60
  analogWrite(led3, 0);     // posar PWM del pin 9 a 60
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
  analogWrite(led5, 0);     // posar PWM del pin 11 a 60

}
void Sequencia17()
{
  analogWrite(led0, 60);     // posar PWM del pin 3 a 60
  analogWrite(led1, 0);     // posar PWM del pin 5 a 60
  analogWrite(led2, 0);     // posar PWM del pin 6 a 60
  analogWrite(led3, 0);     // posar PWM del pin 9 a 60
  analogWrite(led4, 0);     // posar PWM del pin 10 a 60
  analogWrite(led5, 0);     // posar PWM del pin 11 a 60

}
//********** Funcions **********************************************************

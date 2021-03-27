/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const byte ledPin[] = {5, 6, 7, 8, 9, 10, 11, 12};           // donar nom en un array als pins 5, 6, 7 ,8, 9 ,10, 11, 12
const byte buttonPin = 2;                     // donar nom al pin 2 de l’Arduchino
const byte buttonPin2 = 3;                    // donar nom al pin 3 de l'arduchino
boolean button1Estat = LOW;                  // definir variable d'estat pel polsador
boolean button2Estat = LOW;

byte ledNum = 8;                           // definir variable de número de leds
int num = 0;                             // definir variable del número a mostrar

//********** Setup ****************************************************************
void setup()
{
  for(int i = 0; i < ledNum; i++)         // definir els pins 5, 6, 7 i 8 com sortides
  {
    pinMode(ledPin[i], OUTPUT);
  }
  pinMode(buttonPin, INPUT);              // definir el pin 2 com una entrada
  pinMode(buttonPin2, INPUT);
  for(int j = 0; j < ledNum ; j++)        // els leds mostren incialment 0
    { 
      digitalWrite(ledPin[j], 0);
    }
    
}

//********** Loop *****************************************************************
void loop()
{
  button1Estat = digitalRead(buttonPin);
  button2Estat = digitalRead(buttonPin2);
  if (button1Estat == HIGH)
 { 
    num = num + 1;                       // incrementar el número a mostrar
    if (num > 255)                       // quan ja ha ensenyat el 15 tornar al 0  
           {
            num = 0;
           }    
for(int j = 0; j < ledNum ; j++)         // actualitzar estat leds per mostrar número
        { 
        digitalWrite(ledPin[j], bitRead(num, j));
        }
        delay(250); 
 }

else if (button2Estat == 1)
 {
     num = num - 1;
     if (num < 0)
           {
            num = 255;
           }
for (int j = 0; j < ledNum ; j++)
          {
           digitalWrite(ledPin[j], bitRead(num, j));
          }
           delay(250);  
  }
}
                              // per evitar que en una pulsació curta salti més d'un número 



//********** Funcions *************************************************************

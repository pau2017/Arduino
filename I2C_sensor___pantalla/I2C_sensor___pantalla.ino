// !! link video Drive per Isaac !!  -->  https://drive.google.com/drive/folders/1-QTDnI6QW1W-CKQK0L6GRvf6dx8hSLyy?usp=sharing

#include <Wire.h>                
#include <LiquidCrystal_I2C.h>  // llibreria pantalla lcd I2c

const int trigPin = 9;
const int echoPin = 10;
long tim;
int distance;
int lastdistance;

LiquidCrystal_I2C lcd(0x3F,16,2);  // especificacio del tamany (16,2) i 0x3F fa referencia a la direcció de 7 bits en hexadcimal



void setup() {

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
}

void loop() {

  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);    
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);

  tim = pulseIn(echoPin, HIGH);   // distancia /2 ja que hi ha anada i retorn, per tant la distancia es la meitat.
  distance = (tim * 0.034)/2;

  Serial.println(distance);       // Per veure resultats al monitor i identificar problemes.

  if(distance != lastdistance)   // per evitar repeticions de numeros en pantalla i nomes s'executi quan canviin els valors.
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Objecte a; "); 
    lcd.print(distance);
    lcd.print(" cm");
    lastdistance = distance;
  }


  delay (300);
  
}

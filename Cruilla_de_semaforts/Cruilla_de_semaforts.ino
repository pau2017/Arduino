const int ledPin[]={7,8,9,10,11,12,13,14,15,16};
int ledNum=10;
unsigned long T=0;                        //Sincronització amb millis per comparar
unsigned long TEMPO1=1000;
unsigned long TEMPO2=4000;
unsigned long TEMPO3=5000;
unsigned long TEMPO4=10000;
unsigned long TEMPO5=11000;
unsigned long TEMPO6=15000;
unsigned long TEMPO7=20000;
unsigned long TEMPO8=21000;
unsigned long TEMPOPA=0;
unsigned long TEMPOSPA=
unsigned long TEMPOSPB=
unsigned long TEMPOPB=0;
int bp1 = 17;                             //boto peatons Semafor A
int bp2 = 18;                             //boto peatons semafor B
int bp1s = 0;
int bp2s = 0;
int sortides= 9;

void setup() {
  
   Serial.begin(9600);
   for (int i = 0; i < ledNum; i++){
    
   pinMode(ledPin[i], OUTPUT);
   }
   for (int j = 0; j < ledNum ; j++){

   digitalWrite(ledPin[j], 0);
   ;
   }
   pinMode(bp1, INPUT);
   pinMode(bp2, INPUT);
 
}

void loop() {
//*******************************SEMAFOR A*******************************************************

  if (millis() - T < TEMPO5){                            
    
    digitalWrite(7,1);
    digitalWrite(8,0);
    digitalWrite(9,0);
   
  }
  else if (millis() - T > TEMPO5 && millis () - T < TEMPO6){         //Semafor A Verd

     digitalWrite(7,0);
     digitalWrite(8,0);
     digitalWrite(9,1);
   
  }
  else if (millis() - T < TEMPO7 && millis () - T > TEMPO6){         //Semafort A turonja

     digitalWrite(7,0);
     digitalWrite(8,1);
     digitalWrite(9,0);
  }
  else if (millis() - T < TEMPO8 && millis () - T > TEMPO7){         //semafort A vermell

    digitalWrite(7,1);
    digitalWrite(8,0);
    digitalWrite(9,0);
  }
  else if (millis() - T >= TEMPO8){
    T = millis();
    
  }
  
//*******************************SEMAFOR B****************************************************

  if (millis() - T < TEMPO1){                                     //semafort B Vermell

    
    digitalWrite(10,1);
    digitalWrite(11,0);
    digitalWrite(12,0);
  }
  else if (millis() - T > TEMPO1 && millis() - T < TEMPO3){         //semafort B Verd
    digitalWrite(10,0);
    digitalWrite(11,0);
    digitalWrite(12,1);
  }
  else if (millis() - T > TEMPO3 && millis() - T < TEMPO4){          //semafort B Turonja

    digitalWrite(10,0);
    digitalWrite(11,1);
    digitalWrite(12,0);
  }
  else if (millis() - T > TEMPO4 && millis() - T < TEMPO8){         //semafort B Vermell
    digitalWrite(10,1);
    digitalWrite(11,0);
    digitalWrite(12,0);
  }







  
  //if (millis()-ARon <= ARtimon){
    //digitalWrite(7,HIGH);                                                             // Semafor A vermell 
  //}
  //else if (millis()- ARon > ARtimon && millis () - ARon <= (ARtimon + ARtimoff)){
    //digitalWrite(7,LOW);
 // }
  //else if (millis()- ARon > (ARtimon+ARtimoff) && millis () - ARon < (ARtimon + ARtimoff + ARtimon2 + ARtimoff2)){
    //digitalWrite(7,HIGH);
  //}
  
  //else if (millis()-(ARtimon+ARtimoff+ARtimon2+ARtimoff2)>0){
   // ARon=millis();
  //}
  
}

const int ledPin[]={7,8,9,10,11,12};
int ledNum=6;
unsigned long ARon =0;
int ARtimon=11000;
int ARtimoff=9000;
unsigned long AOon=10;
unsigned long AGon=10;
unsigned long BRon=0;
unsigned long BOon=0;
unsigned long BGon=0;

int sortides= 9;

void setup() {
  
   Serial.begin(9600);
   for(int i = 0; i < ledNum; i++){
    
    pinMode(ledPin[i], OUTPUT);
   }
    for(int j = 0; j < ledNum ; j++){

      digitalWrite(ledPin[j], 0);
    }

}

void loop() {
  if (millis()-ARon <= ARtimon){
    digitalWrite(7,HIGH);
  }
  else if (millis()-ARon > ARtimon && millis () - ARon <= (ARtimon + ARtimoff)){
    digitalWrite(7,LOW);
  }
  else if (millis()-(ARtimon+ARtimoff)>0){
    ARon=millis();
  }
  
}

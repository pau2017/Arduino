
//int LedPin [] {7,8,9,10,11,12,13};
//int lednum = 7;
const int ledA = 7;
const int ledB = 8;
const int ledC = 9;
const int ledD = 10;
const int ledE = 11;
const int ledF = 12;
const int ledG = 13;
const int But1 = 2;
bool started = false;

void setup() {
 Serial.begin(9600);
  pinMode(ledA, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(ledB, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(ledC, OUTPUT);     // definir el pin 7 com una sortida
  pinMode(ledD, OUTPUT);     // definir el pin 8 com una sortida
  pinMode(ledE, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(ledF, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(ledG, OUTPUT);     // definir el pin 11 com una sortida
  pinMode(But1, INPUT);
}

  void loop() {
  
  
    if (ButtonClicked(But1)){
    
      LedSequence();
     }
     

    
   
}



void TurnOnLedWhenBut1Clicked (int led){
  TurnOnLed(led,ButtonClicked (But1));
}

void LedSequence(){
  if (!started) // o (started == false)
  {
    started = true;
    int delayTime = 200;
    
    TurnOnLed (ledA, true);
    TurnOnLed (ledB, true);
    TurnOnLed (ledC, true);
    TurnOnLed (ledD, true);
    TurnOnLed (ledE, true);
    TurnOnLed (ledF, false);
    TurnOnLed (ledG, false);
      
    delay (delayTime);

    TurnOnLed (ledA, false);
    TurnOnLed (ledB, true);
    TurnOnLed (ledC, true);
    TurnOnLed (ledD, false);
    TurnOnLed (ledE, false);
    TurnOnLed (ledF, false);
    TurnOnLed (ledG, false);

    delay (delayTime);

    TurnOnLed (ledA, true);
    TurnOnLed (ledB, true);
    TurnOnLed (ledC, false);
    TurnOnLed (ledD, true);
    TurnOnLed (ledE, true);
    TurnOnLed (ledF, true);
    TurnOnLed (ledG, true);

    delay (delayTime+delayTime);


    TurnOnLed (ledA, true);
    TurnOnLed (ledB, true);
    TurnOnLed (ledC, true);
    TurnOnLed (ledD, true);
    TurnOnLed (ledE, false);
    TurnOnLed (ledF, false);
    TurnOnLed (ledG, false);
    
    delay (delayTime);

    TurnOnLed (ledA, false);
    TurnOnLed (ledB, true);
    TurnOnLed (ledC, true);
    TurnOnLed (ledD, true);
    TurnOnLed (ledE, true);
    TurnOnLed (ledF, true);
    TurnOnLed (ledG, false);

    delay (delayTime);

    TurnOnLed (ledA, false);
    TurnOnLed (ledB, true);
    TurnOnLed (ledC, true);
    TurnOnLed (ledD, true);
    TurnOnLed (ledE, false);
    TurnOnLed (ledF, false);
    TurnOnLed (ledG, false);

    delay (delayTime);

    TurnOnLed (ledA, true);
    TurnOnLed (ledB, true);
    TurnOnLed (ledC, true);
    TurnOnLed (ledD, false);
    TurnOnLed (ledE, true);
    TurnOnLed (ledF, true);
    TurnOnLed (ledG, true);

    delay (delayTime+delayTime);

    TurnOnLed (ledA, true);
    TurnOnLed (ledB, true);
    TurnOnLed (ledC, true);
    TurnOnLed (ledD, true);
    TurnOnLed (ledE, true);
    TurnOnLed (ledF, false);
    TurnOnLed (ledG, false);

    delay (delayTime);

    TurnOnLed (ledA, true);
    TurnOnLed (ledB, false);
    TurnOnLed (ledC, true);
    TurnOnLed (ledD, false);
    TurnOnLed (ledE, false);
    TurnOnLed (ledF, false);
    TurnOnLed (ledG, false);

    delay (delayTime);

    TurnOnLed (ledA, false);
    TurnOnLed (ledB, true);
    TurnOnLed (ledC, true);
    TurnOnLed (ledD, true);
    TurnOnLed (ledE, true);
    TurnOnLed (ledF, true);
    TurnOnLed (ledG, true);

    delay (delayTime);
    
    TurnOnAllLeds (!started);
    started = false;
  }
}
void TurnOnAllLeds(bool on)
{
    TurnOnLed(ledA, on);
    TurnOnLed(ledB, on);
    TurnOnLed(ledC, on);
    TurnOnLed(ledD, on);
    TurnOnLed(ledE, on);
    TurnOnLed(ledF, on);
    TurnOnLed(ledG, on);
}

// metodes suport reutilitzables wey, no mames

void TurnOnLed (int led, bool on){
  if (led >= 0){
    digitalWrite(led, on ? 1 : 0);
  }
  
}
bool ButtonClicked (int button){
  return digitalRead (button) == 1 ;
}

//  TurnOnLedWhenBut1Clicked (ledF);
//  TurnOnLed(ledA,ButtonClicked (But1)); 
//  digitalWrite(ledB,ButtonClicked (But1) ? 1 : 0 ); ( if 2 estats dintre del valor del digital Write)
//  digitalWrite(ledC, 0);
//  TurnOnLed(ledD, false);
      

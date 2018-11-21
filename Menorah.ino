 // Copyright (C) Josh Kaplan
 //Some parts are by Avi Herman

int led1 = 12;
int led2 = 11;
int led3 = 10;
int led4 = 9;
int ledcenter= 8;
int led5 = 7;
int led6 = 6;
int led7 = 5;
int led8 = 4;
int piezo = 3;
int tempo = 500;
  
struct MusicStruct {
  int A = 550;
  int As = 582;
  int B = 617;
  int C = 654;
  int Cs = 693;
  int D = 734;
  int Ds = 777;
  int E = 824;
  int F = 873;
  int Fs = 925;
  int G = 980;
  int Gs = 1003;
  int C5  = 523;
  int CS5 = 554;
  int D5  = 587;
  int DS5 = 622;
  int E5  = 659;
  int F5  = 698;
  int FS5 = 740;
  int G5  = 784;
  int GS5 = 831;
  int A5  = 880;
  int AS5 = 932;
  int B5  = 988;
  int C6  = 1047;
  int CS6 = 1109;
  int D6  = 1175;
  int DS6 = 1245;
  int E6  = 1319;
  int F6  = 1397;
  int FS6 = 1480;
  int G6  = 1568;
  int GS6 = 1661;
  int A6  = 1760;
  int AS6 = 1865;
  int B6  = 1976;
  
}Music;

struct LengthStruct {
  
  float half = 0.5;
  float threethirds = 0.75;
  float one = 1.0;
  float one_half = 1.5;
  float two = 2.0;
  float two_half = 2.5;

}Length;

  void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(ledcenter,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
  pinMode(piezo, OUTPUT);

  }
  
void setTone(int pin, int note, int duration) {
  tone(pin, note, duration);
  delay(duration);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(ledcenter, HIGH);


//I have a little dreidel
  setTone(piezo, Music.F, tempo * Length.half);
  setTone(piezo, Music.F, tempo * Length.half);
  setTone(piezo, Music.G, tempo * Length.half);
  setTone(piezo, Music.G, tempo * Length.half);
  setTone(piezo, Music.A, tempo * Length.half);
  setTone(piezo, Music.F, tempo * Length.half);

  digitalWrite(led1, HIGH);


delay(100);

//I made it out of clay
  setTone(piezo, Music.A, tempo * Length.half);
  setTone(piezo, Music.C, tempo * Length.half);
  setTone(piezo, Music.C, tempo * Length.half);
  setTone(piezo, Music.As, tempo * Length.half);
  setTone(piezo, Music.A, tempo * Length.half);
  setTone(piezo, Music.G, tempo * Length.threethirds);
  digitalWrite(led2, HIGH);

delay(200);

//And when its dry and ready
  setTone(piezo, Music.G, tempo * Length.half);
  setTone(piezo, Music.As, tempo * Length.half);
  setTone(piezo, Music.G, tempo * Length.half);
  setTone(piezo, Music.As, tempo * Length.half);
  setTone(piezo, Music.G, tempo * Length.half);
  setTone(piezo, Music.As, tempo * Length.half);
  setTone(piezo, Music.G, tempo * Length.threethirds);

    digitalWrite(led3, HIGH);

delay(100);

//Oh dridel I shall play

  setTone(piezo, Music.G, tempo * Length.half);
  setTone(piezo, Music.C, tempo * Length.half);
  setTone(piezo, Music.C, tempo * Length.half);
  setTone(piezo, Music.As, tempo * Length.half);
  setTone(piezo, Music.G, tempo * Length.half);
  setTone(piezo, Music.F, tempo * Length.threethirds);
  digitalWrite(led4, HIGH);


 //I have a little dreidel
  setTone(piezo, Music.F, tempo * Length.half);
  setTone(piezo, Music.F, tempo * Length.half);
  setTone(piezo, Music.G, tempo * Length.half);
  setTone(piezo, Music.G, tempo * Length.half);
  setTone(piezo, Music.A, tempo * Length.half);
  setTone(piezo, Music.F, tempo * Length.half);

  digitalWrite(led5, HIGH);

delay(100);

//I made it out of clay
  setTone(piezo, Music.A, tempo * Length.half);
  setTone(piezo, Music.C, tempo * Length.half);
  setTone(piezo, Music.C, tempo * Length.half);
  setTone(piezo, Music.As, tempo * Length.half);
  setTone(piezo, Music.A, tempo * Length.half);
  setTone(piezo, Music.G, tempo * Length.threethirds);
  digitalWrite(led6, HIGH);

delay(200);

//And when its dry and ready
  setTone(piezo, Music.G, tempo * Length.half);
  setTone(piezo, Music.As, tempo * Length.half);
  setTone(piezo, Music.G, tempo * Length.half);
  setTone(piezo, Music.As, tempo * Length.half);
  setTone(piezo, Music.G, tempo * Length.half);
  setTone(piezo, Music.As, tempo * Length.half);
  setTone(piezo, Music.G, tempo * Length.threethirds);
    digitalWrite(led7, HIGH);

delay(100);

//Oh dridel I shall play

  setTone(piezo, Music.G, tempo * Length.half);
  setTone(piezo, Music.C, tempo * Length.half);
  setTone(piezo, Music.C, tempo * Length.half);
  setTone(piezo, Music.As, tempo * Length.half);
  setTone(piezo, Music.G, tempo * Length.half);
  setTone(piezo, Music.F, tempo * Length.threethirds);
  digitalWrite(led8, HIGH);

delay(1000);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(ledcenter, LOW);











 //I put my latakes in the air sometimes
  
  setTone(piezo, Music.GS6, tempo * Length.half);
  setTone(piezo, Music.GS6, tempo * Length.half);
  setTone(piezo, Music.GS6, tempo * Length.half);
  setTone(piezo, Music.GS6, tempo * Length.half);
  setTone(piezo, Music.FS6, tempo * Length.half);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  digitalWrite(ledcenter, LOW);
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.FS6, tempo * Length.half);
  setTone(piezo, Music.GS6, tempo * Length.threethirds);
  setTone(piezo, Music.B5, tempo * Length.threethirds);
  setTone(piezo, Music.CS5, tempo * Length.threethirds);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(ledcenter, LOW);

delay(200);

  //Singing ay oh spin the driedel
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.FS6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.one_half);
  setTone(piezo, Music.CS5, tempo * Length.one_half);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(ledcenter, LOW);
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.FS6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.one);
  delay(100);
  setTone(piezo, Music.CS5, tempo * Length.one);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(ledcenter, HIGH);

delay(200);

  //I want to celebrate and live my life 
  setTone(piezo, Music.GS6, tempo * Length.half);
  setTone(piezo, Music.GS6, tempo * Length.half);
  setTone(piezo, Music.GS6, tempo * Length.half);
  setTone(piezo, Music.GS6, tempo * Length.half);
  setTone(piezo, Music.FS6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.half);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(ledcenter, LOW);
  setTone(piezo, Music.FS6, tempo * Length.half);
  setTone(piezo, Music.GS6, tempo * Length.threethirds);
  setTone(piezo, Music.B5, tempo * Length.threethirds);
  setTone(piezo, Music.CS5, tempo * Length.threethirds);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(ledcenter, LOW);

delay(200);

  //Singing ay oh spin the driedel
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.FS6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.one_half);
  setTone(piezo, Music.CS5, tempo * Length.one_half); 
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  digitalWrite(ledcenter, LOW);
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.FS6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.one);
  delay(100);
  setTone(piezo, Music.CS5, tempo * Length.one);
  digitalWrite(led1, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, HIGH);
  digitalWrite(ledcenter, LOW);

delay(100);

  digitalWrite(led1, LOW); 
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(ledcenter, LOW);

delay(150);

  //Oh we say Maotzor
  setTone(piezo, Music.E6, tempo * Length.half);
  digitalWrite(led1, HIGH);
  setTone(piezo, Music.E6, tempo * Length.half);
  digitalWrite(led2, HIGH);
  setTone(piezo, Music.E6, tempo * Length.half);
  digitalWrite(led3, HIGH);
  setTone(piezo, Music.E6, tempo * Length.half);
  digitalWrite(led4, HIGH);
  setTone(piezo, Music.E6, tempo * Length.one);
  digitalWrite(ledcenter, HIGH);
  setTone(piezo, Music.E6, tempo * Length.one);

 delay(200);

  //Oh yes for all eight nights
  setTone(piezo, Music.E6, tempo * Length.half);
  digitalWrite(led5, HIGH);
  setTone(piezo, Music.E6, tempo * Length.half);
  digitalWrite(led6, HIGH);    
  setTone(piezo, Music.E6, tempo * Length.half);
  digitalWrite(led7, HIGH);  
  setTone(piezo, Music.E6, tempo * Length.half);
  digitalWrite(led8, HIGH);
  setTone(piezo, Music.E6, tempo * Length.one);
  digitalWrite(led1, LOW);
  setTone(piezo, Music.E6, tempo * Length.one);
  digitalWrite(led2, LOW);

delay(200);

  //Then we play dridel by the candlelight
  setTone(piezo, Music.E6, tempo * Length.half);
  digitalWrite(led1, LOW);
  setTone(piezo, Music.E6, tempo * Length.half);
  digitalWrite(led2, LOW);
  setTone(piezo, Music.E6, tempo * Length.half);
  digitalWrite(led3, LOW);
  setTone(piezo, Music.E6, tempo * Length.half);
  digitalWrite(led4, LOW);
  setTone(piezo, Music.DS5, tempo * Length.one);
  digitalWrite(ledcenter, LOW);
  setTone(piezo, Music.E6, tempo * Length.half);
  digitalWrite(led5, LOW);
  setTone(piezo, Music.FS6, tempo * Length.half);
  digitalWrite(led6, LOW);
  setTone(piezo, Music.GS6, tempo * Length.one);
  digitalWrite(led7, LOW);
  setTone(piezo, Music.B5, tempo * Length.one);
  digitalWrite(led8, LOW);
  setTone(piezo, Music.CS5, tempo * Length.one);

  
 delay(200);

//And I told you once
  setTone(piezo, Music.E6, tempo * Length.half);
    digitalWrite(led8, HIGH);
  setTone(piezo, Music.E6, tempo * Length.half);
    digitalWrite(led7, HIGH);
  setTone(piezo, Music.E6, tempo * Length.half);
   digitalWrite(led6, HIGH);
  setTone(piezo, Music.E6, tempo * Length.half);
    digitalWrite(led5, HIGH);
  setTone(piezo, Music.E6, tempo * Length.one);
    digitalWrite(ledcenter, HIGH);
  setTone(piezo, Music.E6, tempo * Length.one);
    digitalWrite(led8, HIGH);

delay(200);
  
  //And I told you twice
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.one);
  setTone(piezo, Music.E6, tempo * Length.one);

delay(200);

  //'Bought the miricle of the candlelight
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.DS5, tempo * Length.one);
  setTone(piezo, Music.E6, tempo * Length.half);
  setTone(piezo, Music.FS6, tempo * Length.half);
  setTone(piezo, Music.GS6, tempo * Length.one);
  setTone(piezo, Music.B5, tempo * Length.one);
  setTone(piezo, Music.CS5, tempo * Length.one);
  
delay(1000);

}

int latchPin = 5; //Pin connected to ST_CP of 74HC595
int clockPin = 6; //Pin connected to SH_CP of 74HC595
int dataPin = 4;  //Pin connected to DS of 74HC595

void setup() {
  pinMode(latchPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(latchPin, 0);
  shiftOut(dataPin, clockPin, 223);// azul (invertido)
  shiftOut(dataPin, clockPin, 255);// verde
  shiftOut(dataPin, clockPin, 255);// vermelho
  digitalWrite(latchPin, 1);

  delay(2000);
  
  T();Sp();
  E();Sp();
  S();Sp();
  T();Sp();
  E();Sp();
  Sp();Sp();
  T();Sp();
  E();Sp();
  S();Sp();
  T();Sp();
  E();Sp();
}

// the heart of the program
void shiftOut(int myDataPin, int myClockPin, byte myDataOut) {
  // This shifts 8 bits out MSB first,
  //on the rising edge of the clock,
  //clock idles low
  //internal function setup
  int i=0;
  int pinState;
  pinMode(myClockPin, OUTPUT);
  pinMode(myDataPin, OUTPUT);
  //clear everything out just in case to
  //prepare shift register for bit shifting
  digitalWrite(myDataPin, 0);
  digitalWrite(myClockPin, 0);
  //for each bit in the byte myDataOut&#xFFFD;
  //NOTICE THAT WE ARE COUNTING DOWN in our for loop
  //This means that %00000001 or "1" will go through such
  //that it will be pin Q0 that lights.
    for (i=7; i>=0; i--)  {
      digitalWrite(myClockPin, 0);
      //if the value passed to myDataOut and a bitmask result
      // true then... so if we are at i=6 and our value is
      // %11010100 it would the code compares it to %01000000
      // and proceeds to set pinState to 1.
      if ( myDataOut & (1<<i) ) {
        pinState= 1;
      }else{
        pinState= 0;
      }
      //Sets the pin to HIGH or LOW depending on pinState
      digitalWrite(myDataPin, pinState);
      //register shifts bits on upstroke of clock pin
      digitalWrite(myClockPin, 1);
      //zero the data pin after shift to prevent bleed through
      digitalWrite(myDataPin, 0);
    }
  //stop shifting
  digitalWrite(myClockPin, 0);
}

void A(){                                            //Alphabet A
  signal(B10000001);                             // 0st Column
  signal(B01101111);                             // 0nd Column   
  signal(B01101111);                             // 3rd Column
  signal(B01101111);                             // 4th Column
  signal(B10000001);                             // 5th column
}

void B(){
  signal(B00000001);
  signal(B01101101);
  signal(B01101101);
  signal(B01101101);
  signal(B10000011);  
}

void C(){
  signal(B10000011);
  signal(B01111101);
  signal(B01111101);
  signal(B01111101);
  signal(B10111011);
}

void D(){
  signal(B00000001);
  signal(B01111101);
  signal(B01111101);
  signal(B01111101);
  signal(B10000011);
}

void E(){
  signal(B00000001);
  signal(B01101101);
  signal(B01101101);
  signal(B01101101);
  signal(B01111101);
}

void Ff(){
  signal(B00000001);
  signal(B01101111);
  signal(B01101111);
  signal(B01101111);
  signal(B01111111);
}

void G(){
  signal(B10000011);
  signal(B01111101);
  signal(B01110101);
  signal(B01110101);
  signal(B10110001);
}

void H(){
  signal(B00000001);
  signal(B11101111);
  signal(B11101111);
  signal(B11101111);
  signal(B00000001);
}

void I(){
  signal(B01111101);
  signal(B00000001);  
  signal(B01111101);
}

void J(){
  signal(B11111011);
  signal(B11111101);
  signal(B11111101);
  signal(B11111101);
  signal(B00000011);    
}

void K(){
  signal(B00000001);
  signal(B11101111);
  signal(B11010111);
  signal(B10111011);
  signal(B11111101);
}

void L(){
  signal(B00000001);
  signal(B11111101);
  signal(B11111101);
  signal(B11111101);
  signal(B11111101);
}

void M(){
  signal(B00000001);
  signal(B10111111);
  signal(B11011111);
  signal(B11101111);
  signal(B11011111);
  signal(B10111111);
  signal(B00000001);
}

void N(){
  signal(B00000001);
  signal(B11011111);
  signal(B11101111);
  signal(B11110111);
  signal(B00000001);
}

void O(){
  signal(B10000011);
  signal(B01111101);
  signal(B01111101);
  signal(B01111101);
  signal(B10000011);
}

void P(){
  signal(B00000001);
  signal(B01101111);
  signal(B01101111);
  signal(B10011111);
}

void Q(){
  signal(B10000011);
  signal(B01111101);
  signal(B01110101);
  signal(B01111011);
  signal(B10000101);
}

void R(){
  signal(B00000001);
  signal(B01101111);
  signal(B01100111);
  signal(B01101011);
  signal(B10011101);
}

void S(){
  signal(B10011101);
  signal(B01101101);
  signal(B01101101);
  signal(B01101101);
  signal(B01110011);
}

void T(){
  signal(B01111111);
  signal(B01111111);
  signal(B00000001);
  signal(B01111111);
  signal(B01111111);
}

void U(){
  signal(B00000011);
  signal(B11111101);
  signal(B11111101);
  signal(B11111101);
  signal(B00000011);
}

void V(){
  signal(B00011111);
  signal(B11100111);
  signal(B11111001);
  signal(B11001111);
  signal(B00011111);
}  

void W(){
  signal(B00000001);
  signal(B11111011);
  signal(B11100111);
  signal(B11111011);
  signal(B00000001);
}

void X(){
  signal(B00111001);
  signal(B11010111);
  signal(B11101111);
  signal(B11010111);
  signal(B00111001);
}

void Y(){
  signal(B00111111);
  signal(B11011111);
  signal(B11100001);
  signal(B11011111);
  signal(B00111111);
}

void Z(){
  signal(B01111001);
  signal(B01110101);
  signal(B01101101);
  signal(B01011101);
  signal(B00111101);
}

void Sp(){
  signal(B11111111);
  signal(B11111111);
  signal(B11111111);
  signal(B11111111);
  signal(B11111111);
}

byte flipByte(byte c){
  c = ((c>>1)&0x55)|((c<<1)&0xAA);
  c = ((c>>2)&0x33)|((c<<2)&0xCC);
  c = (c>>4) | (c<<4) ;
  
  return c;
}

void signal(byte data){
  digitalWrite(latchPin, 0);
  shiftOut(dataPin, clockPin, flipByte(data));// azul (invertido)
  shiftOut(dataPin, clockPin, data);// verde
  shiftOut(dataPin, clockPin, flipByte(data));// vermelho
  digitalWrite(latchPin, 1);
  delay(100);                         // change this accordimg to speed of motor
}

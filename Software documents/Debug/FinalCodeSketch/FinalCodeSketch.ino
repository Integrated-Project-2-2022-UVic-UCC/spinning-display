int latchPin = 5; //Pin connected to ST_CP of 74HC595
int clockPin = 6; //Pin connected to SH_CP of 74HC595
int dataPin = 4;  //Pin connected to DS of 74HC595
int magPin = 7;   //Pin connected to Hall AH3582-P-B

void setup() {
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(magPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
//  float a = 255;
//  for(float i = 0; i <= 8; i++){
//    Serial.println(a);
//    digitalWrite(latchPin, 0);
//    shiftOut(a);// Green (Inverted) primeiro
//    shiftOut(a);// Red Primeiro
//    shiftOut(a);// Blue (Inverted)
//    digitalWrite(latchPin, 1);
//    a = a-pow(2,i);
//    delay(50);  
//  }

//   Initial way of drawing letters
  if (digitalRead(magPin) == LOW) {
    T();Sp1();
    E();Sp1();
    S();Sp1();
    T();Sp1();
  }
}

// Cascading function
void shiftOut(byte myDataOut) {
  // This shifts 8 bits out MSB first,
  int i=0;
  int pinState;

  // Clear the OUTPUT
  digitalWrite(dataPin, 0);
  digitalWrite(clockPin, 0);
  
  // For each bit in date, a clock pulse is sent along with a data draw
    for (i=7; i>=0; i--)  {
      // Ensures that the clock is 0
      digitalWrite(clockPin, 0);
      
      // See if the bit exists inside the line to send to the data pin
      // Example: 10100000
      //          00100000
      // Pin state true
      if ( myDataOut & (1<<i) ) {
        pinState= 1;
      }else{
        pinState= 0;
      }
      
      // Sets the pin to HIGH or LOW depending on pinState
      digitalWrite(dataPin, pinState);
      
      // Clock pulse, to save the data
      digitalWrite(clockPin, 1);
      digitalWrite(dataPin, 0);
    }
  // Stop the clok
  digitalWrite(clockPin, 0);
}

void A(){                                        //Alphabet A
  draw(B10000001);                             // 1st Column
  draw(B01101111);                             // 2nd Column   
  draw(B01101111);                             // 3rd Column
  draw(B01101111);                             // 4th Column
  draw(B10000001);                             // 5th column
}

void B(){
  draw(B00000001);
  draw(B01101101);
  draw(B01101101);
  draw(B01101101);
  draw(B10000011);  
}

void C(){
  draw(B10000011);
  draw(B01111101);
  draw(B01111101);
  draw(B01111101);
  draw(B10111011);
}

void D(){
  draw(B00000001);
  draw(B01111101);
  draw(B01111101);
  draw(B01111101);
  draw(B10000011);
}

void E(){
  draw(B00000001);
  draw(B01101101);
  draw(B01101101);
  draw(B01101101);
  draw(B01111101);
}

void Ff(){
  draw(B00000001);
  draw(B01101111);
  draw(B01101111);
  draw(B01101111);
  draw(B01111111);
}

void G(){
  draw(B10000011);
  draw(B01111101);
  draw(B01110101);
  draw(B01110101);
  draw(B10110001);
}

void H(){
  draw(B00000001);
  draw(B11101111);
  draw(B11101111);
  draw(B11101111);
  draw(B00000001);
}

void I(){
  draw(B01111101);
  draw(B00000001);  
  draw(B01111101);
}

void J(){
  draw(B11111011);
  draw(B11111101);
  draw(B11111101);
  draw(B11111101);
  draw(B00000011);    
}

void K(){
  draw(B00000001);
  draw(B11101111);
  draw(B11010111);
  draw(B10111011);
  draw(B11111101);
}

void L(){
  draw(B00000001);
  draw(B11111101);
  draw(B11111101);
  draw(B11111101);
  draw(B11111101);
}

void M(){
  draw(B00000001);
  draw(B10111111);
  draw(B11011111);
  draw(B11101111);
  draw(B11011111);
  draw(B10111111);
  draw(B00000001);
}

void N(){
  draw(B00000001);
  draw(B11011111);
  draw(B11101111);
  draw(B11110111);
  draw(B00000001);
}

void O(){
  draw(B10000011);
  draw(B01111101);
  draw(B01111101);
  draw(B01111101);
  draw(B10000011);
}

void P(){
  draw(B00000001);
  draw(B01101111);
  draw(B01101111);
  draw(B10011111);
}

void Q(){
  draw(B10000011);
  draw(B01111101);
  draw(B01110101);
  draw(B01111011);
  draw(B10000101);
}

void R(){
  draw(B00000001);
  draw(B01101111);
  draw(B01100111);
  draw(B01101011);
  draw(B10011101);
}

void S(){
  draw(B10011101);
  draw(B01101101);
  draw(B01101101);
  draw(B01101101);
  draw(B01110011);
}

void T(){
  draw(B01111111);
  draw(B01111111);
  draw(B00000001);
  draw(B01111111);
  draw(B01111111);
}

void U(){
  draw(B00000011);
  draw(B11111101);
  draw(B11111101);
  draw(B11111101);
  draw(B00000011);
}

void V(){
  draw(B00011111);
  draw(B11100111);
  draw(B11111001);
  draw(B11001111);
  draw(B00011111);
}  

void W(){
  draw(B00000001);
  draw(B11111011);
  draw(B11100111);
  draw(B11111011);
  draw(B00000001);
}

void X(){
  draw(B00111001);
  draw(B11010111);
  draw(B11101111);
  draw(B11010111);
  draw(B00111001);
}

void Y(){
  draw(B00111111);
  draw(B11011111);
  draw(B11100001);
  draw(B11011111);
  draw(B00111111);
}

void Z(){
  draw(B01111001);
  draw(B01110101);
  draw(B01101101);
  draw(B01011101);
  draw(B00111101);
}

void Sp(){
  draw(B11111111);
  draw(B11111111);
  draw(B11111111);
  draw(B11111111);
  draw(B11111111);
}

void Sp1(){
  draw(B11111111);
}

// Flip the Column fo the next shifter
byte flipByte(byte c){
  c = ((c>>1)&0x55)|((c<<1)&0xAA);
  c = ((c>>2)&0x33)|((c<<2)&0xCC);
  c = (c>>4) | (c<<4) ;
  
  return c;
}

// Draw the Column
void draw(byte data){
  // Send the signal
  digitalWrite(latchPin, 0);
  shiftOut(flipByte(data)); // Green
  shiftOut(data);           // Red
  shiftOut(flipByte(data)); // Blue
  digitalWrite(latchPin, 1);

  // Depends on the spin of the motor 
  //delay(1);
  delayMicroseconds(500);                         
}

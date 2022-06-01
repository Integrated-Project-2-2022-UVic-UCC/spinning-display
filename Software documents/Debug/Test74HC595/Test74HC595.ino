int latchPin = 5;  // Latch pin of 74HC595 is connected to Digital pin 5
int clockPin = 6; // Clock pin of 74HC595 is connected to Digital pin 6
int dataPinG = 4;  // Data pin of 74HC595 is connected to Digital pin 4
int dataPinB = 3;  // Data pin of 74HC595 is connected to Digital pin 3
 
byte ledsB = 0;    // Variable to hold the pattern of which LEDs are currently turned on or off
byte ledsG = 0;    // Variable to hold the pattern of which LEDs are currently turned on or off

/*
 * setup() - this function runs once when you turn your Arduino on
 * We initialize the serial connection with the computer
 */
void setup() 
{
  // Set all the pins of 74HC595 as OUTPUT
  pinMode(latchPin, OUTPUT);
  pinMode(dataPinG, OUTPUT);  
  pinMode(dataPinB, OUTPUT); 
  pinMode(clockPin, OUTPUT);
}

/*
 * loop() - this function runs over and over again
 */
void loop() 
{
  ledsB = 0; // Initially turns all the LEDs off, by giving the variable 'leds' the value 0
  ledsG = 0; // Initially turns all the LEDs off, by giving the variable 'leds' the value 0
  updateShiftRegister();
  delay(250);
  int j = 7;
  for (int i = 0; i < 8; i++) // Turn all the LEDs ON one by one.
  {
    bitSet(ledsG, j);
    bitSet(ledsB, i);    // Set the bit that controls that LED in the variable 'leds'
    updateShiftRegister();
    j--;
    delay(10000);
  }
}

/*
 * updateShiftRegister() - This function sets the latchPin to low, then calls the Arduino function 'shiftOut' to shift out contents of variable 'leds' in the shift register before putting the 'latchPin' high again.
 */
void updateShiftRegister()
{
   digitalWrite(latchPin, LOW);
   shiftOut(dataPinG, clockPin, MSBFIRST, 253);
   digitalWrite(latchPin, HIGH);
}

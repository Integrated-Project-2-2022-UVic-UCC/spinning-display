//Define what pins are gonna be used
#define RlatchPin
#define RclockPin
#define RdataPin 
#define Roe 
#define GlatchPin
#define GclockPin
#define GdataPin 
#define Goe
#define BlatchPin
#define BclockPin
#define BdataPin 
#define Boe

void setup() {
  //Test the builtin LED
  pinMode(LED_BUILTIN, OUTPUT);

  //Define the data pins as ourput
  pinMode(RlatchPin, OUTPUT);
  pinMode(RdataPin, OUTPUT);
  pinMode(RclockPin, OUTPUT);
  pinMode(GlatchPin, OUTPUT);
  pinMode(GdataPin, OUTPUT);
  pinMode(GclockPin, OUTPUT);
  pinMode(BlatchPin, OUTPUT);
  pinMode(BdataPin, OUTPUT);
  pinMode(BclockPin, OUTPUT);

  //Start serial port for debug
  Serial.begin(9600);
  Serial.println("reset");
}

//responsable to turn the red ligth on  
void red() { 
  
}

//responsable to turn the blue ligth on
void blue() { 
  
}

//responsable to turn the green ligth on
void green() { 
  
}

//responsable to mix the color that needs to be turned on
void colors() { 
  
}

//responsable to asigne what LEDs need to turn on
bool led() { 
  return true;
}

//main code
void loop() {
  /*input: text to display and a color of each LED
   * "b" = Blue
   * "r" = Red
   * "g" = Green
   * "c" = Cyan
   * "p" = Pink
   * "m" = Magenta
   * "w" = White
   * " " = Off

   char myText[12] = "Hello World"
   char myColors[12] = "btgcp wbtgcp"
  */



  
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}

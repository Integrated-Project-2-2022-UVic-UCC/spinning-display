void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void red() { //responsable to turn the red ligth on
  
}

void blue() { //responsable to turn the blue ligth on
  
}

void green() { //responsable to turn the green ligth on
  
}

void colors() { //responsable to mix the color that needs to be turned on
  
}

bool led() { //responsable to asigne what LEDs need to turn on

  return true;
}


void loop() { //main code
  /*input: csv with each column or a text to display and a color of each LED
  char myArray[8][8] = { {"b","p"," "," "," "," "," "," "},
                          {"b","p"," "," "," "," "," "," "},
                          {"r","m"," "," "," "," "," "," "},
                          {"r","m"," "," "," "," "," "," "},
                          {"g","w"," "," "," "," "," "," "},
                          {"g","w"," "," "," "," "," "," "},
                          {"c"," "," "," "," "," "," "," "},
                          {"c"," "," "," "," "," "," "," "}};
  OR
  char myText[12] = "Hello World"
  char myColors[12] = "btgcp wbtgcp"
  */



  
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}

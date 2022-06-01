void setup() {
  //start serial connection
  Serial.begin(9600);
  //configure pin 7 as an input
  pinMode(7, INPUT_PULLUP);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  //read the value into a variable
  int sensorVal = digitalRead(7);
  //print out the value of the sensor
  Serial.println(sensorVal);
  if (sensorVal == HIGH) {
    digitalWrite(LED_BUILTIN, LOW);
  } else {
    digitalWrite(LED_BUILTIN, HIGH);
  }
}

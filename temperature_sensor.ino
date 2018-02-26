void setup() {
  Serial.begin(9600); // this sets up the Serial montior
}

void loop() {
  int rawVoltage = analogRead(A0); //reads raw voltage from the LM35 output
  int celciusTemp = rawVoltage * 0.48828125; //converts that into celcus
  Serial.println(celciusTemp); //prints celcius to Serial monitor
  delay(500);
}

const int redLed = 11;
const int yellowLed = 10;
const int greenLed = 9;
const int pedestrianButton = 2;

void setup() {
  pinMode(redLed, OUTPUT);
  pinMode(yellowLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
  pinMode(pedestrianButton, INPUT);
  //Serial.begin(9600);
 
}

void loop() {
  // Normal Traffic light sequence
  digitalWrite(greenLed, HIGH);
  delay(5000);

 // Serial.print("Button Pressed: ");
 // Serial.println(digitalRead(pedestrianButton));

  if(digitalRead(pedestrianButton) == HIGH)
  {
    // Pedestrian button pressed, transition to yellow then red quickly
    digitalWrite(greenLed, LOW);
    digitalWrite(yellowLed, HIGH);
    delay(2000);
    digitalWrite(yellowLed, LOW);
    digitalWrite(redLed, HIGH);
    delay(10000); // longer red for pedestrian
    digitalWrite(redLed, LOW);
    
  }
  else{
    // normal transition
    digitalWrite(greenLed, LOW);
    digitalWrite(yellowLed, HIGH);
    delay(2000);
    digitalWrite(yellowLed, LOW);
    digitalWrite(redLed, HIGH);
    delay(2000);
    digitalWrite(redLed, LOW);

  }

}

const int redLed = 11;
const int yellowLed = 10;
const int greenLed = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);

}

void loop() {
  // green light for 5 seconds
  digitalWrite(greenLed, HIGH);
  delay(5000);
  digitalWrite(greenLed, LOW);
  
  //yellow for 2 seconds
  digitalWrite(yellowLed, HIGH);
  delay(2000);
  digitalWrite(yellowLed, LOW);

  //red light for 5 seconds
  digitalWrite(redLed, HIGH);
  delay(5000);
  digitalWrite(redLed, LOW);
  

}

int ledPin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(ledPin, !digitalRead(ledPin));
  delay(1000);

}

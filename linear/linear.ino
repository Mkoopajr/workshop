int ledPins[] = {
  2, 3, 4, 5, 6, 7, 8
};

int pinCount = sizeof(ledPins) / sizeof(int);

void setup() {
  // put your setup code here, to run once:
  for (int thisPin = 0; thisPin < pinCount; ++thisPin) {
    pinMode(ledPins[thisPin], OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:

  for (int thisPin = 0; thisPin < pinCount; ++thisPin) {
    digitalWrite(ledPins[thisPin], !digitalRead(ledPins[thisPin]));
    delay(1000);
  }
 
}

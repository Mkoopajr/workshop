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

  for (int thisPin = 0, startPin = 3; thisPin <= startPin; ++thisPin) {
    if (thisPin == 0) {
      digitalWrite(ledPins[startPin], !digitalRead(ledPins[startPin]));
    } else {
      digitalWrite(ledPins[startPin + thisPin], !digitalRead(ledPins[startPin + thisPin]));
      digitalWrite(ledPins[startPin - thisPin], !digitalRead(ledPins[startPin - thisPin]));
    }
    delay(1000);
  }
 
}

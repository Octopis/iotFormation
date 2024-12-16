#define LED_PIN 2
//#define BUTTON_PIN 0
const int BUTTON_PIN = 0;
int val = 0;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
}
void loop() {
  val = digitalRead(BUTTON_PIN);
  //printf(val);
  Serial.print(val);
  Serial.print("\n");
  digitalWrite(LED_PIN, val);
  /*if (digitalRead(BUTTON_PIN) == HIGH) {
    digitalWrite(LED_PIN, HIGH);
  }
  else {
    digitalWrite(LED_PIN, LOW);
  }*/
}
int a[4] = {1, 2, 4, 7};

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(a[i], OUTPUT);
  }
}


void loop() {
  digitalWrite(13, LOW);
  // Initially turn off the light on the board.
  for (int i = 0; i < 4; i++) {
    digitalWrite(a[i], HIGH);
    delay(1000);
    digitalWrite(a[i], LOW);
  }

}

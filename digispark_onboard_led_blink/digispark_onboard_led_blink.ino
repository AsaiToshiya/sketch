void setup() {
  pinMode(1, OUTPUT);
}

void loop() {
  // 点灯
  digitalWrite(1, HIGH);
  delay(500);

  // 消灯
  digitalWrite(1, LOW);
  delay(500);
}

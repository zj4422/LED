int potPin = A0;      // 可調式電阻接A0
int ledPin = 9;       // LED接D9
int val = 0;          // 儲存讀取值

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  val = analogRead(potPin);           // 讀取可調式電阻值（0~1023）
  int ledValue = map(val, 0, 1023, 0, 255); // 轉換為PWM值（0~255）
  analogWrite(ledPin, ledValue);      // 控制LED亮度
}
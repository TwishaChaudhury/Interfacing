byte a, b, c;
void setup() {
  // put your setup code here, to run once:
  pinMode(13, INPUT);
  pinMode(12, INPUT);
  pinMode(11, INPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  a = digitalRead(13);
  b = digitalRead(12);
  c = digitalRead(11);
  if (a^b^c == HIGH)
  {
    digitalWrite(8, HIGH);
  }
  else
  {
    digitalWrite(8, LOW);
  }
  if ((a&b)|(b&c)|(a&c) == HIGH)
  {
    digitalWrite(9, HIGH);
  }
  else
  {
    digitalWrite(9, LOW);
  }
}

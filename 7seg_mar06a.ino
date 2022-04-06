void one();
void three();
void setup() {
  // put your setup code here, to run once:
  for(int i=2;i<9;i++)
   pinMode(i,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

one();
three();
}

void one(){
  digitalWrite(2,LOW);
   digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
     digitalWrite(5,LOW);
      digitalWrite(6,LOW);
       digitalWrite(7,LOW);
        digitalWrite(8,LOW);
        delay(1000);
}

void three(){
  digitalWrite(2,HIGH);
   digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
     digitalWrite(5,HIGH);
      digitalWrite(6,LOW);
       digitalWrite(7,LOW);
        digitalWrite(8,HIGH);
        delay(1000);
}

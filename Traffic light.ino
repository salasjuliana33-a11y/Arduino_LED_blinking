void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,HIGH);
  delay(500);
  digitalWrite(13,LOW);
  delay(500);

  digitalWrite(8,HIGH);
  delay(500);
  digitalWrite(8,LOW);
  delay(500);

  digitalWrite(3,HIGH);
  delay(500);
  digitalWrite(3,LOW);
  delay(500);
}

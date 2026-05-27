int redPin=6;
int bright=255; 
int dim=125;


void setup() {
  // put your setup code here, to run once:
 pinMode(redPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(redPin,bright);  
  delay(500);
  analogWrite(redPin,dim);
  delay(500);
}

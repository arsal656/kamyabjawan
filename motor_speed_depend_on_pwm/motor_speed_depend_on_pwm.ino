void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int x= analogRead(A0);
analogWrite(5,x);
Serial.println(x);
delay(100);
}

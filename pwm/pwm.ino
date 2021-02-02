void setup() {
  // put your setup code here, to run once:
pinMode(5,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 analogWrite(5,127);
 Serial.println(127);
}

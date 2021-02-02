
int a;
int b;
void setup() {
  // put your setup code here, to run once:
pinMode(6,OUTPUT);
Serial.begin(9600);
}

void loop() {
  for (a=0; a<=255; a++){
   analogWrite(6,a);
  Serial.println(a);
  delay (100);}
  // put your main code here, to run repeatedly:

}

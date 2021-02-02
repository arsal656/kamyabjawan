const int ledPin=13,ldrPin=A0;
void setup() {
  Serial.begin(9600);
  pinMode(ledPin,OUTPUT);
  pinMode(ldrPin,INPUT);
}

void loop() {
 int ldrStatus= analogRead(ldrPin);
 if(ldrStatus<=200){
  digitalWrite(ledPin,HIGH);
  Serial.print("It's DARK. LED ON");
  }
else {
    digitalWrite(ledPin,LOW);
  Serial.print("It's DARK. LED OFF");
  Serial.println(ldrStatus);
  }
}

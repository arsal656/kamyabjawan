char a;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT); 
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
 { a=Serial.read();
  a=digitalRead(13);}
  if(a=='1')
  {digitalWrite(13,HIGH);
}
  else if (a=='2')
  {digitalWrite(13,LOW);
 }

}

char a;
void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT); 
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  a=Serial.read();
  if(a==1)
  {digitalWrite(13,HIGH);
  delay(100);}
  else if (a==2)
  {digitalWrite(13,LOW);
  delay(100);}

}

float a;
void setup() {
  // put your setup code here, to run once:
pinMode(5,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 a= analogRead(A0);
 Serial.println(a);

 if(a>0 && a<255)
 {analogWrite(5,64);}

 if(a>256 && a<512)
 {analogWrite(5,127);}

  if(a>513 && a<767)
 {analogWrite(5,191);}

   if(a>768 && a<1000)
 {analogWrite(5,210);}

  if(a==1023)
 {analogWrite(5,255);}









 

}

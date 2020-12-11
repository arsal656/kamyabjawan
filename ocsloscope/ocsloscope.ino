int c;
int d;
int i;
int j;
float x; 
float z;
void setup(){
pinMode(5,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

for(c=0; c<=255; c++){
  analogWrite(5,c );
  i=analogRead(A0);
  x=i*(5.0/1023.0);
  Serial.println(x);
  delay(100);}

  for(d=255; d>=0; d++){
  analogWrite(5,d);
  j=analogRead(A0);
  z=j*(5.0/1023.0);
  Serial.println(z);
  delay(100);}
}
  
  
  


 


 

char a;

void setup() {
  // put your setup code here, to run once:
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
 if(Serial.available())
 {a=Serial.read();}

 if(a=='1')
 {
 digitalWrite(12,HIGH);
 
 Serial.println(a);
 }
 
else if(a=='2')  {
 digitalWrite(11,HIGH);
 
 Serial.println(a);
 }
 else if(a=='3')
  {
 digitalWrite(10,HIGH);
 
 Serial.println(a);
 }
 else if(a=='4')
  {
 digitalWrite(12,LOW);
 
 Serial.println(a);
 }
 else if(a=='5')
  {
 digitalWrite(11,LOW);
 
 Serial.println(a);
 }
 else if(a=='6')
  {
 digitalWrite(10,LOW);
 
 Serial.println(a);
 }
 delay(10);
 }



char a;

void setup() {
  pinMode(11,OUTPUT);
   pinMode(12,OUTPUT);
    pinMode(10,OUTPUT);
    Serial.begin(9600);
}

void loop() {
 if(Serial.available())
 a=Serial.read();
 else if (a=='1'){
  digitalWrite(12, HIGH);}
   else if (a=='2'){
  digitalWrite(11, HIGH);}
   else if (a=='3'){
  digitalWrite(10, HIGH);}
   else if (a=='4'){
  digitalWrite(12, LOW);}
  else if (a=='5'){
  digitalWrite(11, LOW);}
   else if (a=='6'){
  digitalWrite(10, LOW);}
 
delay(1000);
}


void setup() {
  pinMode(2,OUTPUT);
   pinMode(3,OUTPUT);
    pinMode(8,OUTPUT);
   
 
  Serial.begin(9600);
}


void loop() {
  
  int sensorValue1 = analogRead(A0);
  int sensorValue2 = analogRead(A1);
  
  float voltage1 = sensorValue1 * (5.0/ 1023.0);
  float voltage2 = sensorValue2 * (5.0/ 1023.0);
 
  Serial.println(voltage1);
    Serial.println(voltage2);

  if(voltage1   >  0.51  && voltage2 >  0.51)
  { digitalWrite(2,HIGH);
   digitalWrite(3,HIGH);
   digitalWrite(8,LOW);
  }
 else

 
 { 
   digitalWrite(2,LOW);
   digitalWrite(3,LOW);
   digitalWrite(8,HIGH);}

  
  
 
 }
   
  


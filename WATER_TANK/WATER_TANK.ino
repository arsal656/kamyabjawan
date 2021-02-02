void setup() {
  pinMode(2,OUTPUT);
   pinMode(3,OUTPUT);
    pinMode(4,OUTPUT);
     pinMode(10,OUTPUT);
   
 
  Serial.begin(9600);
}


void loop() {
  
  int sensorValue = analogRead(A0);
 
  
  float voltage = sensorValue * (5.0/ 1023.0);

 
  
   
   if(voltage   > 1.25   )
  { digitalWrite(2,HIGH);
   digitalWrite(3,LOW);
   digitalWrite(4,LOW);
   digitalWrite(10,HIGH);
  }
  if(voltage > 2.5 )

 
 { 
   digitalWrite(2,HIGH);
   digitalWrite(3,HIGH);
   digitalWrite(4,LOW);
   digitalWrite(10,HIGH);}
   
  if(voltage > 4.7 )

 
 { 
   digitalWrite(2,HIGH);
   digitalWrite(3,HIGH);
   digitalWrite(4,HIGH);
   digitalWrite(10,HIGH);
    }
    
   else  (  voltage > 5.0);
   {digitalWrite(10,LOW);}
   

  
  
 
 }
   
  


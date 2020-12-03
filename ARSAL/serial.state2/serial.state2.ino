bool a;

void setup() {
  
  pinMode(2,INPUT); 
  Serial.begin(9600);
}

void loop() {
  
 if(Serial.available()){
   char x= Serial.read();
  Serial.println(x);}
  delay(1000);
}

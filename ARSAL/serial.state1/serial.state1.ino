bool a;

void setup() {
  
  pinMode(2,INPUT); 
  Serial.begin(9600);
}

void loop() {
  
 if(Serial.available())
  Serial.read();
  Serial.println(a);
  delay(1000);
}

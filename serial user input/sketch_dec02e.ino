bool a;

void setup() {
  
  pinMode(2,INPUT); 
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  Serial.read();
  Serial.print(a);
  delay(100);

}

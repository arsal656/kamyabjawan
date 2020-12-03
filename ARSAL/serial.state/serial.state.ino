bool a;

void setup() {
  
  pinMode(2,INPUT); 
  Serial.begin(9600);
}

void loop() {
  a=digitalRead(2);
  Serial.println(a);
  delay(1000);
}
  

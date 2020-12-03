bool a;

void setup() {
  
  pinMode(2,INPUT); 
  Serial.begin(9600);
}

void loop() {
  a=digitalRead(2);
 if(a==HIGH){
  Serial.println("1");
 }
 else if(a==LOW){
  Serial.println("0");
 }
 delay(1000);
}

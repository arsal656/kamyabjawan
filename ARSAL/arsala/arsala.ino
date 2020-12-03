
int led1 =13;
bool a;
bool b;




void setup() {
  pinMode( led1, OUTPUT);
  pinMode(2,INPUT); 
  pinMode(3,INPUT);
}

void loop() {
  a=digitalRead(2);
  digitalWrite(led1,a);
  b=digitalRead(3);
  digitalWrite(led1,b);

}

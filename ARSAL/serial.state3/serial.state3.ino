bool state = false;
char x;
int led = 10;


void setup() {
  
    pinMode(led,OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  
 if(Serial.available()){
   x = Serial.read();}
  if (x== '1'){
    state=true;}
    else if (x== '2'){
      state=false;
    }
  
 digitalWrite(led,state); }
  

  



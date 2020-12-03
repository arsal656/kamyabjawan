const int led1=12;
const int led2=11;
const int led3=10;
const int buttonpin=3;

int initial =0;
int oldstate=0;
int buttonstate=0;

void setup() {
  
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
   pinMode(buttonpin,INPUT);
   
  

}

void loop() {
 buttonstate=digitalRead(buttonpin);
 if(buttonstate==HIGH) {
  delay(50);
  buttonstate=digitalRead(buttonpin);
   if(buttonstate==LOW)
   { initial = oldstate +1 ; }
 }else{
  delay(100);}
  switch (initial){
    case 1: 
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
   oldstate=initial;
   break;
    case 2: 
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    oldstate=initial;
    break;
    case 3: 
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    oldstate=initial;
    break;
   
    case3: 
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    oldstate=initial;
    break;
    default:
     
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    oldstate=0;
    break; 
    
 }

}

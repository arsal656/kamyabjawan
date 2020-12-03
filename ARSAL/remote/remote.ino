
  #define led1 12
  #define led2 11
  #define led3 10
  bool a;
  bool b;
  bool c;
  void setup()
  {
    pinMode ( led1,OUTPUT);
    pinMode (2,INPUT);
        pinMode ( led2,OUTPUT);
    pinMode (3,INPUT);
        pinMode ( led3,OUTPUT);
    pinMode (4,INPUT);
    
 
}

void loop() {
  a=digitalRead(2);
  digitalWrite(led1,a);
    b=digitalRead(3);
  digitalWrite(led2,b);
    c=digitalRead(4);
  digitalWrite(led3,c);
  

}

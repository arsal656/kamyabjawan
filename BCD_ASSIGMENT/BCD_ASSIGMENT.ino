 int a=4;
 int b=5;
 int c=6;
 int d=7;
 int button= 3;
 
 bool F;
 
 char x;
 


 

void setup() {
  // put your setup code here, to run once:
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(button,INPUT);
}
  
  

 

  


void loop() {
  // put your main code here, to run repeatedly:
 
  if(F==HIGH&&x==1)
  {  digitalWrite(a,LOW);
   digitalWrite(b,LOW);
   digitalWrite(c,LOW);
   digitalWrite(d,HIGH);
   x++;
   delay(100);}
    else if(F==HIGH&&x==2)
  {  digitalWrite(a,LOW);
   digitalWrite(b,LOW);
   digitalWrite(c,HIGH);
   digitalWrite(d,LOW);
   x++;
   delay(100);}
    else if(F==HIGH&&x==3)
  {  digitalWrite(a,LOW);
   digitalWrite(b,LOW);
   digitalWrite(c,HIGH);
   digitalWrite(d,LOW);
   x++;
   delay(100);}


    
  

}

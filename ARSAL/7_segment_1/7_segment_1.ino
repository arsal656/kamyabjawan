 int a=4;
 int b=5;
 int c=6;
 int d=7;
 int e=8;
 int f=9;
 int g=10;
 char x;
 

void setup() {
  // put your setup code here, to run once:
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {x=Serial.read();}
  
   if(x=='1')
 {  digitalWrite(a,HIGH);
   digitalWrite(b,LOW);
   digitalWrite(c,LOW);
   digitalWrite(d,HIGH);
   digitalWrite(e,HIGH);
   digitalWrite(f,HIGH);
   digitalWrite(g,HIGH);
    Serial.println(x);
}  
 else if(x=='2')
 {  digitalWrite(a,LOW);
   digitalWrite(b,LOW);
   digitalWrite(c,HIGH);
   digitalWrite(d,LOW);
   digitalWrite(e,LOW);
   digitalWrite(f,HIGH);
   digitalWrite(g,LOW);
    Serial.println(x);
}else if(x=='3'){
    digitalWrite(a,LOW);
   digitalWrite(b,LOW);
   digitalWrite(c,LOW);
   digitalWrite(d,LOW);
   digitalWrite(e,HIGH);
   digitalWrite(f,HIGH);
   digitalWrite(g,LOW);
    Serial.println(x);
  }delay(500);
    }

   

   

  
  



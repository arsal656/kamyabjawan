#define input A0
int led=9;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(input,INPUT);
pinMode(led,OUTPUT);
digitalWrite(led,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
int adc_value;
float resis;
adc_value=analogRead(input);
resis=adc_value*0.00488;
if(resis<20){
  digitalWrite(led,HIGH);
  
}
else{
  digitalWrite(led,LOW);
}
}

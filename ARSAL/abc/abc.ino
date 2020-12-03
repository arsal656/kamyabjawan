

const int buttonpin1=3;
const int buttonpin2=4;
const int buttonpin3=5;

void setup() {
  Serial.begin(9600);
   pinMode(buttonpin1,INPUT);
    pinMode(buttonpin2,INPUT);
     pinMode(buttonpin3,INPUT);
}

void loop() {

 if(buttonpin1==HIGH buttonpin2==LOW,buttonpin3==LOW)
 Serial.print("1 button high");
  Serial.println("1 button high");
 

   if(buttonpin1==HIGH, buttonpin2==HIGH,buttonpin3==LOW )
    Serial.print("2 buttons high");
  Serial.println("2 buttons high");
  
   if(buttonpin1==HIGH, buttonpin2==HIGH,buttonpin3==HIGH )
    Serial.print("3 buttons high");
  Serial.println("3 buttons high"); }
   
   
 

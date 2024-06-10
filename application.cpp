// C++ code
//
#define ledPin3 10
#define ledPin2 11
#define ledPin1 12
int potpin = 0;
int val;

void setup()
{
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop()
{

  
  delay(500);

val = analogRead(potpin);
val = map(val,0,1023,0,179);
  
  if(val < 178){
  	digitalWrite(ledPin1,HIGH);
  }
  else{
    digitalWrite(ledPin1,LOW);
  }
  
    if(val < 90){
  	digitalWrite(ledPin2,HIGH);
  }
  else{
    digitalWrite(ledPin2,LOW);
  }
  
    if(val < 36){
  	digitalWrite(ledPin3,HIGH);
  }
  else{
    digitalWrite(ledPin3,LOW);
  }
  
  delay(15);
  
}
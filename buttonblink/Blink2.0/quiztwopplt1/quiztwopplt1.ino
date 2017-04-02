int a=0;char b='A',c='B';

void setup() {

pinMode(10,INPUT);
pinMode(11,INPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
digitalWrite(12,LOW);
digitalWrite(13,LOW);
Serial.begin(9600);
  
}
void loop() {
  
  blah();
 }

 void blah(){
while(true){
  if(digitalRead(10)==HIGH){
 
   abc(b);}
  if(digitalRead(11)==HIGH){
   
   abc(c);}
  }
}
  
   
  void abc(char b){
   
   Serial.print(b);
    while(true){
      a=1;
      }
    }

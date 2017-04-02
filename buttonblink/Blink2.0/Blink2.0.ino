int a=2; 
boolean b=LOW; 
void setup() {
pinMode(13, OUTPUT);
pinMode(12, INPUT);
digitalWrite(13,LOW);
}

void loop() {
standby();
}
void standby(){
  
  while(true){
    b=digitalRead(12);
    if(b==HIGH){
      if(a%2==0){
      makeithigh();
      }
      else if(a%2!=0){
      makeitlow();
    }
   }
  }
}        

  void makeithigh(){
    digitalWrite(13,HIGH);
   delay(170);
    a++;
       }
    void makeitlow(){
    digitalWrite(13,LOW);
    delay(170);
    a++;
        }

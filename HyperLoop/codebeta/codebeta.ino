void setup() {
 pinMode(2,OUTPUT);
 digitalWrite(2,LOW);
 pinMode(3,INPUT_PULLUP);
 pinMode(13,OUTPUT);
}

void loop() {
  if(!digitalRead(3)){
   digitalWrite(2,HIGH);
   delay(10);
   digitalWrite(2,LOW);
   digitalWrite(13,HIGH);
   delay(1000);
   digitalWrite(13,LOW);}
 }

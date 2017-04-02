  long int a[]={1111110,110000,1101101,1111001,110011,1011011,1011111,1110000,1111111,1110011};
  void setup() {
  pinMode(A0,INPUT);
   pinMode(2,OUTPUT);//clock pin of 74164
    pinMode(3,OUTPUT);//Data Pin of 74164
     pinMode(0,OUTPUT);//NPN Transistor base
     digitalWrite(0,LOW);
      pinMode(1,OUTPUT);//PNP Transistor base
      digitalWrite(1,LOW);
       digitalWrite(2,LOW);
         
  }

void loop() {
  for(int i=0;i<10;i++){
   updat(a[i]);
   }
  
}
void bitwrite(boolean l){
   digitalWrite(3,l);//writing the bit followed by rising clock for 74164
    digitalWrite(2,HIGH);
    digitalWrite(2,LOW);
  }
void updat(long int k){
    long int o=k;
    for(int i=0;i<7;i++){//for loop to load the value into 74164
    bitwrite(o%10);
    o=o/10;
    }
  
    for(int i=0;i<200;i++){
    
    digitalWrite(0,HIGH);//turning on the first 7 segment display
    delay(1);
    digitalWrite(0,LOW);//turning off the first 7 segment display
    
    digitalWrite(1,LOW);//turning on the second 7 segment display
    delay(1);
    digitalWrite(1,HIGH);//turning off the second 7 segment display
    
    }
 
  }

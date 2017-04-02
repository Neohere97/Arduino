  
  long int a[]={1111110,110000,1101101,1111001,110011,1011011,1011111,1110000,1111111,1110011};\\Defining 0-9 for the 7 segment displays, note that the sequence is inverted 
  int num=0;
  int num1=0;
  long int d11,d22;\\These hold the decimal digits of the temperature
  float val=0.00;
  void setup() {
  pinMode(A0,INPUT);
   pinMode(2,OUTPUT);//clock pin of 74164
    pinMode(3,OUTPUT);//Data Pin of 74164
     pinMode(5,OUTPUT);//NPN Transistor base
      digitalWrite(5,LOW);
       pinMode(6,OUTPUT);//PNP Transistor base,NPN can also be used instead
       digitalWrite(6,HIGH);
              
  }

void loop() {
   boolean t=tempcheck();\\Checks whether the temperature has changed
    if(t){
   num1=num;
   d11=a[(num1%10)];
   d22=a[((num1/10)%10)];
   updat(d11,d22);\\Display update
   }
   else
    updat(d11,d22);
}
void bitwrite(boolean l){
   digitalWrite(3,l);//writing the bit followed by rising clock for 74164
    digitalWrite(2,HIGH);
    digitalWrite(2,LOW);
  }
boolean tempcheck(){
    val =4.84*analogRead(A0);//optimised for vref/vcc=4.93-4.97V
    delay(1);
    num =val/10;
    if(num1!=num)
    return true;
    else
    return false;
  }
  void updat(long int k,long int o){
   
    for(int n=0;n<300;n++){
      long int q,w;
      q=k;w=o;
      for(int i=0;i<7;i++){
        bitwrite(q%10);
        q=q/10;
        }
      digitalWrite(6,LOW);
      delay(1);
      digitalWrite(6,HIGH);
      for(int i=0;i<7;i++){
        bitwrite(w%10);
        w=w/10;
        }
      digitalWrite(5,HIGH);
      delay(1);
      digitalWrite(5,LOW);
      
      }
    
    }

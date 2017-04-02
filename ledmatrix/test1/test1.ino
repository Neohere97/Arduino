int x=65;
void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
}

void loop() {

pattern1();
delay(100);
allon();
delay(10000);
allonblink();
delay(100);



}

void reset(){
  digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
   }
 
  
  
  
  int LED1(int a)
  {
    if(a==1)
     {
      digitalWrite(6,LOW);
      digitalWrite(2,HIGH);
      }
    else if(a==0)
    {
      digitalWrite(6,HIGH);
      digitalWrite(2,LOW);
      }
    }
    int LED2(int a)
  {
    if(a==1)
     {
      digitalWrite(6,LOW);
      digitalWrite(3,HIGH);
      }
    else if(a==0)
    {
      digitalWrite(6,HIGH);
      digitalWrite(3,LOW);
      }
    }
int LED3(int a)
  {
    if(a==1)
     {
      digitalWrite(6,LOW);
      digitalWrite(4,HIGH);
      }
    else if(a==0)
    {
      digitalWrite(6,HIGH);
      digitalWrite(4,LOW);
      }
    }
    int LED4(int a)
  {
    if(a==1)
     {
      digitalWrite(6,LOW);
      digitalWrite(5,HIGH);
      }
    else if(a==0)
    {
      digitalWrite(6,HIGH);
      digitalWrite(5,LOW);
      }
    }
    int LED5(int a)
  {
    if(a==1)
     {
      digitalWrite(7,LOW);
      digitalWrite(2,HIGH);
      }
    else if(a==0)
    {
      digitalWrite(7,HIGH);
      digitalWrite(2,LOW);
      }
    }
    int LED6(int a)
  {
    if(a==1)
     {
      digitalWrite(7,LOW);
      digitalWrite(3,HIGH);
      }
    else if(a==0)
    {
      digitalWrite(7,HIGH);
      digitalWrite(3,LOW);
      }
    }
     int LED7(int a)
  {
    if(a==1)
     {
      digitalWrite(7,LOW);
      digitalWrite(4,HIGH);
      }
    else if(a==0)
    {
      digitalWrite(7,HIGH);
      digitalWrite(4,LOW);
      }
    }
    int LED8(int a)
  {
    if(a==1)
     {
      digitalWrite(7,LOW);
      digitalWrite(5,HIGH);
      }
    else if(a==0)
    {
      digitalWrite(7,HIGH);
      digitalWrite(5,LOW);
      }
    }
void pattern1(){
int  i=0;
  while(i<=9){  
  LED1(1);
delay(x);
reset();
LED2(1);
delay(x);
reset();
LED3(1);
delay(x);
reset();
LED4(1);
delay(x);
reset();
LED8(1);
delay(x);
reset();
LED7(1);
delay(x);
reset();
LED6(1);
delay(x);
reset();
LED5(1);
delay(x);
reset();
  i++;
  }
  }
void allon(){
  
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  
  }
  void allonblink(){
  reset();
  allon();
  int i=0;
  while(i<10){
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  delay(200);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  delay(200);
  i++;
    }
  
  reset();
  
  }




  

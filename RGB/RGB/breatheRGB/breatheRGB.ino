
int i=0;
# define PIN_R 10 //PWM pin 10 for RED
# define PIN_G 9  //PWM pin 9 for GREEN
# define PIN_B 11 //PWM pin 11 for BLUE
# define BreatheDelay 5//Delay for breathe animation recommended 5-20(ms)
void setup() {
 pinMode(PIN_R,OUTPUT);
 pinMode(PIN_G,OUTPUT);
 pinMode(PIN_B,OUTPUT);
  

}

void loop() {
breathe(0,0,1,BreatheDelay);//blue
breathe(0,1,0,BreatheDelay);//green
breathe(0,1,1,BreatheDelay);//cyan
breathe(1,0,0,BreatheDelay);//red
breathe(1,0,1,BreatheDelay);//purple
breathe(1,1,0,BreatheDelay);//yellow
breathe(1,1,1,BreatheDelay);//white


}

void rgb_update(byte k , byte j, byte  i){ //Function to set PWM values aka brightness
  analogWrite(PIN_R,k);
  analogWrite(PIN_G,j);
  analogWrite(PIN_B,i);

}
 
 
 void breathe(byte r,byte g, byte b,byte del){
    for(i=0;i<256;i++){
    rgb_update(i*r,i*g,i*b);
    delay(del);
    }
     i=255;
    for(i=255;i>0;i--){
    rgb_update(i*r,i*g,i*b);
    delay(del);
    }
  }
 

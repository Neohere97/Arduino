
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

rgb_update(255,0,0);
delay(800);
rgb_update(0,255,0);
delay(800);
rgb_update(0,0,255);
delay(800);
}

void rgb_update(byte k , byte j, byte  i){
  analogWrite(PIN_R,255-k);
  analogWrite(PIN_G,255-j);
  analogWrite(PIN_B,255-i);

}
 
 
 

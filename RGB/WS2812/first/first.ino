#include <FastLED.h>
 CRGB leds[31];
void setup() {
 FastLED.addLeds<NEOPIXEL,7>(leds,31);
}

void loop() {

int x=0,y=0;
while(true){
for(x=0;x<31;x++){
  leds[x]=CRGB(y,250-y,250-y);
   }
   
FastLED.show();
y+=1;
if(y>250)
y=0;
delay(10);
}
}

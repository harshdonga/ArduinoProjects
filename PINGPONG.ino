#include <FastLED.h>
#define LED_PIN   6
#define n    450
CRGB leds[n];
int count =1;
void setup() {
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, n);
  for(int i =0 ; i<n ; i++){
  leds[i] = CRGB ( 0, 0, 0);
  }
  FastLED.show();
  
}

void loop() {
//ENTER LOOP

  if(count ==1){
  for(int i =0 ; i<150 ; i++){
  leds[i] = CRGB ( 0, 0, 128);
    FastLED.show();
    delay(50);
    count--;
  }
  for(int i =150 ; i<n ; i++){
  leds[i] = CRGB ( 0, 0, 128);
    FastLED.show();
    delay(20);
    count--;
  }
  for(int i =0 ; i<n ; i++){
    leds[i] = CRGB ( 0, 0, 0);
//    FastLED.show();
  }
      FastLED.show();
      //delay(1000);
  }
//pingpong

  for(int j=0 ; j<8 ; j++){
    if(j%2 == 0){
    for(int i =0 ; i<n ; i++){
      leds[i] = CRGB ( 128, 0, 0);
    }
    FastLED.show();
    delay(875);
    }
    else
    {
       for(int i=0 ; i<n ; i++){
      leds[i] = CRGB ( 0, 0, 128);
    }
    FastLED.show();
    delay(875);
      
    }
  }

  
    for(int j=0 ; j<30; j++){
      if(j%2 == 0){
    for(int i =0 ; i<n ; i++){
      leds[i] = CRGB ( 100, 0, 100);
    }
    FastLED.show();
    delay(500);
    }
    else
    {
       for(int i =0 ; i<n ; i++){
      leds[i] = CRGB ( 0, 0, 128);
    }
    FastLED.show();
    delay(500);
      
    }
  }
  delay(2000);

//DELAYED_DROP
    for(int j=0 ; j<32; j++){
    if(j%2 == 0){
    for(int i =0 ; i<n ; i++){
      leds[i] = CRGB ( 60, 60, 0);
    }
    FastLED.show();
    delay(500);
    }
    else
    {
       for(int i =0 ; i<n ; i++){
      leds[i] = CRGB ( 0, 0, 128);
    }
    FastLED.show();
    delay(500);
      
    }
  }
//PREDROP
    for(int j=0 ; j<58; j++){
    if(j%2 == 0){
    for(int i =0 ; i<n ; i++){
      leds[i] = CRGB ( 0, 128, 0);
    }
    FastLED.show();
    delay(500);
    }
    else
    {
       for(int i =0 ; i<n ; i++){
      leds[i] = CRGB ( 0, 0, 128);
    }
    FastLED.show();
    delay(500);
      
    }
  }
//DROP
    for(int j=0 ; j<150; j++){
    if(j%2 == 0){
    for(int i =0 ; i<n ; i++){
      leds[i] = CRGB ( 128, 128, 0);
    }
    FastLED.show();
    delay(500);
    }
    else
    {
       for(int i =0 ; i<n ; i++){
      leds[i] = CRGB ( 0, 128, 128);
    }
    FastLED.show();
    delay(500);
      
    }
  }
  for(int j = 0 ; j<=1000;j++){
    for(int i =150; i<n ; i++){
  leds[i] = CRGB ( 0, 0, 128);
    }
    FastLED.show();
    }
  }

// Transparent Edgelit 7-Segment Display

// created by upir, 2024
// youtube channel: https://www.youtube.com/upir_upir

// YouTube video: https://youtu.be/Cg9MDF1VE2g
// Source files: https://github.com/upiir/transparent_edgelit_segment_display/

// Links from the video:
// Do you like this video? You can buy me a coffee ☕: https://www.buymeacoffee.com/upir
// ESP32-S3-Matrix: https://s.click.aliexpress.com/e/_DE7zjdN
// ESP32-S3-Matrix documentation: https://www.waveshare.com/wiki/ESP32-S3-Matrix
// BambuLab A1 Mini Combo 3D Printer: https://shareasale.com/r.cfm?b=2420414&u=3422904&m=138211&urllink=&afftrack=
// Acrylic sheets 5x7cm: https://s.click.aliexpress.com/e/_DkUvui3
// Transparent Segment Display video from Narkidae: https://www.youtube.com/watch?v=wr_3c_1lHbg
// Acrylic business cards: https://s.click.aliexpress.com/e/_DBvjMNt
// Edgelit displays on Fran Blanche channel: https://www.youtube.com/watch?v=J2xAetY9O1E
// Edgelit clocks on AliExpress: https://s.click.aliexpress.com/e/_DeVvQFN
// Edgelit Clocks on AliExpress yellow: https://s.click.aliexpress.com/e/_DCG1WSL
// Shifter Knob Project: https://www.youtube.com/playlist?list=PLjQRaMdk7pBb6r6xglZb92DGyWJTgBVaV
// NeoPixels documentation: https://learn.adafruit.com/adafruit-neopixel-uberguide/the-magic-of-neopixels
// Engraving pen: https://s.click.aliexpress.com/e/_DkCnpb1

// Related videos with segmented displays / NeoPixels:
// Arduino Robot Eyes with LED Matrix Display // https://www.youtube.com/watch?v=If-hiuwsQh0
// Arduino Wood Clock // https://www.youtube.com/watch?v=50bVXHYW_9Q
// Why are pixels square? // https://www.youtube.com/watch?v=oLgUtjyKO6Q
// Arduino + Matrix Display (The Proper Way) // https://www.youtube.com/watch?v=jlhcDzS17vU
// Simple big 7-segment display: https://youtu.be/_pNuaVKABN4
// Turning Posy´s displays into real ones: https://youtu.be/jz01j1TpM84
// Arduino OLED Segmented Clock // https://youtu.be/OqqPvb8FEHs
// Fake nixie clock: https://youtu.be/Q-yf9hQRpU4
// Nixie Tube Clock Without Nixie Tubes: https://youtu.be/cbU3y4pe4FQ


#include <Adafruit_NeoPixel.h> // Adafruit NeoPixel library is used to set NeoPixels

#define PIN        14 // Which pin on the Arduino is connected to the NeoPixels?
#define NUMPIXELS 64 // How many NeoPixels are attached to the Arduino?

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_RGB + NEO_KHZ800);

#define DELAYVAL 500 // Time (in milliseconds) to pause between digits

void setup() {
  pixels.begin(); // INITIALIZE NeoPixel strip object (REQUIRED)
}

void set_segment (int segment) { // set segment (i.e. row of 8 neopixels) to white color

  for(int i=0; i<8; i++) { // 
    pixels.setPixelColor(i + (segment * 8), pixels.Color(150, 150, 150));
  }
 
}


void loop() {


  // set individual rows (segments) to be lit
  for(int i=0; i<8; i++) { // 
    pixels.clear(); // Set all pixel colors to 'off'
    set_segment(i);
    pixels.show();   // Send the updated pixel colors to the hardware.
    delay(DELAYVAL); // Pause before next pass through loop
  }

  pixels.clear(); // Set all pixel colors to 'off'

  // set individual rows (segments) to be lit
  for(int i=0; i<8; i++) { // 
    set_segment(i);
    pixels.show();   // Send the updated pixel colors to the hardware.
    delay(DELAYVAL); // Pause before next pass through loop
  }  



  // digit 0
  pixels.clear(); // Set all pixel colors to 'off'
  set_segment(0);
  set_segment(1);
  set_segment(2);
  set_segment(3);
  set_segment(4);
  set_segment(5);
  //set_segment(6);          
  pixels.show();   // Send the updated pixel colors to the hardware.
  delay(DELAYVAL); // Pause before next pass through loop

  // digit 1
  pixels.clear(); // Set all pixel colors to 'off'
  //set_segment(0);
  set_segment(1);
  set_segment(2);
  //set_segment(3);
  //set_segment(4);
  //set_segment(5);
  //set_segment(6);          
  pixels.show();   // Send the updated pixel colors to the hardware.
  delay(DELAYVAL); // Pause before next pass through loop  

  // digit 2
  pixels.clear(); // Set all pixel colors to 'off'
  set_segment(0);
  set_segment(1);
  //set_segment(2);
  set_segment(3);
  set_segment(4);
  //set_segment(5);
  set_segment(6);          
  pixels.show();   // Send the updated pixel colors to the hardware.
  delay(DELAYVAL); // Pause before next pass through loop  

  // digit 3
  pixels.clear(); // Set all pixel colors to 'off'
  set_segment(0);
  set_segment(1);
  set_segment(2);
  set_segment(3);
  //set_segment(4);
  //set_segment(5);
  set_segment(6);          
  pixels.show();   // Send the updated pixel colors to the hardware.
  delay(DELAYVAL); // Pause before next pass through loop  

  // digit 4
  pixels.clear(); // Set all pixel colors to 'off'
  //set_segment(0);
  set_segment(1);
  set_segment(2);
  //set_segment(3);
  //set_segment(4);
  set_segment(5);
  set_segment(6);          
  pixels.show();   // Send the updated pixel colors to the hardware.
  delay(DELAYVAL); // Pause before next pass through loop  

  // digit 5
  pixels.clear(); // Set all pixel colors to 'off'
  set_segment(0);
  //set_segment(1);
  set_segment(2);
  set_segment(3);
  //set_segment(4);
  set_segment(5);
  set_segment(6);          
  pixels.show();   // Send the updated pixel colors to the hardware.
  delay(DELAYVAL); // Pause before next pass through loop  

  // digit 6
  pixels.clear(); // Set all pixel colors to 'off'
  set_segment(0);
  //set_segment(1);
  set_segment(2);
  set_segment(3);
  set_segment(4);
  set_segment(5);
  set_segment(6);          
  pixels.show();   // Send the updated pixel colors to the hardware.
  delay(DELAYVAL); // Pause before next pass through loop  

  // digit 7
  pixels.clear(); // Set all pixel colors to 'off'
  set_segment(0);
  set_segment(1);
  set_segment(2);
  //set_segment(3);
  //set_segment(4);
  //set_segment(5);
  //set_segment(6);          
  pixels.show();   // Send the updated pixel colors to the hardware.
  delay(DELAYVAL); // Pause before next pass through loop  

  // digit 8
  pixels.clear(); // Set all pixel colors to 'off'
  set_segment(0);
  set_segment(1);
  set_segment(2);
  set_segment(3);
  set_segment(4);
  set_segment(5);
  set_segment(6);          
  pixels.show();   // Send the updated pixel colors to the hardware.
  delay(DELAYVAL); // Pause before next pass through loop

  // digit 9
  pixels.clear(); // Set all pixel colors to 'off'
  set_segment(0);
  set_segment(1);
  set_segment(2);
  set_segment(3);
  //set_segment(4);
  set_segment(5);
  set_segment(6);          
  pixels.show();   // Send the updated pixel colors to the hardware.
  delay(DELAYVAL); // Pause before next pass through loop  


}

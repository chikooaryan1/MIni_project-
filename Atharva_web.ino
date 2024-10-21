#include "U8glib.h" // including the U8glib library


#define OLED_CLK_PIN 13  //Arduino Digital Pin D13: SCK


#define OLED_MOSI_PIN 11 //Arduino Digital Pin D11: MOSI


#define OLED_RES_PIN 10 //Arduino Digital Pin D10: SS


#define OLED_SDC_PIN 9  //Arduino Digital Pin D9: OC1A


#define OLED_CSS_PIN 8 //Arduino Digital Pin D13: ICP1


U8GLIB_SH1106_128X64 u8g(OLED_CLK_PIN, OLED_MOSI_PIN, OLED_RES_PIN, OLED_SDC_PIN, OLED_CSS_PIN);


//the custom made circuitdigest Bitmap -> Atharva Web


const uint8_t circuitdigest[] PROGMEM = {
0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x3f, 0xf8, 0x03, 0xfc, 0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x1f, 0xf8, 0x03, 0xf8, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x1f, 0xf8, 0x03, 0xf8, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc7, 0xff, 0x9f, 0x07, 0xf3, 0x19, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc7, 0xff, 0x9f, 0x0f, 0xf3, 0x19, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc6, 0x03, 0x9f, 0xfe, 0x73, 0x19, 0xc0, 0x63, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc6, 0x03, 0x9f, 0xfe, 0x73, 0x19, 0xc0, 0x63, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc6, 0x03, 0x9f, 0xfe, 0x21, 0x19, 0xc0, 0x63, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc6, 0x03, 0x98, 0xfe, 0x00, 0x19, 0xc0, 0x63, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc6, 0x03, 0x98, 0xfe, 0x00, 0x19, 0xc0, 0x63, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc6, 0x03, 0x98, 0x3f, 0x8f, 0x19, 0xc0, 0x63, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc6, 0x03, 0x9c, 0x3f, 0x8f, 0x19, 0xc0, 0x63, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc7, 0xff, 0x9f, 0xf8, 0x03, 0x19, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc7, 0xff, 0x9f, 0xf8, 0x03, 0x19, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc7, 0xff, 0x9f, 0xf8, 0x03, 0x19, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x18, 0xc6, 0x73, 0x18, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x1c, 0xc6, 0x73, 0x38, 0x00, 0x03, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc1, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xe1, 0xfe, 0x0f, 0x31, 0xc0, 0xff, 0xe3, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc1, 0xfc, 0x07, 0x39, 0x80, 0xff, 0xc3, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc1, 0xfc, 0x03, 0x39, 0x80, 0xff, 0xc1, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc6, 0x3c, 0x60, 0x3e, 0x60, 0xe6, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc6, 0x7c, 0x60, 0x3e, 0x70, 0xc6, 0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xf9, 0xf3, 0x83, 0xcf, 0xfc, 0x00, 0x31, 0x83, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xf9, 0xf3, 0x87, 0xc7, 0xfc, 0x00, 0x33, 0x83, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xf0, 0xe3, 0x87, 0xcf, 0xfc, 0x00, 0x73, 0xc3, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc0, 0x03, 0xe7, 0x3e, 0x73, 0xf9, 0xf3, 0xe3, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc0, 0x03, 0xe7, 0x3c, 0x73, 0xf8, 0xf3, 0xe3, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc6, 0x03, 0x9f, 0x38, 0x7c, 0x38, 0x3f, 0xe3, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc6, 0x03, 0x9f, 0x38, 0x7c, 0x18, 0x3f, 0xe3, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc0, 0x3c, 0x7c, 0xff, 0xfc, 0x1e, 0x3f, 0x9f, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc0, 0x3c, 0x78, 0xff, 0xfc, 0x1e, 0x3f, 0x9f, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc0, 0x78, 0x78, 0x7f, 0xfc, 0x3e, 0x1f, 0x8f, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc7, 0xf0, 0x18, 0x00, 0x0c, 0xfe, 0x03, 0x83, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc7, 0xf0, 0x18, 0x00, 0x1c, 0xfe, 0x01, 0x83, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc6, 0x7f, 0xe0, 0xc1, 0xfc, 0xf8, 0x30, 0x63, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc6, 0x3f, 0xe0, 0xc1, 0xfc, 0xf8, 0x30, 0x63, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc6, 0x03, 0x83, 0x30, 0x1c, 0x00, 0x0c, 0x7f, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc6, 0x03, 0x87, 0x38, 0x0c, 0x00, 0x0c, 0x7f, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xee, 0x03, 0x82, 0x38, 0x0c, 0x00, 0x0e, 0x7f, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x3e, 0x0c, 0x1f, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf8, 0x3e, 0x0c, 0x1f, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x18, 0x39, 0xff, 0x19, 0xcf, 0xf7, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x18, 0x39, 0xff, 0x19, 0xcf, 0xe3, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc7, 0xff, 0x98, 0x39, 0xfc, 0x1f, 0xcf, 0x83, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc7, 0xff, 0x98, 0x39, 0xfc, 0x1f, 0xcf, 0x83, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc7, 0xff, 0x9c, 0x31, 0xfc, 0x1f, 0xcf, 0x87, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc6, 0x03, 0x9f, 0x00, 0x00, 0x00, 0x0e, 0x7f, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc6, 0x03, 0x9f, 0x00, 0x00, 0x00, 0x0c, 0x7f, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc6, 0x03, 0x9f, 0x00, 0x03, 0xc1, 0xff, 0x83, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc6, 0x03, 0x9f, 0x00, 0x03, 0xe1, 0xff, 0x83, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc6, 0x03, 0x9f, 0xfc, 0x3c, 0xff, 0xf8, 0x63, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc6, 0x03, 0x9f, 0xfe, 0x7c, 0xff, 0xf0, 0x63, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc6, 0x03, 0x9f, 0xfe, 0x7c, 0xff, 0xf0, 0x63, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc7, 0xff, 0x9c, 0xc1, 0xf0, 0x18, 0x0f, 0xe3, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc7, 0xff, 0x98, 0xc1, 0xf0, 0x18, 0x0f, 0xe3, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x18, 0x3e, 0x7f, 0x18, 0xf3, 0xe3, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xc0, 0x00, 0x18, 0x3e, 0x7f, 0x19, 0xf3, 0xe3, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xe0, 0x00, 0x1c, 0x3e, 0x7f, 0xbd, 0xf3, 0xf7, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
	0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};


void draw(void) {

  u8g.drawBitmapP( 0, 0, 16, 64, circuitdigest);
}


void setup() {


  //  empty setup function as the library manages all internally


}


void loop() {


  u8g.firstPage();  //A call to this procedure, marks the beginning of the picture loop.


  do {


    draw();


  } while( u8g.nextPage() ); // A call to this procedure, marks the end of the body of the picture loop.


  // rebuild the picture after some delay


  delay(1000);


}

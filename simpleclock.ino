#include "config.h"

void setup() {
   sevseg.begin(displayType, numDigits, digitPins, segmentPins, colonDigitPin, colonSegmentPin);
   sevseg.setBrightness(1000);
   sevseg.enableColon();
}

void loop() {
   tmElements_t myTime;
   RTC.read(myTime);
   sevseg.setNumber(myTime.Hour * 100 + myTime.Minute, 2); 
   sevseg.refreshDisplay();
}

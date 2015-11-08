#include <DS3232RTC.h> // https://github.com/JChristensen/DS3232RTC
#include <SevSeg.h>    // https://github.com/DeanIsMe/SevSeg
#include <Time.h>      // http://playground.arduino.cc/code/time 
#include "config.h"

SevSeg sevseg;
tmElements_t myTime;

void setup() {
   sevseg.begin(COMMON_ANODE, numDigits, digitPins, segmentPins);
}

void loop() {
   RTC.read(myTime);
   sevseg.setNumber(myTime.Hour * 100 + myTime.Minute, 2); 
   sevseg.refreshDisplay();  
}

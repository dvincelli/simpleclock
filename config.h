#include <DS3232RTC.h> // https://github.com/JChristensen/DS3232RTC
#include <SevSeg.h>    // https://github.com/dvincelli/SevSeg
#include <Time.h>      // http://playground.arduino.cc/code/time

SevSeg sevseg;

byte displayType = COMMON_ANODE;
byte numDigits = 4;
byte digitPins[] = {11, 8, 7, A0};
byte segmentPins[] = {10, 6, 4, 12, 13, 9, 3, 2};
byte colonDigitPin = A1;
byte colonSegmentPin = 5  ;


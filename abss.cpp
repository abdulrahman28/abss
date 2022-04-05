// This library is created on 03/11/2021 by Yusuf Abdulrahman aka Blaze
// The code is for blinking of LED without delay

#include "Arduino.h"
#include "abss.h"

abss::abss(long p)
{
pinMode(p, OUTPUT);
pin = p;
}





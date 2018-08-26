/*
  DS1844.h - Library for controlling a Maxim Integrated DS1844 Quad Digital Potentiometer
  Created by Matt Westwick; March 23, 2013
  Released into the public domain.

  August 22,2018 - Ross Jacobs
  *  Changed wiring.h to wiring_private.h
  *  Added readValue() so that you could call it and get the simple value without the pot id being part of the byte
*/

#ifndef DS1844_h
#define DS1844_h
#include "Arduino.h"
#include <wiring_private.h>

class DS1844
{
  int address;
  public:
    DS1844(int address);
    void write(int pot, int value);
    int read(int pot);
    int readValue(int pot);
  //private:
    //int _address;
};

#endif

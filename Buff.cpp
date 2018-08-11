/*
  Buff.cpp

  Created: 2018/8/7 19:47:50
  Author: Vulcan
*/


#include "Buff.h"
#include "HardwareSerial.h"
#include "HardwareSerial_private.h"

// default constructor
Buff::Buff()
{
} //Buff


void Buff::onRecived()
{
  while (Serial.available() > 0)
  {
    char c = Serial.read();
    if (c == '\n')
    {
      _buff.toUpperCase();
      if (_buff.startsWith("SHOT:"))
      {
        SHOT = _buff.substring(5);
      }
      if (_buff.startsWith("POS:"))
      {
        POS = _buff.substring(4);
      }
      if (_buff.startsWith("MOTORS:"))
      {
        MOTORS = _buff.substring(6);
      }
      if (_buff.startsWith("XYP:"))
      {
        XYP = _buff.substring(4);
        _buff = "";
      }
      if (_buff.startsWith("MSG:"))
      {
        Msg = _buff.substring(4);
        _buff = "";
      }
      _buff = "";
    }
    else
    {
      _buff += c;
    }
  }


}

String Buff::getBuff()
{
  return buff;
}

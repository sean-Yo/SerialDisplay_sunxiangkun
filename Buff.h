/* 
* Buff.h
*
* Created: 2018/8/7 19:47:51
* Author: Vulcan
*/


#ifndef __BUFF_H__
#define __BUFF_H__

#include "WString.h"

class Buff
{
public:
	Buff();
	void onRecived();
	String getBuff();
	uint8_t mode = 0;
	String buff = "";
  String SHOT = "";
  String POS = "";
  String MOTORS = "";
	String XYP = "";
	String Msg = "";
	String _buff = "";

	bool isbegin = true;
}; //Buff

#endif //__BUFF_H__

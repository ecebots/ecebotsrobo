#include "Arduino.h"
#include "ecebotsrobo.h"

robo::robo(int pinl,int pinr,int spd )
{
  _pinl = pinl;
  _pinr = pinr;
  _spd = spd;
}

 void robo::front()
{
	analogWrite(_pinl,_spd);
	analogWrite(_pinr,_spd);
}
void robo::stop()
{
	analogWrite(_pinl,0);
	analogWrite(_pinr,0);
}
void robo::left()
{
	analogWrite(_pinl,0);
	analogWrite(_pinr,_spd);
}
void robo::right()
{
	analogWrite(_pinl,_spd);
	analogWrite(_pinr,0);
}
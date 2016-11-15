#ifndef ecebotsrobo_h
#define ecebotsrobo_h

#include "Arduino.h"

class robo
{
  public:
    robo(int pinl, int pinr, int spd);
    void front();
	void stop();
	void left();
	void right();
  private:
    int _pinl;
	int _pinr;
	int _spd;
};

#endif
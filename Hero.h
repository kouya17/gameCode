#ifndef INCLUDED_Hero_h_
#define INCLUDED_Hero_h_

#include "Character.h"

class Hero : public Character{
	public:
    Hero(string namae = "NULL", int tairyoku = 0,
      int tikara = 0, int tisei = 0, int hayasa = 0, int un = 0);
	void set_status();
};

#endif

#ifndef INCLUDED_Battle_h_
#define INCLUDED_Battle_h_

#include "Character.h"

class Battle {
	Character hero;
	Character enemy;
	public:
	Battle(Character syujinnkou, Character teki){
		hero = syujinnkou;
		enemy = teki;
	}

	void start();
	void put_encount();
	int menu();
	int calc_damage();
};

#endif
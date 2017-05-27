#include "Character.h"
#include "Hero.h"
#include "Slime.h"
#include "Battle.h"

int main(){
    Hero syujinnkou;

	syujinnkou.set_status();

	Slime slime;

	Battle battle(syujinnkou, slime);
	battle.start();
}

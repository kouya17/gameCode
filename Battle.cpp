#include <iostream>
#include <string> //stringを使うために必要

using namespace std;

#include "Battle.h"

void Battle::start(){
	int menu_number;
	int damage;

	put_encount();

	do{
		menu_number = menu();
		//cout << menu_number << endl;
		switch(menu_number){
			case 1:
				damage = calc_damage();
				enemy.set_hp(enemy.get_hp() - damage);
				break;
		}
	}while(hero.get_hp() > 0 && enemy.get_hp() > 0);

	if(enemy.get_hp() <= 0){
		cout << enemy.get_name() << " を倒した！！" << endl;
	}
}

void Battle::put_encount(){
	cout << endl;
	cout << "野生の" << enemy.get_name() << "が現れた！" << endl;
}

int Battle::menu(){
	string menu_number = "NaN";

	cout << endl;
	cout << "どうする？" << endl;

	while(menu_number != "1" && menu_number != "2" && menu_number != "3"){
		cout << " *** メニュー *** " << endl;
		cout << "1.攻撃" << endl;
		cout << "2.魔法" << endl;
		cout << "3.様子を見る" << endl;

		cin >> menu_number;
		if(menu_number != "1" && menu_number != "2" && menu_number != "3"){
			cout << endl;
			cout << "半角数字1,2,3を入力してください。" << endl;
			cout << endl;
		}
	}

	return stoi(menu_number);
}

int Battle::calc_damage(){
	int attack = hero.get_power();
	int diffence = enemy.get_power();
	int damage;

	if(diffence > attack){
		damage = 0;
	}else{
		damage = attack - diffence;
	}

	cout << enemy.get_name() << " に " << damage << " のダメージを与えた！" << endl;

	return damage;
}

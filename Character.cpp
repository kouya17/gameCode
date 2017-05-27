#include <iostream>
#include <string> //stringを使うために必要
#include "Character.h"

using namespace std;

Character::Character(string namae, int tairyoku,
      int tikara, int tisei, int hayasa, int un){
    name = namae;
    hp = tairyoku;
    power = tikara;
    intelligence = tisei;
    speed = hayasa;
    luck = un;
}

void Character::put_display(){
	cout << endl;
	cout << "【キャラクタ入力チェック】" << endl;
	cout << "名前は" << name << "体力は" << hp << "力は" << power << endl;
}

// セッター
void Character::set_name(string namae){ name = namae; }

void Character::set_hp(int tairyoku){ hp = tairyoku; }

void Character::set_power(int tikara){ power = tikara; }

void Character::set_intelligence(int tisei){ intelligence = tisei; }

void Character::set_speed(int hayasa){ speed = hayasa; }

void Character::set_luck(int un){ luck = un; }

//ゲッター
string Character::get_name(){ return name; }

int Character::get_hp(){ return hp; }

int Character::get_power(){ return power; }

int Character::get_intelligence(){ return intelligence; }

int Character::get_speed(){ return speed; }

int Character::get_luck(){ return luck; }


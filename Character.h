#ifndef INCLUDED_Character_h_
#define INCLUDED_Character_h_
  
#include <string> //stringを使うために必要
using namespace std;

class Character{
  private:
    string name;
    int hp;
    int power;
    int intelligence;
    int speed;
    int luck;
  public:
    Character(string namae = "NULL", int tairyoku = 0,
      int tikara = 0, int tisei = 0, int hayasa = 0, int un = 0);
    void put_display();
	void set_name(string namae);
	void set_hp(int tairyoku);
	void set_power(int tikara);
	void set_intelligence(int tisei);
	void set_speed(int hayasa);
	void set_luck(int un);
	
	string get_name();
	int get_hp();
	int get_power();
	int get_intelligence();
	int get_speed();
	int get_luck();
};

#endif

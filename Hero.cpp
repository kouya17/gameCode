#include <iostream>
#include <string> //stringを使うために必要
#include <cctype> //isdigitを使うために必要
#include <algorithm> //all_ofを使うために必要
#include "Hero.h"

using namespace std;

Hero::Hero(string namae, int tairyoku,
  int tikara, int tisei, int hayasa, int un)
  :Character(namae, tairyoku, tikara, tisei, hayasa, un){ }

void Hero::set_status(){
	string check_name = "NaN";
	string namae;

	while(check_name != "1"){
		cout << " *** 主人公設定 ***" << endl;
		cout << "主人公の名前を入力してください。" << endl;
		cin >> namae;

		cout << endl;
		cout << "主人公の名前は「" << namae << "」でいいですか？" << endl;
		do{
			cout << "OK！> 1を入力,　変更する> 2を入力" << endl;
			cin >> check_name;
			if(check_name != "1" and check_name != "2"){
				cout << "半角数字 1 または 2 でお答えください。" << endl;
			}
		}while(check_name != "1" and check_name != "2");
	}
	set_name(namae);
	cout << endl;
	cout << "主人公の名前は「" << namae << "」に決定しました！" << endl; 

	cout << endl;
	cout << " *** 主人公パラメータ設定 ***" << endl;
	cout << namae << "のパラメータを設定します！" << endl;
	cout << namae << "は体力・筋力・知性・俊敏性・運の5つのパラメータを持ちます。" << endl;
	cout << "全てのパラメータの合計が20になるように各パラメータを設定してください！" << endl;
	int sum_status = 0;
	string tairyoku;
	string tikara;
	string tisei;
	string hayasa;
	string un;

	while(sum_status != 20){
		do{
			cout << "体力を入力してください。" << endl;
			cin >> tairyoku;
		}while(!all_of(tairyoku.begin(), tairyoku.end(), ::isdigit));

		do{
			cout << "筋力を入力してください。" << endl;
			cin >> tikara;
		}while(!all_of(tikara.begin(), tikara.end(), ::isdigit));

		do{
			cout << "知性を入力してください。" << endl;
			cin >> tisei;
		}while(!all_of(tisei.begin(), tisei.end(), ::isdigit));
	
		do{
			cout << "俊敏性を入力してください。" << endl;
			cin >> hayasa;
		}while(!all_of(hayasa.begin(), hayasa.end(), ::isdigit));
	
		do{
			cout << "運を入力してください。" << endl;
			cin >> un;
		}while(!all_of(hayasa.begin(), hayasa.end(), ::isdigit));

		sum_status = stoi(tairyoku) + stoi(tikara) + stoi(tisei) + stoi(hayasa) + stoi(un);
		if(sum_status != 20){
			cout << "パラメータの合計が20になっていません！" << endl;
			cout << "もう一度パラメータの設定をお願いします。" << endl;
		}
	}
	
	set_hp(stoi(tairyoku));
	set_power(stoi(tikara));
	set_intelligence(stoi(tisei));
	set_speed(stoi(hayasa));
	set_luck(stoi(un));
}

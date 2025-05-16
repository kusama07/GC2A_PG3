#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string>
#include <list>
#include <iostream>
using namespace std;

int main() {
	// 山手線の駅名
	list<string> stationList = {
		"Tokyo","Kanda","Akihabara","Okachimachi","Ueno","Uguisudani","Nippori",
		"Tabata","Komagome","Sugamo","Otsuka","Ikebukuro","Mejiro","Takadanobaba",
		"Shin-Okubo","Shinjuku","Yoyogi","Harajuku","Shibuya","Ebisu","Meguro",
		"Gotanda","Osaki","Shinagawa","Tamachi","Hamamatsucho","Shimbashi","Yurakucho",
	};

	// 1970年の山手線の駅名を表示
	cout << "1970年\n";
	for (auto itr = stationList.begin(); itr != stationList.end(); ++itr) {
		cout << *itr << ",";
	}

	// 西日暮里を追加
	for (list<string>::iterator itr = stationList.begin(); itr != stationList.end(); ++itr) {
		if (*itr == "Tabata") {
			itr = stationList.insert(itr, "Nishi-Nippori");
			++itr;
		}
	}
	// 2019年の山手線の駅名を表示
	cout << "2019年\n";
	for (auto itr = stationList.begin(); itr != stationList.end(); ++itr) {
		cout << *itr << ",";
	}

	// 高輪ゲートウェイを追加
	for (list<string>::iterator itr = stationList.begin(); itr != stationList.end(); ++itr) {
		if (*itr == "Tamachi") {
			itr = stationList.insert(itr, "Takanawa Gateway");
			++itr;
		}
	}
	// 2022年の山手線の駅名を表示
	cout << "\n2022年\n";
	for (auto itr = stationList.begin(); itr != stationList.end(); ++itr) {
		cout << *itr << ",";
	}
	return 0;
}
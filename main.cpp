#include <stdio.h>
#include <algorithm>
#include <string>
#include <vector>
#include <list>
#include <iostream>

using namespace std;

int main() {
	
	vector<string> idList = {
		"k022@0032",
		"k022@0038",
		"k022@0002",
		"k022@0029",
		"k022@0100",
		"k022@0012",
	};

	// 昇順に並べ替え
	sort(idList.begin(),idList.end());

	// 昇順に並べ替えた結果を表示
	for (auto itr = idList.begin(); itr != idList.end(); ++itr) {
		cout << *itr << "\n";
	}

	return 0;
}
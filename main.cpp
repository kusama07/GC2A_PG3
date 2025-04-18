#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

typedef void (*PFunc)(int*);

// 乱数を生成する関数
void dice(bool *s) {
	srand((unsigned)time(nullptr));
	
	int diceNum = rand() % 6 + 1;

	printf("出目%d\n", diceNum);

	//　答え入力
	int ans = 0;
	scanf_s("%d", &ans);

	// 答えが正しいかどうかを判定
	if (ans == 2 && diceNum % 2 == 0 || ans == 1 && diceNum % 2 == 1) {
		*s = true;
	} else {
		*s = false;
	}
}

// コールバック関数
void correctOutPut(int *s) {
	printf("正解\n");
}

// コールバック関数
void incorrectOutput(int *s) {
	printf("不正解\n");
}

// タイムアウトを設定する関数
void SetTimeout(PFunc p, int second) {
	Sleep(second * 1000);

	p(&second);
};

int main() {
	PFunc correct;
	correct = correctOutPut;
	PFunc incoreect;
	incoreect = incorrectOutput;
	bool isCorrect;

	printf("半（奇数）の場合 1 , 丁（偶数）の場合 2 を入力 : ");
	// 乱数を生成して、正解か不正解かを判定
	dice(&isCorrect);

	// 正解か不正解かを判定
	if (isCorrect) {
		SetTimeout(correct, 3);
	} else {
		SetTimeout(incoreect, 3);
	}

	return 0;
}
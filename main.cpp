#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

typedef void (*PFunc)();

int dice = 0;
int flag = 0;
int num = 0;

// 乱数を生成する関数
void Result() {
	srand((unsigned)time(nullptr));
	
	dice = rand() % 6 + 1;

	printf("出目%d\n", dice);

	if (dice % 2 == 0) {
		flag = 2;
	} else {
		flag = 1;
	}

}

// 乱数を表示する関数
void InputAns() {

	printf("半（奇数）の場合 1 , 丁（偶数）の場合 2 を入力 : ");
	scanf_s("%d", &num);
	
}

void Answer() {
	if (flag == num) {
		printf("正解\n");
	} else {
		printf("不正解\n");
	}
}

// コールバック関数
void SetTimeout(PFunc p, int second) {
	Sleep(second * 1000);

};

int main() {
	PFunc p = Result;
	Result();
	InputAns();
	SetTimeout(p, 3);
	Answer();

	return 0;
}
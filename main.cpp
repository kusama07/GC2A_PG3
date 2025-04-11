#include <stdio.h>

// 一般的な時給
int General(int time) {

	return time * 1072;
}

// 再帰的な時給計算
int Recursive(int time,int salary = 100) {
	if (time <= 1) {
		return salary;
	}

	return (salary + Recursive(time - 1 , salary * 2 - 50));
}

int main() {

	// 一般的な方法
	printf("%d\n", General(8));

	// 再帰的な方法
	printf("%d\n", Recursive(8));

	return 0;
}
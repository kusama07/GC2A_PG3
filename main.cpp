#include <stdio.h>
#include <thread>

// 文字出力関数
void PrintThread1() {
	printf("Thread1\n");
}

void PrintThread2() {
	printf("Thread2\n");
}

void PrintThread3() {
	printf("Thread3\n");
}

int main() {
	std::thread th1(PrintThread1);
	// スレッドを開始
	th1.join(); 

	std::thread th2(PrintThread2);
	// スレッドを開始
	th2.join(); 

	std::thread th3(PrintThread3);
	// スレッドを開始
	th3.join();

	return 0;
}
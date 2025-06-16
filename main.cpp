#include <stdio.h>
#include <string>
#include <chrono>

// コピー関数
void copy(const std::string& source) {
	std::string destination;
	std::chrono::microseconds start = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::system_clock::now().time_since_epoch());
	destination = source; // 文字列のコピー
	std::chrono::microseconds end = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::system_clock::now().time_since_epoch());
	std::chrono::microseconds duration = end - start;
	printf("コピー: %lld μs\n", duration.count());
}

// 移動関数
void moveStr(std::string&& source) {
	std::string destination;
	std::chrono::microseconds start = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::system_clock::now().time_since_epoch());
	destination = std::move(source); // 文字列のムーブ
	std::chrono::microseconds end = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::system_clock::now().time_since_epoch());
	std::chrono::microseconds duration = end - start;
	printf("移動: %lld μs\n", duration.count());
}

int main() {
	std::string a(100000, 'a');

	copy(a); // コピー
	moveStr(); // ムーブ

	return 0;
}
#include <stdio.h>

// 関数テンプレート
template <typename Type>
Type Min(Type a, Type b) {
	return a < b ? a : b;
}

// テンプレート解除
template <>
char Min<char>(char a, char b) {
	return printf("数字以外は代入できません");
}

int main() {

	// int
	printf("%d\n", Min<int>(1, 2));
	// float
	printf("%.1f\n", Min<float>(2.5f, 1.5f));
	// double
	printf("%lf\n", Min<double>(7.55425, 5.23625));
	// char
	printf("%c\n", Min<char>('a', 'b'));

	return 0;
}
#include <stdio.h>

template <typename Type>
Type Min(Type a, Type b) {
	return a < b ? a : b;
}

template <>
char Min<char>(char a, char b) {
	return printf("数字以外は代入できません");
}

int main() {

	printf("%d\n", Min<int>(1, 2));
	printf("%.1f\n", Min<float>(2.5f, 1.5f));
	printf("%lf\n", Min<double>(7.55425, 5.23625));
	printf("%c\n", Min<char>('a', 'b'));

	return 0;
}
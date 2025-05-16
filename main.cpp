#include <stdio.h>

template <typename Type1, typename Type2>

class Math {
public:
	// メンバ変数
	Type1 a;
	Type2 b;

	// コンストラクタ
	Math(Type1 a, Type2 b) : a(a), b(b) {}

	// メンバ関数
	Type1 Min() {
		return static_cast<Type1>(a < b ? a : b);
	};
};

int main() {

	Math<int,int> b1(1, 2);
	Math<int, float> b2(3, 4.0f);
	Math<int, double> b3(5, 6.0);
	Math<float, float> b4(7.0f, 8.0f);
	Math<float, double> b5(9.0f, 10.0);
	Math<double,double> b6(11.0, 12.0);

	printf("int,int Min: %d\n", b1.Min());
	printf("int,float Min: %d\n", b2.Min());
	printf("int,double Min: %d\n", b3.Min());
	printf("float,float Min: %.2f\n", b4.Min());
	printf("float,double Min: %.2f\n", b5.Min());
	printf("double,double Min: %lf\n", b6.Min());
	
	return 0;
}
#include <stdio.h>
#include "Circle.h"
#include "Rectangle.h"
#include "IShape.h"

int main() {
	IShape* shape[2];
	
	// 生成
	shape[0] = new Circle;
	shape[1] = new Rectangle;

	// 計算と描画
	for (int i = 0; i < 2; i++) {
		shape[i]->Size();
		shape[i]->Draw();
	}

	// 解放
	for (int i = 0; i < 2; i++) {
		delete shape[i];
	}

	return 0;
}
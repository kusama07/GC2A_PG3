#pragma once
#include "IShape.h"

class Rectangle : public IShape
{
public:
	// コンストラクタ
	Rectangle();
	// デストラクタ
	~Rectangle();
	// 面積を計算する
	void Size() override;
	// 値を描画する
	void Draw() override;
private:
	int width_;
	int height_;

};


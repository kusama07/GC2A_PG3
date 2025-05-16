#pragma once
#include "IShape.h"

class Circle : public IShape
{
public:
	// コンストラクタ
	Circle();
	// デストラクタ
	~Circle();
	
	// 面積を計算する
	void Size() override;
	// 値を描画する
	void Draw() override;
private:
	int radius_;
};


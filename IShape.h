#pragma once
#include <stdio.h>

class IShape
{
public:
	// 面積を計算する
	virtual void Size() = 0;

	// 値を描画する
	virtual void Draw() = 0;

protected:
	float ans_;
};


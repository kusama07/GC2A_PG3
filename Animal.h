#pragma once
#include <stdio.h>

class Animal {
public:
	// コンストラクタ
	Animal();
	// デストラクタ
	virtual ~Animal();
	// 鳴く
	virtual void cry();

protected:
	// 名前
	const char* name;
};
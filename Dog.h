#pragma once
#include "Animal.h"

class Dog : public Animal {
public:
	// コンストラクタ
	Dog();
	// デストラクタ
	~Dog();
	// 鳴く
	void cry() override;
private:
};


#pragma once
#include "Animal.h"

class Cat : public Animal {
public:
	// コンストラクタ
	Cat();
	// デストラクタ
	~Cat();
	// 鳴く
	void cry() override;

private:
};

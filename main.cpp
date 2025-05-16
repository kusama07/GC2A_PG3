#include <stdio.h>
#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

int main() {
	Animal* animals[3];

	// 生成
	for (int i = 0; i < 2;i++) {
		if (i < 1) {
			animals[i] = new Dog();
		} else {
			animals[i] = new Cat();
		}
	}

	// 鳴く
	for (int i = 0; i < 2; i++) {
		animals[i]->cry();
	}

	// 解放
	for (int i = 0; i < 2; i++) {
		delete animals[i];
	}
	
	return 0;
}
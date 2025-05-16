#include "Enemy.h"
#include <stdio.h>

// メンバ関数ポインタのテーブルを定義
void (Enemy::* Enemy::spFuncTable[])() = {
	&Enemy::Approach,
	&Enemy::Shot,
	&Enemy::Leave,
};

void Enemy::Update()
{
	// メンバ関数ポインタのテーブルを使って、メンバ関数を呼び出す
	(this->*spFuncTable[static_cast<size_t>(phase_)])();
	phase_ = Phase::SHOT;
	(this->*spFuncTable[static_cast<size_t>(phase_)])();
	phase_ = Phase::LEAVE;
	(this->*spFuncTable[static_cast<size_t>(phase_)])();

}

// メンバ関数の実装
void Enemy::Approach()
{
	printf("近接\n");
}

void Enemy::Shot()
{
	printf("射撃\n");
}

void Enemy::Leave()
{
	printf("離脱\n");
}
#pragma once
class Enemy
{
public:
	// 自作メンバ関数
	void Update();
	void Approach();
	void Shot();
	void Leave();
private:
	// メンバ関数ポインタのテーブル
	static void (Enemy::* spFuncTable[3])();

	enum class Phase {
		APPROACH,
		SHOT,
		LEAVE,
	}phase_ = Phase::APPROACH;
};
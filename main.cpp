#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <functional>
// コールバック関数の型定義
typedef std::function<void(int*)> PFunc;
typedef std::function<void(bool*)> DiceFunc;

// 乱数を生成する関数
void dice(DiceFunc s) {
   srand((unsigned)time(nullptr));
   
   int diceNum = rand() % 6 + 1;

   printf("出目%d\n", diceNum);

   // 答え入力
   int ans = 0;
   scanf_s("%d", &ans);

   bool isCorrect;

   // 答えが正しいかどうかを判定
   if (ans == 2 && diceNum % 2 == 0 || ans == 1 && diceNum % 2 == 1) {
       isCorrect = true;
   } else {
       isCorrect = false;
   }

   // コールバック関数を呼び出す
   s(&isCorrect);
}

// コールバック関数
void correctOutPut(bool* s) {
   printf("正解\n");
}

// コールバック関数
void incorrectOutput(bool* s) {
   printf("不正解\n");
}

// タイムアウトを設定する関数
void SetTimeout(PFunc p, int second) {
   Sleep(second * 1000);

   p(&second);
};

int main() {
   // コールバック関数のポインタを設定
   DiceFunc correct = [](bool* s) { correctOutPut(s); };
   DiceFunc incorrect = [](bool* s) { incorrectOutput(s); };
   
   printf("半（奇数）の場合 1 , 丁（偶数）の場合 2 を入力 : ");
   // 乱数を生成して、正解か不正解かを判定
   DiceFunc diceResult = [correct, incorrect](bool* isCorrect) {
       if (*isCorrect) {
           correct(isCorrect);
       } else {
           incorrect(isCorrect);
       }
   };

   dice(diceResult);

   return 0;
}
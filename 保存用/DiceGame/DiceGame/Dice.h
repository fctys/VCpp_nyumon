#pragma once

namespace DiceGame {
	ref class Dice
	{
	private:
		//フィールド
		int _number;

	public:
		//コンストラクター
		Dice();
		Dice(int initNumber);

		//メソッド
		void Shake();

		//プロパティ
		property int Number {
			int get() {
				return _number;
			}
			void set(int newNumber) {
				if (newNumber >= 1 && newNumber <= 6) {
					_number = newNumber;
				}
			}
		}
	};
}



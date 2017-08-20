#include "Dice.h"

using namespace System;
using namespace DiceGame;

//�R���X�g���N�^�[
Dice::Dice()
{
	//�����l��1�̖�
	this->_number = 1;
}

//�R���X�g���N�^�[�i�I�[�o�[���[�h�j
Dice::Dice(int initNumber) {
	//�����l��ݒ�
	if (initNumber >= 1 && initNumber <= 6) {
		this->_number = initNumber;
	}
	else {
		this->_number = 1;
	}
}

//�T�C�R����U��
void Dice::Shake() {
	Random^ ran = gcnew Random();
	this->_number = ran->Next(1, 7);
}

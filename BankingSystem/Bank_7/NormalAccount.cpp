#include <iostream>
#include <string>
using namespace std;
#include "Account.h"
#include "NormalAccount.h"


NormalAccount::NormalAccount(string name, int id, int money, int rate)
	: Account(name, id, money), rate(rate) {}

// �Ա�ó������
void NormalAccount::input(int money) {
	/*int don = money + (money * (rate / 100.0));
	Account::inMoney(don);*/
	Account::inMoney(money);				// �Աݾ�
	Account::inMoney(money*(rate/100.0));		// ����
}


// [�и��ϱ�] acc������

#include <iostream>
#include <cstring>		// string.h 
#pragma warning(disable:4996)
#include "Account.h"
using namespace std;


// Account Ŭ���� ������
Account::Account(int id, int money, char* cusName)
	: id(id), balance(money) {
	// �����Ҵ� - ������ �ּ�ȭ
	name = new char[strlen(cusName) + 1];
	strcpy(name, cusName);
}

Account::Account(const Account& ref)						// const
	: id(ref.id), balance(ref.balance) {
	name = new char[strlen(ref.name) + 1];
	strcpy(name, ref.name);
}

int Account::getId() const { return id; }
int Account::getBalance() const { return balance; }
void Account::inBalance(int money) {
	balance += money;
}
int Account::outBalance(int money) {
	if (balance < money)
		return 0;			// �ܾ��� ������ ���
	else
		balance -= money;
	return money;
}

void Account::showAccount() const {
	cout << id << "\t:\t" << name << "\t:\t" << balance << endl;
}

Account::~Account() {
	delete[] name;
}
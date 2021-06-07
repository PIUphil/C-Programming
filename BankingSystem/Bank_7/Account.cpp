#include <iostream>
#include <string>
using namespace std;
#include "Account.h"

Account::Account(string name, int id, int money)
	: name(name), id(id), balance(money) {}

void Account::setName(string name) {
	this->name = name;
}

string Account::getName() const {
	return name;
}

int Account::getId() const {
	return id;
}

int Account::getBalance() const {
	return balance;
}

// �Ա�ó���� ���� �޼���
void Account::inMoney(int money) {
	balance += money;
}

// ���ó���� ���� �޼���
int Account::outMoney(int money) {
	if (balance < money)
		return 0;

	balance -= money;
	return 1;
}

void Account::showAllAccount() const {
	cout << "���¹�ȣ : " << id << endl;
	cout << "���̸� : " << name << endl;
	cout << "���ݱݾ� : " << balance << endl << endl;
}

void Account::input(int money) {}
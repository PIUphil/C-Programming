#pragma once
#include <iostream>
#include <string>
#pragma warning(disable:4996)
#include "Account.h"

using namespace std;


class BankingSystem {
	// ��ü ������ �迭 : �����Ҵ�
	Account* accList[100];
	int accNum;// = 0;			// ����޼��� �ʱⰪ���� ��

public:
	BankingSystem();			// ���� �ϰ�, �ؿ��� �ۼ�

	void showMenu() const;		// �޴����
	void makeAccount();			// ���°���
	void makeNormalAccount();
	void makeHighAccount();
	void depositMoney();		// �Ա�ó��
	void withdrawMoney();		// ���ó��
	void showAllAccount() const;		// ��ü�� �ܾ���ȸ

	~BankingSystem();
};
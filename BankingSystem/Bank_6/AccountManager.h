// [�и��ϱ�] am ����� 

#pragma once
#include <iostream>
#include <cstring>		// string.h 
#pragma warning(disable:4996)
#include "Account.h"

using namespace std;
/*
  Ŭ���� �̸� : AccountManager
  Ŭ���� ���� : Handler Ŭ���� or Control Ŭ����
*/


class AccountManager {
	// ��ü ������ �迭 : �����Ҵ�
	Account* accList[100];
	int accNum;// = 0;			// ����޼��� �ʱⰪ���� ��

public:
	AccountManager();			// ���� �ϰ�, �ؿ��� �ۼ�

	void showMenu() const;			// �޴����
	void makeAccount();			// ���°���
	void depositMoney();		// �Ա�ó��
	void withdrawMoney();		// ���ó��
	void showAllAccount() const;		// ��ü�� �ܾ���ȸ

	~AccountManager();
};
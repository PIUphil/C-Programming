// [�и��ϱ�] acc�����

#pragma once
#include <iostream>
#include <cstring>		// string.h 
#pragma warning(disable:4996)
using namespace std;
/*
  Ŭ���� �̸� : Account
  �ڵ鷯Ŭ���� : AccountManager
*/


// ����ü - ���� ���õ� �ڷ����� �ϳ��� ��� �����ϴ� �ڷᱸ��
class Account {
	int id;					// ���¹�ȣ
	int balance;			// �����ܰ�
	// char name[NAME_LEN];	// ���̸�		// �����Ҵ����� �ٲ�
	char* name;				// ���̸�

public:

	Account(int id, int money, char* cusName);	// ������ �޼���
	Account(const Account& ref);		// ���� ������

	int getId() const;
	int getBalance() const;
	void inBalance(int money);
	int outBalance(int money);

	void showAccount() const;

	~Account();
};
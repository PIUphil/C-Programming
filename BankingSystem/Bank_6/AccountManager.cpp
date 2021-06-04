// [�и��ϱ�] am������


#include <iostream>
#include <cstring>		// string.h 
#pragma warning(disable:4996)
#include "AccountManager.h"
using namespace std;

const int NAME_LEN = 20;


// AccountManager Ŭ���� ������
AccountManager::AccountManager() : accNum(0) {}

AccountManager::~AccountManager() {
	for (int i = 0; i < accNum; i++)
		delete accList[i];				// �����Ҵ� ��ȯ
}


// �Լ� ���� �����ϴ� ����
void AccountManager::showMenu() const {			// �޴����
	cout << "==== Bank Menu ====\n";
	cout << "1. ���°���\n";
	cout << "2. �Ա�ó��\n";
	cout << "3. ���ó��\n";
	cout << "4. �ܾ���ȸ\n";
	cout << "5. ���α׷� ����\n";
	cout << "===================\n";
}

void AccountManager::makeAccount() {			// ���°���
	/* ���¹�ȣ, ���̸�, ���ݱݾ� */
	int num;					// ���¹�ȣ
	int money;					// ���ݱݾ�
	char cusName[NAME_LEN];		// ���̸�

	cout << "== ���°��� ==\n";
	cout << "���¹�ȣ = ";
	cin >> num;
	cout << "���̸� = ";
	cin >> cusName;
	cout << "���ݱݾ� = ";
	cin >> money;

	accList[accNum++] = new Account(num, money, cusName);

	cout << "���°����� �Ϸ�Ǿ����ϴ�.\n\n";
}


void AccountManager::depositMoney() {		// �Ա�ó��
	/* ���¹�ȣ�� �Է¹޾� �ش� ���¿� �ݾ��� �����ϴ� �۾� */
	int num;
	int money;

	cout << "== �Ա�ó�� ==\n";
	cout << "���¹�ȣ = ";
	cin >> num;

	for (int i = 0; i < accNum; i++) {
		if (accList[i]->getId() == num) {			// ���¹�ȣ�� �����Ѵٸ�
			cout << "�Աݱݾ� = ";
			cin >> money;

			// �ش� ���¿� �����ϴ� �۾�
			accList[i]->inBalance(money);

			cout << "�Ա�ó���� �Ϸ�Ǿ����ϴ�.\n\n";
			return;
		}
	}
	cout << "��ġ�ϴ� ���¹�ȣ�� �������� �ʽ��ϴ�.\n\n";
}

void AccountManager::withdrawMoney() {		// ���ó��
	/*	���¹�ȣ�� �Է¹ް� �ش���¿� �ݾ��� ����Ѵ�.
		��, �ش� ������ �ܾ��� ��ݱݾ׺��� Ŭ ��� ����������ϵ��� �Ѵ�. */

	int num;
	int money;

	cout << "== ���ó�� ==\n";
	cout << "���¹�ȣ = ";
	cin >> num;

	for (int i = 0; i < accNum; i++) {
		if (accList[i]->getId() == num) {			// ���°� �����Ѵٸ�
			cout << "��ݱݾ� = ";
			cin >> money;

			if (accList[i]->outBalance(money) == 0) {
				cout << "�ܾ��� �����մϴ�.\n";
			}

			cout << "���ó���� �Ϸ�Ǿ����ϴ�.\n\n";
			return;
		}
	}
	cout << "��ġ�ϴ� ���¹�ȣ�� �������� �ʽ��ϴ�.\n\n";
}

void AccountManager::showAllAccount() const {		// ��ü�� �ܾ���ȸ
	cout << "== ��ü�� �ܾ���ȸ ==\n";
	cout << "���¹�ȣ  :   ���̸�   :   �� ��\n";
	cout << "===================================\n";
	for (int i = 0; i < accNum; i++) {
		accList[i]->showAccount();
	}
	cout << "===================================\n\n";
}
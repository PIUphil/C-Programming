// [�и��ϱ�] main

#include <iostream>
#include <cstring>		// string.h 
#pragma warning(disable:4996)
#include "Account.h"
#include "AccountManager.h"

using namespace std;

// ������
enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };		// DEPOSIT = 2 , WITHDRAW = 3,... 4, 5

/*
  ��Ʈ�� Ŭ������ AccountManager �߽����� main ����
*/

int main() {
	int menu;

	AccountManager manager;

	while (true) {
		manager.showMenu();
		cout << "�޴� = ";
		cin >> menu;

		switch (menu) {
		case MAKE:		// ���°���
			manager.makeAccount(); break;
		case DEPOSIT:	//�Ա�ó��	
			manager.depositMoney(); break;
		case WITHDRAW:  // ���ó��
			manager.withdrawMoney();  break;
		case INQUIRE:	// �ܾ���ȸ
			manager.showAllAccount();  break;
		case EXIT:		// �۾���������
			// �����Ҵ� ��ȯ
			/*for (int i = 0; i < accNum; i++)		// AccountManager���� �Ҹ��ڷ� �ص�
				delete manager.accList[i];*/

			cout << "���α׷��� �����մϴ�\n\n";
			return 0;
		default:
			cout << "�޴��� ������ �ùٸ��� �ʽ��ϴ�.\n\n";
		}
	}
	return 0;
}
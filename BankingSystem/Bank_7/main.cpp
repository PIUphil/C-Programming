/*
  �������� : ���뿹��(NormalAccount), �ſ뿹��(HighAccount)
  ó������
  1. ���뿹���� ������ ���ݰ� �����ϳ�, �Ա�ó���� ����� �� �Աݾ��� 3%�� ���ڷ� �߰��Ա��Ѵ�.
  2. �ſ뿹���� ���� �ſ뿡 ���� �Ա�ó���� ����� ��
	 A����� 7%�� ���ڷ� �߰��Ա�, B����� 5%, C����� 3%�� �����Ѵ�
  3. ���¸� �����ϴ� �������� �ԱݵǴ� �ݾ׿� ���ڸ� ������� �ʴ´�.
  4. ���¸� ������ �� �Աݰ����� ��ĥ ������ ���ڸ� �߰��Ѵ�.
  5. ���ڸ� ����ϴ� �������� �߻��ϴ� �Ҽ��� ������ �ݾ��� �����Ѵ�.
  6. ��Ÿ ������ ����� ���Ŀ� �°� �����Ѵ�.

  <�Է� �� �������>
  ===== Bank Menu =====
  1. ���°���
  2. �Ա�ó��
  3. ���ó�� 
  4. ��ü�� �ܾ���ȸ
  5. ���α׷� ����
  =====================
  �޴� =

  ===== ���°��� =====
  1. ���뿹�� ���°���
  2. �ſ뿹�� ���°���
  ====================
  ���� = 1

  ���¹�ȣ = 
  ���̸� = 
  ���ݱݾ� = 
  ����������(%) =

  ===== ���°��� =====
  1. ���뿹�� ���°���
  2. �ſ뿹�� ���°���
  ====================
  ���� = 2

  ���¹�ȣ =
  ���̸� =
  ���ݱݾ� =
  ����������(%) =
  �ſ���(1toA, 2toB, 3toC) = 

*/

#include <iostream>
#include <cstring>		// string.h 
#pragma warning(disable:4996)
#include "BankingSystem.h"

using namespace std;

// ������
enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };		// DEPOSIT = 2 , WITHDRAW = 3,... 4, 5

/*
  ��Ʈ�� Ŭ������ AccountManager �߽����� main ���� // BankingSystem
*/

int main() {
	int menu;

	//AccountManager manager;
	BankingSystem manager;

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
			cout << "���α׷��� �����մϴ�\n\n";
			return 0;
		default:
			cout << "�޴��� ������ �ùٸ��� �ʽ��ϴ�.\n\n";
		}
	}
	return 0;
}
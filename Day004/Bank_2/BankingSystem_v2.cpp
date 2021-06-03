// Account Ŭ���� ����, ��ü ������ �迭 ���

#include <iostream>
#include <cstring>		// string.h 
#pragma warning(disable:4996)
/*
  strlen : ���ڿ� ����
  strcpy : ���ڿ� ����, ���ڿ��� ���Կ�����(=)�� ���Ұ�
  strcmp : ���ڿ� ��, ���(1, 0:��ġ, -1)		// 1 - �տ����� ���������� �ڿ�����(��,z) (<-> -1)
		   strcmp(���ڿ�1, ���ڿ�2)
*/
using namespace std;
const int NAME_LEN = 20;	

// �����Լ� �����
void showMenu();			// �޴����
void makeAccount();			// ���°���
void depositMoney();		// �Ա�ó��
void withdrawMoney();		// ���ó��
void showAllAccount();		// ��ü�� �ܾ���ȸ

// ������
enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };		// DEPOSIT = 2 , WITHDRAW = 3,... 4, 5
// enumerate

// ����ü - ���� ���õ� �ڷ����� �ϳ��� ��� �����ϴ� �ڷᱸ��
class Account {
	int id;					// ���¹�ȣ
	int balance;			// �����ܰ�
	// char name[NAME_LEN];	// ���̸�		// �����Ҵ����� �ٲ�
	char* name;				// ���̸�

public:
	// ������ �޼���
	Account(int id, int money, char* cusName)		// �ݷ��ʱ�ȭ
		: id(id), balance(money) {
		// �����Ҵ� - ������ �ּ�ȭ
		name = new char[strlen(cusName) + 1];	// �̸��� ����+1��ŭ ũ��� �����Ҵ�
		strcpy(name, cusName);
	}

	int getId() { return id; }
	int getBalance() { return balance; }
	void inBalance(int money) {
		balance += money;
	}
	int outBalance(int money) {
		if (balance < money)
			return 0;			// �ܾ��� ������ ���
		else
			balance -= money;
		return money;
	}

	void showAccount() {
		cout << id << "\t:\t" << name << "\t:\t" << balance << endl;
	}

	~Account() {
		delete[] name;
	}
};



/*
// �������� - ��� �Լ��� �����ؼ� ��� ������ ����
Account accList[100];		// Account ����ü�� �迭
int accIndex = 0;			// Account �迭�� �ε���
*/
// 100�� - ������ ����..

// ��ü ������ �迭 : �����Ҵ�
Account* accList[100];
int accNum = 0;


int main() {
	int menu;

	while (true) {
		showMenu();
		cout << "�޴� = ";
		cin >> menu;

		switch (menu) {
		case MAKE:		// ���°���
			makeAccount(); break;
		case DEPOSIT:	//�Ա�ó��	
			depositMoney(); break;
		case WITHDRAW:  // ���ó��
			withdrawMoney();  break;
		case INQUIRE:	// �ܾ���ȸ
			showAllAccount();  break;
		case EXIT:		// �۾���������
			// �����Ҵ� ��ȯ
			for (int i = 0; i < accNum; i++)
				delete accList[i];

			cout << "���α׷��� �����մϴ�\n\n";
			return 0;
		default:
			cout << "�޴��� ������ �ùٸ��� �ʽ��ϴ�.\n\n";
		}
	}
	return 0;
}


// �Լ� ���� �����ϴ� ����
void showMenu() {			// �޴����
	cout << "==== Bank Menu ====\n";
	cout << "1. ���°���\n";
	cout << "2. �Ա�ó��\n";
	cout << "3. ���ó��\n";
	cout << "4. �ܾ���ȸ\n";
	cout << "5. ���α׷� ����\n";
	cout << "===================\n";
}

void makeAccount() {			// ���°���
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

	/*accList[accIndex].id = num;
	accList[accIndex].balance = money;
	// accList[accIndex].name = cusName;  // ���ڿ��� ���Կ����� ���Ұ�
	strcpy(accList[accIndex].name, cusName);
	accIndex++;							// ���� �迭�� ��ġ�� �̵��ϱ����ؼ�*/

	accList[accNum++] = new Account(num, money, cusName);

	cout << "���°����� �Ϸ�Ǿ����ϴ�.\n\n";
}


void depositMoney() {		// �Ա�ó��
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

void withdrawMoney() {		// ���ó��
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

			/*if (accList[i].balance < money) {
				cout << "�ܾ��� �����մϴ�.\n\n";
				return;
			}

			accList[i].balance -= money;*/
			if (accList[i]->outBalance(money) == 0) {
				cout << "�ܾ��� �����մϴ�.\n";
			}

			cout << "���ó���� �Ϸ�Ǿ����ϴ�.\n\n";
			return;
		}
	}
	cout << "��ġ�ϴ� ���¹�ȣ�� �������� �ʽ��ϴ�.\n\n";
}

void showAllAccount() {		// ��ü�� �ܾ���ȸ
	cout << "== ��ü�� �ܾ���ȸ ==\n";
	cout << "���¹�ȣ  :   ���̸�   :   �� ��\n";
	cout << "===================================\n";
	for (int i = 0; i < accNum; i++) {
		/*cout << accList[i]->getId() << "\t:\t" << accList[i]->name;
		cout << "\t:\t" << accList[i]->getBalance() << endl;*/
		accList[i]->showAccount();
	}
	cout << "===================================\n\n";
}
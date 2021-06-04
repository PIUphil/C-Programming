/*
  Entity Class�� Handler Class �и��ϴ� �۾�
  - Handler Class or Control Class
	: ���α׷� ��ü�� ����� ����ϴ� Ŭ����
	  ����� ������ ���� Ŭ����
  - Entity Class
	: �������� ������ ���ϴ�.
	  ���α׷��� ����� �ľ����� ���Ѵ�.
	  �ܼ��� �����͸� ��� �����ϴ� ���Ҹ� �����Ѵ�.
*/

#include <iostream>
#include <cstring>		// string.h 
#pragma warning(disable:4996)

using namespace std;
const int NAME_LEN = 20;

// ������
enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };		// DEPOSIT = 2 , WITHDRAW = 3,... 4, 5

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

// AccountManager Ŭ���� ������
AccountManager::AccountManager(): accNum(0) {}
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

/*
[�и��ϱ�]
main / acc����� / am ����� / acc������ / am������
*/
/*
  ���°��� ���α׷�
  <ó������>
  1. Account ��� ����ü�� �����Ͽ� ó���Ѵ�.
  2. ����ü ����� ���̸�, ���¹�ȣ, ���ݱݾ��� ��Ƽ� ó���Ѵ�.
  3. ���°���, �Ա�ó��, ���ó��, ���������� ����� �����ϴ� �Լ��� �����Ѵ�.
  4. �� �̻��� ���� �����ϱ� ���� ����ü �迭�� ����Ѵ�.
  5. ����ڰ� ���ϴ� �۾��� ������ �� �ֵ��� �����Ѵ�.
  6. ��Ÿ ������ ����� ���Ŀ� �°� ���۵ǵ��� �����Ѵ�.

  <�Է� �� �������>
  == ���°��� ���α׷� ==
  1. ���°���
  2. �Ա�ó��
  3. ���ó��
  4. ��ü�� �ܾ���ȸ
  5. ���α׷� ����
  ========================
  �޴� =

  == ���°��� ==
  ���¹�ȣ =
  ���̸� =
  ���ݱݾ� =
  ===============
  ���°����� �Ϸ�Ǿ����ϴ�.

  == �Ա�ó�� ==
  ���¹�ȣ =
  �Աݱݾ� =
  ===============
  �Ա�ó���� �Ϸ�Ǿ����ϴ�.

  == ���ó�� ==
  ���¹�ȣ =
  ��ݱݾ� =
  ===============
  ���ó���� �Ϸ�Ǿ����ϴ�.

  == ��ü�� �ܾ���ȸ ==
  ���¹�ȣ  ���̸�  �����ܾ�
  ----------------------------
  xxx       xxx        xxx

  ============================

  
*/

#include <iostream>
#include <string>
using namespace std;


struct Account {	
	int num, money;
	string name;
};

Account account[5];			// �� �ִ� 5��

int choice, in_num, in_money;
int i = 0;					// ���°�����ȣ

void Make(), Deposit(), Withdraw(), Show();		// ����, �Ա�, ���, ��ȸ


int main() {
	while (true) {
		cout << "== ���°��� ���α׷� ==" << endl
		<< "1. ���°���" << endl
		<< "2. �Ա�ó��" << endl
		<< "3. ���ó��" << endl
		<< "4. ��ü�� �ܾ���ȸ" << endl
		<< "5. ���α׷� ����" << endl
		<< "========================" << endl;

		cout << "�޴� = ";
		cin >> choice;
		cout << endl;

		switch (choice) {
			case 1: Make();	break;					// "1. ���°���"
			case 2: Deposit(); break;				// "2. �Ա�ó��"
			case 3: Withdraw();	break;				// "3. ���ó��"
			case 4: Show(); break;		 			// "4. ��ü�� �ܾ���ȸ"
			case 5: {								// "5. ���α׷� ����"
				cout << "== ���α׷��� �����մϴ�. ==" << endl;
				return 0;
			} break;
			default: cout << "�߸��� �����Դϴ�." << endl << endl;	// "��Ÿ. ���ÿ���"
		}
	}
	return 0;
}

// ���°��� �Լ�
void Make() {
	if (i > 5) {
		cout << "�ο��ʰ�. ���̻� ���¸� ���� �� �����ϴ�." << endl << endl;
		return;
	}

	cout << "== ���°��� ==" << endl;
	cout << "���¹�ȣ = (����)";
	cin >> account[i].num;

	for (int k = 0; k < i; k++) {
		if (account[k].num == account[i].num) {
			cout << "�̹� �����ϴ� �����Դϴ�. �ٸ� ��ȣ�� �Է����ּ���." << endl << endl;
			return;
		}
	}

	cout << "���̸� = ";
	cin >> account[i].name;
	cout << "���ݱݾ� = ";
	cin >> account[i].money;
	cout << "==============" << endl;
	cout << "���°����� �Ϸ�Ǿ����ϴ�." << endl <<endl;
	i++;
}

// �Ա� �Լ�
void Deposit() {
	cout << "== �Ա�ó�� ==" << endl;
	cout << "���¹�ȣ =";
	cin >> in_num;
	
	int chk = 0;
	for (int k = 0; k < i; k++) {
		if (account[k].num == in_num)
			chk = 1;
	}
	if (chk==0) {
		cout << "�Է��Ͻ� ���°� �������� �ʽ��ϴ�." << endl << endl;
		return;
	}

	cout << "�Աݱݾ� =";
	cin >> in_money;

	for (int k = 0; k < i; k++) {
		if (account[k].num == in_num) {
			account[k].money += in_money;
		}
	}
	
	cout << "==============" << endl;
	cout << "�Ա�ó���� �Ϸ�Ǿ����ϴ�." << endl << endl;
}

// ��� �Լ�
void Withdraw() {
	cout << " == ���ó�� ==" << endl;
	cout << "���¹�ȣ =";
	cin >> in_num;

	int chk = 0;
	for (int k = 0; k < i; k++) {
		if (account[k].num == in_num)
			chk = 1;
	}
	if (chk == 0) {
		cout << "�Է��Ͻ� ���°� �������� �ʽ��ϴ�." << endl << endl;
		return;
	}

	cout << "��ݱݾ� =";
	cin >> in_money;

	for (int k = 0; k < i; k++) {
		if (account[k].num == in_num) {
			if (account[k].money < in_money) {
				cout << "�ܾ��� �����մϴ�."<< endl;
				cout << "==============" << endl << endl;
			}
			else {
				account[k].money -= in_money;
				cout << "==============" << endl;
				cout << "���ó���� �Ϸ�Ǿ����ϴ�." << endl << endl;
			}
		}
	}
}

// ��ü ���� ��ȸ �Լ�
void Show() {								
	cout << "=========== ��ü�� �ܾ���ȸ ===========" << endl;
	cout << "���¹�ȣ\t���̸�\t�����ܾ�" << endl;
	cout << "-----------------------------------------" << endl;
	for (int j = 0; j < i; j++) {
		cout << account[j].num << "\t\t" << account[j].name << "\t\t" << account[j].money << endl;
	}
	cout << "=========================================" << endl << endl;
}
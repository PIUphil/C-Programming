/*
  ��Ӱ� ������ �׸��� �߻�޼���
  ȸ�翡�� �������� �޿��� ������ �������� ���α׷� ����
  ������(Permanent)���� ���� - �̸��� �޿�
  ���ο� �������, �Ŵ� ���޵Ǵ� �����޿��� ����, ��������
*/

#include <iostream>
#include <string>
using namespace std;

class Permanent {
	string name;
	int salary;

public:
	Permanent(string name, int pay)
		: name(name), salary(pay) {}

	// getter or setter
	int getPay() {
		return salary;
	}

	void disp() {
		cout << "�̸� : " << name << endl;
		//cout << "�޿� : " << salary << endl << endl;
		cout << "�޿� : " << getPay() << endl << endl;
	}
};

// ��ü ���� �迭
Permanent* empList[100];		// 100�� ������ ����
int empNum = 0;

// ���ο� ��������� ���� �޼���
void addEmployee(Permanent* emp) {
	/*string name;
	int pay;
	cout << "�����̸� = ";
	cin >> name;
	cout << "�޿� = ";
	cin >> pay;*/

	empList[empNum++] = emp;
	//empList[empNum++] = new Permanent(name, pay);
}

// ���޵Ǵ� �����޿��� ������ ���� �޼���
void showTotalSalary() {
	int tot = 0;

	for (int i = 0; i < empNum; i++) {
		tot += empList[i]->getPay();
	}

	cout << "�޿��� ���� : " << tot << endl;
}


// ��ü ��ϵ� ������ ������ ����ϴ� �޼���
void showAllSalary() {
	for (int i = 0; i < empNum; i++) {
		empList[i]->disp();
	}
}

int main() {

	/*int inwon;

	cout << "����� ���� �� = ";
	cin >> inwon;

	for (int i = 0; i < inwon; i++) {
		cout << i << "��° �������" << endl;
		addEmployee();
	}*/

	// �������
	addEmployee(new Permanent("aaa", 1000));
	addEmployee(new Permanent("bbb", 1500));
	addEmployee(new Permanent("ccc", 2000));


	// �޿�����
	showTotalSalary();

	// ��������
	showAllSalary();

	return 0;
}

/*entity class - ������ ���� ���� Ŭ����
handler class - ���� ó���ϰų� ������ ���� Ŭ����*/
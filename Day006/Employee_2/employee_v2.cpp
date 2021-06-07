/*
  ��Ӱ� ������ �׸��� �߻�޼���
  ȸ�翡�� �������� �޿��� ������ �������� ���α׷� ����
  ������(Permanent)���� ���� - �̸��� �޿�
  ���ο� �������, �Ŵ� ���޵Ǵ� �����޿��� ����, ��������
*/

#include <iostream>
#include <string>
using namespace std;

/*
  Ŭ���� �̸� : Permanent
  Ŭ���� ���� : Entity Ŭ����		// java - bin, model
*/

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


/*
  Ŭ���� �̸� : EmployeeManager
  Ŭ���� ���� : Hadler or Control Ŭ����
*/

class EmployeeManager {
	// ��ü ���� �迭
	Permanent* empList[100];		// 100�� ������ ����
	int empNum;

public:
	EmployeeManager() : empNum(0) {}

	// ���ο� ��������� ���� �޼���
	void addEmployee(Permanent* emp) {
		empList[empNum++] = emp;
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

	~EmployeeManager() {
		// �����Ҵ� ���� ������ ��ȯ�ϴ� ����
		for (int i = 0; i < empNum; i++) {
			delete empList[i];
		}
	}
};


int main() {

	EmployeeManager manager;

	// �������
	manager.addEmployee(new Permanent("aaa", 1000));
	manager.addEmployee(new Permanent("bbb", 1500));
	manager.addEmployee(new Permanent("ccc", 2000));


	// �޿�����
	manager.showTotalSalary();

	// ��������
	manager.showAllSalary();

	return 0;
}
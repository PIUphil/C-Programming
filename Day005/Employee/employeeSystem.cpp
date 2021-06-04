/*
  Aȸ���� ���� �޿����� ���α׷�
  ����� : Employee
  ������ : Permanent - �����̸�, �޿�(�⺻��)
  ������ : Sales - �����̸�, �޿�(�⺻�� + �Ǹż��� * ���ʽ�)
  �ӽ��� : Temporary - �����̸�, �޿�(�ñ� * �ٹ��ð�)
*/

#include <iostream>
#include <string>
using namespace std;


class Employee {			// �ֻ���Ŭ���� 
	string name;

public:
	Employee(string name) : name(name) {}

	int getPay() {			// �ڽĿ��Ը� �ִ°�.. (���������θ� �������.. �������ٰ� ����;)
		return 0;			// �Ȱ����� ������ �ڽĲ��� ����ȴ�?!
	}						// =>> �߻�ȭ(abstract)

	void show() {}

	void showName() {
		cout << "�̸� : " << name << endl;
	}
};

/*
   Ŭ���� �̸� : Permanent
   Ŭ���� ���� : Entity Ŭ����
*/
class Permanent : public Employee {
	// string name;
	int salary;

public:
	Permanent(string name, int pay)
		: Employee(name), salary(pay) {}		// �θ�����ڸ� ȣ��, �ʱ�ȭ

	int getPay() { 
		return salary; 
	}

	void show() {
		// cout << "�̸� : " << name << endl;
		//Employee::show();
		showName();
		cout << "�޿� : " << getPay() << endl << endl;
	}
};

class Sales {
	string name;
	int salary;
	int salesResult;		// �ǸŽ���
	int bonus;				// ��������

};

class Temporary {
	string name;
	int times;				// �ٹ��ð�
	int pay;				// �ð��� �޿�
};




/*
  Ŭ���� �̸� : EmployeeManager
  Ŭ���� ���� : Handler Ŭ����
*/
class EmployeeManager {
	//��ü ���� �迭
	Employee *empList[100];
	int empNum;

public:
	EmployeeManager() : empNum(0) {}

	// ��������� �����ϴ� �޼���
	void addEmployee(Employee* p) {
		empList[empNum++] = p;
	}

	 // �����޿��� ������ ����ϴ� �޼���
	void showTotalSalary() {
		int total = 0;
		for (int i = 0; i < empNum; i++) 
			total += empList[i]->getPay();

		cout << "�޿����� : " << total << endl;
	}

	// ��� ������ ������ ����ϴ� �޼���
	void showAllSalary() {
		for (int i = 0; i < empNum; i++)
			empList[i]->showName();
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
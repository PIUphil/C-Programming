/*
  ��ü�������� ���α׷��� : Ŭ����, ĸ��ȭ(��������), ���, ������, �߻�ȭ...

  ���(Inheritance) : �θ��� ���� �ڽ��� �����޴� ��
  - Ŭ������ Ŭ���� ���� ����� ���Ѵ�.
  - �θ�Ŭ���� or ����Ŭ���� or ���Ŭ����
  - �ڳ�Ŭ���� or ����Ŭ���� or �Ļ�Ŭ����

  Ŭ���� ��ɿ� ����
  - Entity Class or Data Class : �ܼ��� �����͸� ��� ����
  - Control Class or Handler Class : ���� �����͸� ������ ó���ϴ� �뵵�� ���Ǵ� Ŭ����
*/

#include <iostream>
#include <cstring>
#include <string>
using namespace std;


// Entity Class : �ܼ��� �������� �帧�� �˰� �ִ� Ŭ����
class Permanent {
private:
	//char name[100];
	string name;
	int salary;

public:
	/*Permanent(char* name, int money)
		: salary(money) {
		strcpy(this->name, name);
	}*/
	Permanent(string name, int money)
		: salary(money) {
		this->name = name;
	}

	int getPay() const {
		return salary;
	}

	void showSalary() const {
		cout << "�̸� : " << name << endl;
		cout << "�޿� : " << salary << endl << endl;
	}
};


// Handler Class : ��ɵ� ���ַ� ������ Ŭ����
class EmployeeManager {
private:
	// ��ü ������ �迭 - �����Ҵ�
	// Ŭ������ �����ͺ��� = new Ŭ������(�Ű�����);
	Permanent* empList[100];
	int empNum;

public:
	EmployeeManager(): empNum(0) {}

	// ���� ����ϴ� �޼���
	void AddEmployee(Permanent* p) {
		empList[empNum++] = p;
	}

	// �Ŵ� ���޵Ǵ� ������ �޿��� ������ ����ϴ� �޼���
	void showTotalSalary() const {				// const�� ������� ���� �� ����..
		int sum = 0;

		for (int i = 0; i < empNum; i++)
			sum += empList[i]->getPay();

		cout << "��ü ������ �޿� = " << sum << endl << endl;
	}

	// ��� ������ ������ ����ϴ� �޼���
	void showAllSalary() const {
		for (int i = 0; i < empNum; i++)
			empList[i]->showSalary();
	}

	~EmployeeManager() {
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}
};



int main() {
	
	EmployeeManager handler;

	// �������
	Permanent emp1("aaa", 10000);
	handler.AddEmployee(new Permanent(emp1));		// �����Ҵ� ���� �;���
	handler.AddEmployee(new Permanent("bbb", 15000));
	handler.AddEmployee(new Permanent("ccc", 20000));
	
	// ���� �޿��� �� ��
	handler.showTotalSalary();

	// ��ϵ� ������ ����
	handler.showAllSalary();

	return 0;
}
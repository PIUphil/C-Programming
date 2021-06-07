/*
  ���(Inheritance) : ���Ŭ����, �Ļ�Ŭ����
  ����(Employee) : �̸�
    ������(Permanent) : �̸�, �޿�(�⺻��)
      ������(Sales) : �̸�, �޿�(�⺻��+����(�ǸŽ���*���ʽ�))
    �ӽ���(Temporary) : �̸�, �޿�(�ٹ��ð�*�ð���޿�)
*/

#include <iostream>
#include <string>
using namespace std;

/*
  Ŭ���� �̸� : Employee (�ֻ��� Ŭ����)
  Ŭ���� ���� : Entity Ŭ����
*/

class Employee {
    string name;

public:
    Employee(string name): name(name) {}

    void setName(string name) {
        this->name = name;
    }

    string getName() {
        return name;
    }

    void disp() {
        cout << "�̸� : " << name << endl;
    }
};

/*
  Ŭ���� �̸� : Permanent
  Ŭ���� ���� : Entity Ŭ����
*/

class Permanent : public Employee {
    int salary;

public:
    Permanent(string name, int pay)
        : Employee(name), salary(pay) {}

    void setPay(int pay) {
        salary = pay;
    }

    int getPay() {
        return salary;
    }

    /*
      �����ε� : ������ �̸��� ���� �޼��带 ���� �� ����
                 ��, �Ű������� ������ �ٸ��ų� ������ Ÿ���� �޶���Ѵ�.
      �������̵� : ������. 
                   �θ�� �ڳడ ���� �̸��� �޼��带 ���� ��,
                   �ڳ� �޼��尡 ����ȴ�.
                   ����ʵ�� �θ𲨰� ����, �޼���� �ڽĲ��� ���� (�߻�޼���)
    */
    void disp() {
        Employee::disp();
        cout << "�޿� : " << getPay() << endl << endl;
    }
};
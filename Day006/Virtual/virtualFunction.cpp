/*
  ���� �Լ�(Virtual Function)
  - �Ļ� Ŭ�������� �������� ������ ����ϴ� ��� �Լ�
  - �������̵�(overriding) : �θ�� �ڽ��� ������ �̸��� ������ �ִ� �޼���
	���� : ����Ÿ�԰� �Ű������� ���ƾ� �Ѵ�.
		   �ڽİ�ü�� �޼���� ȣ��ȴ�.
  - Ű����
	virtual ����Լ��� ����;
*/

#include <iostream>
using namespace std;

class A {
public:
	virtual void disp() {							// �߻�޼���. �����Լ�
		cout << "A Ŭ������ disp() �Լ�" << endl;
	}
};

class B : public A {
public:
	void disp() {
		cout << "B Ŭ������ disp() �Լ�" << endl;
	}
};

int main() {
	// ������ : �θ�ü�� �ڽİ�ü�� ��Ƽ� ǥ���ϴ� ��
	A* ptr;			// ��ü ������
	A obj_a;
	B obj_b;

	ptr = &obj_a;
	ptr->disp();

	ptr = &obj_b;		// ������ ���� ǥ�� -> �θ� ��ü�� �ڽ� ��ü�� ����
	ptr->disp();		//						  ptr		 B

	return 0;
}
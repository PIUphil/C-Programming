/*
  �����Լ� : �Ļ�Ŭ�������� �������� ������ ����ϴ� ����Լ�
			 �ݵ�� �������ؾ߸� �ϴ� �Լ��� �ƴϴ�.

  ���� �����Լ� : �ݵ�� �Ļ�Ŭ�������� �������ؾ߸� �ϴ� �Լ�
  - virtual ����Լ��� ���� = 0;

  �߻� Ŭ����(abstract class)
  - �ϳ� �̻��� ���� �����Լ��� �����ϴ� Ŭ����
  - �ݵ�� �������ؾ߸� �Ѵ�.
  - ��ü�� ������ �� ����.
*/

#include <iostream>
using namespace std;

class Animal {
public:
	virtual ~Animal() {}		// ���� �Ҹ����� ����
	virtual void cry() = 0;		// ���� �����Լ��� ����
};

class Dog : public Animal {
public:
	virtual void cry() {
		cout << "�۸�" << endl;
	}
};


class Cat : public Animal {
public:
	virtual void cry() {
		cout << "�߿�" << endl;
	}
};


int main() {
	Dog my_dog;
	my_dog.cry();

	Cat my_cat;
	my_cat.cry();

	// Animal ani;			// �߻�Ŭ������ ��ü�� ���� �� ����
	Animal* ani = &my_dog;	// ���������� ǥ�� ���. �ڽİ�ü�� ��Ƽ� ���.
	ani->cry();

	return 0;
}
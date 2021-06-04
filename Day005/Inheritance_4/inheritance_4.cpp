/*
  ����������(����������)
  - public : ��� ���
  - protected : ��ӿ��� ���
  - private
*/

#include <iostream>
using namespace std;

class Base {
private:
	int num1;
protected:
	int num2;
public:
	int num3;

	void showData() {
		cout << num1 << " : " << num2 << " : " << num3 << endl;
	}
};

class Derived : public Base {
public:
	void show() {
		// cout << num1;	// private - ���ٺҰ�
		cout << num2;
		cout << num3;
	}
};

// private < protected < public
class Derived2 : protected Base {		// public(protected���� ū ��)�� protected�� �Ǿ�, num3�� ���� ���ϰ� ��
public:									// ���Ǵ� public�� �����..
	void show() {
		// cout << num1;	// private - ���ٺҰ�
		cout << num2;
		cout << num3;
	}
};

int main() {
	Base obj;

	//cout << obj.num1;		// private - ���ٺҰ�
	//cout << obj.num2;		// protected - ���ٺҰ�	
	cout << obj.num3;

	Derived obj2;

	//cout << obj2.num1;
	//cout << obj2.num2;
	cout << obj2.num3;


	return 0;
}
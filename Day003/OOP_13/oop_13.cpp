// �������� �Լ�
#include <iostream>
using namespace std;
/*
void swap(int a, int b) {
	int t = a;
	a = b;
	b = t;
	cout << "swap : " << a << " : " << b << endl;

	// return;  ���������� �Ҹ��.
}

void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
	cout << "swap : " << *a << " : " << *b << endl;
}*/

void swap(int &a, int &b) {
	int t = a;
	a = b;
	b = t;
	cout << "swap : " << a << " : " << b << endl;

	// return;  ���������� �Ҹ��.
}


int& FuncOne(int& a) {		
	a++;
	return a;				// ���ϰ� -> ������
}

int FuncTwo(int& a) {
	a++;
	return a;				
}

int main() {
	int num1 = 5;
	int &num2 = FuncOne(num1);		// int& num2 = num1;
	int num3 = FuncTwo(num1);

	cout << num1 << " : "  << num2 << " : " << num3 << endl;
	/*
	int a = 10, b = 20;
	cout << "main : " << a << " : " << b << endl;

	swap(a, b);
	cout << "main : " << a << " : " << b << endl;*/

	/*swap(&a, &b);
	cout << "main : " << a << " : " << b << endl;*/

	return 0;
}

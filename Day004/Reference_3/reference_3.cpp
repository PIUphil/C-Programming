#include <iostream>
using namespace std;

int main() {
	int num = 12;
	int* ptr = &num;		// ������ - �ּҸ� ��´�.
	int** dptr = &ptr;		// ���������� - �ּ��� �ּҸ� ��´�.

	int& ref = num;			// ��������
	int* (&pref) = ptr;		// �����ͺ����� ���������� ����
	int** (&dpref) = dptr;	// ���������� �������� ����

	cout << "ref = " << ref << endl;
	cout << "*pref = " << *pref << endl;
	cout << "**dpref = " << **dpref << endl;

	return 0;
}
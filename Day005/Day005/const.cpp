/*
  const(= constant, ���) : ���� ����� �����Ѵ�.
  - ���� ������ �� ������ �Ѵ�.
*/
#include <iostream>
using namespace std;

int main() {
	//int num1 = 10;
	//const int num2 = 20;	// #define num2 20

	//num1 = 1;
	//num2 = 2;				// ���� �Ұ�

	int value1 = 5, value2 = 11;
	//const int* ptr = &value1;		// *ptr�� ���� ���ٲ�. ptr�� ����Ű�� �ּҴ� ���氡��
	//int* const ptr = &value1;		// ptr ����Ұ�
	const int* const ptr = &value1;	// �Ѵٸ��ٲ�..

	// value1 = 10;
	*ptr = 10;			// ���� �Ұ�
	ptr = &value2;

	// cout << value1 << " : " << *ptr << endl;	// 10:10
	cout << value1 << " : " << *ptr << endl;

	return 0;
}
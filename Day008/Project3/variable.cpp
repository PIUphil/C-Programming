/*
  ������ ��ȿ���� : ������ �Ҹ����
  ���������� ��������
*/

#include <iostream>
using namespace std;

int g;					// ��������

int add(int x, int y) {		// �����Լ�
	// int x = a , int y = b;

	int z;
	//cout << "�������� z = " << z << endl;	// ���������� �ʱ�ȭ�� �ʿ���. ���������� �ʱ�ȭ ���ص���
	//cout << "�������� g = " << g << endl;
	return x + y;
}

int main() {
	int a, b, sum;			// ��������

	cout << "�� ���� �����Է� = ";
	cin >> a >> b;

	sum = a + b;
	cout << "sum = " << sum << endl;
	cout << "sum = " << add(a, b) << "\n";
	cout << "�������� g = " << g << endl;

	return 0;
}
/*
  �迭�� ũ�⸦ ������ �ٸ� ���
*/

#include <iostream>
using namespace std;

int main() {
	// int a[3] = {15, 20, 35};
	int a[] = { 15, 20, 35, 11, 33, 22, 57, 66, 18, 25, 77, 36 };
	//char b[5] = {'a','b','c','d','e'};
	//float c[7] = {1.2f, 2.4f};  // �������� 0���� ä����

	int len = sizeof(a) / sizeof(a[0]);		// �迭�� ũ��

	for (int i=0;i<len;i++) {
		cout << a[i] << endl;

	}



	return 0;
}
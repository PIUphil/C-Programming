/*
  ���ø�(Template) == �Ϲ�ȭ
  - �Լ��� �����ε��� ������ �����ϱ� ���ؼ� ����
*/

#include <iostream>
using namespace std;

// �پ��� �ڷ��������� �۵��ǵ��� �Ϲ�ȭ����
template<typename T>

// int ��� T���
//int max(int data[], int size) {
T max(T data[], int size) {
	//int max = data[0];
	T max = data[0];
	for (int i = 0; i < size; i++) {
		if (max < data[i]) max = data[i];
	}

	return max;
}

//double max(double data[], int size) {
//	double max = data[0];
//	for (int i = 0; i < size; i++) {
//		if (max < data[i]) max = data[i];
//	}
//
//	return max;
//}


int main() {
	int arr[] = { 1, 3, 2, 7, 9, 6, 4 };
	double d[] = { 1.2, 3.7, 2.5, 4.6, 9.3, 10.1, 7.9 };

	int size = sizeof(arr) / sizeof(arr[0]);
	int big = max(arr, size);

	cout << "ū �� = " << big << endl;

	double bigger = max(d, 7);	
	cout << "ū �� = " << bigger << endl;

	return 0;
}
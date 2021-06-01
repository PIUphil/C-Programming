/*
  ������(Pointer):�޸��� �ּҸ� ����Ű�� ��
  - �����ͺ��� : �޸��� �ּҰ��� �����ϴ� ����
	 int a;
	 int *p;
  - ���ټӵ��� ������ �ϱ� ���ؼ�
  - �迭ó�� ��뷮 �����͸� ��� �ִ� �ڷᱸ���� �Բ� ���ȴ�.
  - ������ ���� : +/-, ++/--
*/

#include <iostream>
using namespace std;

int main() {
	int arr[5] = { 10, 20, 30, 40, 50 };
	int* p;
	
	p = arr;  // �迭���� �迭�� �����ּҿ� ����.(&arr[0])

	// cout << "arr[0] = " << arr[2] << endl;
	// cout << "p = " << *(p+2) << endl;

	for (int i=0; i<5; i++)
		cout << *(p+i) << endl;		// ������(p) �״��

	cout << endl;

	for (int i = 0; i < 5; i++)
		cout << *p++ << endl;		// ������(p)�� ��ġ�� �ٲ�

	return 0;
}
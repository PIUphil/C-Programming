/*
  ���� �޸� �Ҵ� : �������� �޸𸮸� �Ҵ�޾� ����ϴ� ��
  - heap ������ ����ȴ�. => ����(stack)
  - c : malloc() / free()
  - c++ : new / delete
  - ��Ÿ��� : new
*/

#include <iostream>
using namespace std;

int main() {
	// ���� �� ���� �����ϴ� �����Ҵ� �޸𸮸� ����
	int* p = new int;			// 4byte

	*p = 10;

	cout << *p << endl;

	delete p;					// �����Ҵ� �޸� ��ȯ
	return 0;
}
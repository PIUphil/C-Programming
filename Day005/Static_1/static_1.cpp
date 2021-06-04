/*
  ��������� static
  - ���������� static : �ش� ���Ͽ����� ������ ����Ѵٴ� �ǹ�
  - ���������� static : �ѹ��� �ʱ�ȭ�ǰ�, �Ϲ����� ���������� �޸� �Լ��� ����� �Ҹ���� �ʴ´�.
*/

#include <iostream>
using namespace std;

// static���� ����� ������ ���������� ���������� �ʱ�ȭ���� ������ 0���� �ʱ�ȭ�ȴ�.

void counter() {
	static int cnt;		// 0���� �ʱ�ȭ��(�ڵ�) -> �Ҹ����� �����Ƿ� cnt���� ��� ������
	//int cnt = 0;		// ��� 1�� ��µ�
	cnt++;
	cout << "Current cnt = " << cnt << endl;
}

//int x;				// �������� - �⺻������ 0���� �ʱ�ȭ��

int main() {
	//int y = 0;		// �������� - �ʱ�ȭ �������

	for (int i = 0; i < 10; i++)
		counter();
	
	/*cout << "x = " << x << endl;
	cout << "y = " << y << endl;*/
	return 0;
}
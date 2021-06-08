/*
  C++ ���ٽ��� ����
  - ĸ�� ����Ʈ : ���ٽĿ��� ����ϰ��� �ϴ� �Լ� �ٱ��� ���� ���
  - �Ű�������()
  - ����Ÿ�� -> : ��������
  - �Լ� �������Ǻ� { ... } : ���ٽ��� �Լ� �ڵ�
  int func(int x, int y) return x+y;
  [](int x, int y) -> int {return x+y;};	// ����ǥ����

  void func(int x, int y) cout << x+y;
  [](int x, int y) {cout << x+y;};			// ����ǥ����

  [](int x, int y) {cout << x+y;}(2,3);		// 5
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	[](int x, int y) {cout << x + y; }(2, 3);
	cout << endl;

	auto love = [](string a, string b) {		// ���ٽ��� ���� Ÿ���� ������ �� ����.. auto�����; �����Ϸ��� �˾Ƽ� ��������
		cout << a << "���� " << b << "�� ����" << endl; 
	};

	love("�ø�", "����");

	return 0;
}
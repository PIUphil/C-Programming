/*
  C++���� auto
  - �����Ϸ����� ���� ���𹮿��� �߷��Ͽ� Ÿ���� �ڵ����� �����ϵ��� ����
  - ���� : ���� ������ ����, �� Ÿ���� ������ ��Ÿ���� �ۼ�
*/

#include <iostream>
using namespace std;

int main() {
	//double pi = 3.141592;
	auto pi = 3.141592;
	auto num = 3;
	auto* p = &num;

	int num2 = 10;
	int& ref = num2;		// ������(����)
	auto ref2 = ref;

	return 0;
}
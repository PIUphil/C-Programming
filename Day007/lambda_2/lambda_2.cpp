#include <iostream>
using namespace std;

int main() {
	double pi = 3.14;		// ��������

	auto calc = [pi](int r) -> double {return pi * r * r; };
	// ���������� ĸ���ؼ� double�ϰŶ�� ����������...�����Ϸ��� �����ϰ� ������ -_-
	
	// return �� ����� ���� �������ָ�, ���� Ÿ���� ���� �� ����
	/*double calc2 = [pi](int r) {return pi * r * r; }(3);
	cout << calc2 << endl;*/

	cout << "���� : " << calc(3);

	return 0;
}
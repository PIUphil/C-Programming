#include <iostream>
using namespace std;

int main() {
	int sum = 0;		// ��������

	[&sum](int x, int y) {sum = x + y; }(2, 3);		// �ּҸ� �����ͼ� ��ĥ �� �ִ�..

	cout << "sum = " << sum << endl;

	return 0;
}
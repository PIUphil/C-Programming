/*
  ���� Loop : ���������� �ݺ��� �����ϴ� ��
  while(True, 1) { ... }
  for(;;) { ... }			// �ʱ��,���ǽ�,������ �����
  do{}while(True);
  while�� : ����ڿ� ���� �ݺ��� ������ ��. Loop ������ ��
  
*/

// ���ڸ� �Է¹޾� ����ϴ� ���α׷�. ��, �Է¹��� ���ڰ� 0�̸� ����

#include <iostream>
using namespace std;

int main() {
	int num;

	while (true) {
		cout << "num = ";
		cin >> num;

		if (num == 0) break;
		cout << "�Է��� ���� = " << num << endl;
	}

	return 0;
}
/*
  switch(��ġ or �� => ������) {
  case ��1 : ���๮��; break;
  case ��2 : ���๮��; break;
  case ��n : ���๮��; break;
  default : ���๮��;
  }
*/

#include <iostream>
using namespace std;

/* �ֹε�Ϲ�ȣ: 123456 - abcdefg
	a��° : ���� �׸��� ����⵵
			9, 0 : 1800 / 1, 2 : 1900 / 3, 4 : 2000
	// bc : ��, �� // de : ��, �� // f : ���鸮 // g : Ȯ��

	8��° ���ڸ� �Է¹޾� ����⵵�� ������ �����ϴ� ���α׷�
*/

int main() {
	int num, year;
	char gender; // M or F

	cout << "�ֹι�ȣ 8��° ���� = ";
	cin >> num;

	switch (num) {			// break�� ������ �Ʒ����� ��� �����
	case 9: case 0: year = 1800; break;
	case 1: case 2: year = 1900; break;
	case 3: case 4: year = 2000; break;
	default: year = 0000;
	}

	if (year == 0000) {
		cout << "���α׷��� �����մϴ�.";
		return 0;
	}
	
	if (num % 2) {		// 0(¦��) or 1(Ȧ��)
		gender = 'M';	// ���� �� ����Ǵ� ���� : 1
	}
	else {
		gender = 'F';
	}

	cout << "����� ����⵵�� " << year << "����Դϴ�." << endl;
	cout << "����� ������ " << gender << "�̽ñ���" << endl;
	return 0;
}
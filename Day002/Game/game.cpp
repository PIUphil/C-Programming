/*
  ���������� ���� �����
  �� ����� �ϴ� ����, ����, �� ������ ����� ������.

  �־��� ����� ���Ŀ� �°� �����ϼ���.

  <�Է� �� �������>
  ���ӿ� ������ ����̸� : ���� ���
  ������ �����մϴ�.
  ���� = ����
  ��� = ����
  ����̰� �̰���ϴ�.
  �ٽ�(Y/N) = y
  
  ���ӿ� ������ ����̸� : ���� ö��
  ���� = ����
  ö�� = ����
  �����ϴ�.
  �ٽ�(Y/N) = N
  ���α׷��� �����մϴ�.
*/

#include <iostream>
#include <string>
using namespace std;


int main() {
	string a, b;
	string c, d;
	char check;

	while (true) {
		cout << "���ӿ� ������ �� ��� �̸� :";
		cin >> a >> b;

		cout << a << " = ";
		cin >> c;
		cout << b << " = ";
		cin >> d;

		if ((c == "����" && d == "��") || (c == "����" && d == "����") || (c == "��" && d == "����"))
			cout << a << "�� �̰���ϴ�." << endl;
		else if ((c == "��" && d == "����") || (c == "����" && d == "����") || (c == "����" && d == "��"))
			cout << b << "�� �̰���ϴ�." << endl;
		else
			cout << "�����ϴ�" << endl;


		cout << "�ٽ�(Y / N) = ";
		cin >> check;

		if (check == 'n'|| check == 'N') break;
	}

	return 0;
}


//int main() {
//	string name1, name2, winner;
//	string rsp1, rsp2;
//	int rsp1_i, rsp2_i;
//	char yn;
//
//	do {
//		cout << "���ӿ� ������ ����̸� : ";
//		cin >> name1 >> name2;
//
//		cout << name1 << " = ";
//		cin >> rsp1;
//
//		cout << name2 << " = ";
//		cin >> rsp2;
//
//		// ���� ���� �� = 1,2,3
//		if (rsp1 == "����") rsp1_i = 1;
//		else if (rsp1 == "����") rsp1_i = 2;
//		else if (rsp1 == "��") rsp1_i = 3;
//		else cout << "error";
//
//		if (rsp2 == "����") rsp2_i = 1;
//		else if (rsp2 == "����") rsp2_i = 2;
//		else if (rsp2 == "��") rsp2_i = 3;
//		else cout << "error";
//
//		// (rsp1_i - rsp2_i)%3
//		switch ((3 + rsp1_i - rsp2_i) % 3 == 0) {
//		case 1: winner = name1; break;
//		case 2: winner = name2; break;
//		default: winner = "0";
//		}
//
//		if (winner!="0")
//			cout << winner << "�̰� �̰���ϴ�." << endl;
//		else cout << "�����ϴ�." << endl;
//
//		cout << "�ٽ�(Y / N) = ";
//		cin >> yn;
//	} while (yn == 'y');
//
//
//	cout << "���α׷��� �����մϴ�." << endl;
//	return 0;
//}
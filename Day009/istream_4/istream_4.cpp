#include <iostream>
#include <cstring>
using namespace std;

/*
  �� ������ �Է��Ͽ� ����ϴ� ���α׷�
  ��, exit�� �Է��ϸ� �ݺ��� ������.
  getline()
*/

int main() {
	char line[80];

	cout << "getline() �Լ��� �̿��ؼ� �ٴ����� �Է�\n";
	cout << "exit�� �Է��ϸ� ���α׷��� ����˴ϴ�." << endl;
	
	int no = 1;		// ���ι�ȣ
	while (true) {
		cout << no << " => ";
		cin.getline(line, 80);
		int cnt = cin.gcount();		// ���� �ֱٿ� �Է��� �ٶ����� ���ڼ��� ����

		if (strcmp(line, "exit") == 0) break;
		cout << "Echo : " << line << endl;
		cout << "���� �� : " << cnt << endl;
		no++;

	}
	return 0;
}
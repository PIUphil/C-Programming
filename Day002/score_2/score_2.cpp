/*
  ����ó�� ���α׷� 2�ܰ�
  ����, ����, ���������� �Է¹޾� ������ ��� �׸��� ������ ���
  ����1. ����� �Ҽ������� �����ϰ�, ������ ���ڷ� �����Ѵ�.
  ����2. �Է¹��� ������ 0 ~ 100������ ������ �Է¹޵�, 
		 ������ ����� �ٽ� �Է¹޵��� �����Ѵ�.
*/

#include <iostream>
using namespace std;

int main() {
	int kor, eng, math, tot;
	float avg;
	char grade;

	do {
		cout << "kor = ";
		cin >> kor;
	} while (kor < 0 || kor >100);

	do{
		cout << "eng = ";
		cin >> eng;
	} while (eng< 0 || eng>100);

	do{
		cout << "math = ";
		cin >> math;
	} while (math < 0 || math>100);

	tot = kor + eng + math;
	avg = tot / 3.0f;

	switch (int(avg)/10) {			//switch���� �������� ���� �� �����Ƿ� ����ȯ(ĳ����) ����
	case 10: case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'C'; break;
	case 6: grade = 'D'; break;
	default: grade = 'F';
	}

	cout << "tot = " << tot << " , avg = " << avg << endl;
	cout << "grade = " << grade << endl;

	return 0;
}

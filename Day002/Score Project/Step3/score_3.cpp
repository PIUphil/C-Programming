/*
  3�ܰ� : ������ switch~case������ ��ȯ�Ͽ� �����Ѵ�.
*/

#include <iostream>
using namespace std;

int main() {
	int kor, eng, math, tot;
	float avg;
	char grade;

	cout << "kor = ";
	cin >> kor;
	cout << "eng = ";
	cin >> eng;
	cout << "math = ";
	cin >> math;

	tot = kor + eng + math;
	avg = tot / 3.0f;

	/*if (avg >= 90) grade = 'A';
	else if (avg >= 80) grade = 'B';
	else if (avg >= 70) grade = 'C';
	else if (avg >= 60) grade = 'D';
	else grade = 'F';*/

	switch (int(avg)/10) {
	case 10: case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'C'; break;
	case 6: grade = 'D'; break;
	default: grade = 'F';
	}

	cout << "���� = " << tot << ", ��� = " << avg << endl;
	cout << "���� = " << grade << endl;

	return 0;
}
#include <iostream>
using namespace std;

int main() {
	char name[6] = "KOREA";			// �ʱⰪ�� �ٶ� �迭ũ�⸦ �����ص���
	//char* p = name;
	char job[8] = "STUDENT";
	//char* q = job;
	char address[8] = "DAEJEON";
	//char* w = address;

	char people[3][8] = {"KOREA", "STUDENT", "DAEJEON"};	// 2�����迭
	//char* aaa[3] = { p, q, w };
	char* aaa[3] = {name, job, address};					// 1�����迭

	/*cout << name << endl;
	cout << job << endl;
	cout << address << endl;*/

	for (int i = 0; i < 3; i++) cout << people[i][0];

	return 0;
}
/*
  Ű���带 ���� �Է��� ������ �ؽ�Ʈ ���Ϸ� �����ϴ� �۾�
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	char name[20], major[50];		//	�̸� �а� �й�
	int id;

	cout << "�̸� = ";
	cin >> name;
	cout << "�й� = ";
	cin >> id;
	cout << "�а� = ";
	cin >> major;

	// step1. ���� ��ü ����
	//ofstream fout;
	ofstream fout("D:/C++_Prograimming/source/student.txt");

	// step2. ���� ����
	// fout.open("D:\\C++_Prograimming\\source\\student.txt");
	// fout.open("D:/C++_Prograimming/source/student.txt");

	// step3. �۾�
	fout << name << endl;
	fout << id << endl;
	fout << major << endl;

	// step4. ���� �ݱ�
	fout.close();

	return 0;
}
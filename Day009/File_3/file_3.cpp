#include <iostream>
#include <fstream>
using namespace std;

int main() {
	// step1. ���� ��ü ����
	ifstream fin;

	// step2. ���� ����
	fin.open("D:/C++_Prograimming/source/student.txt"/*, ios::in*/);	// ios::in - ���� �б� (����)

	if (!fin) {
		cout << "���� ���� ����\n";
		return 0;
	}

	// step3. �۾�
	char name[20], major[50];
	int id;

	fin >> name;
	fin >> id;
	fin >> major;

	cout << "�̸� : " << name << endl;
	cout << "�й� : " << id << endl;
	cout << "�а� : " << major << endl;

	// step4. ���� �ݱ�
	fin.close();

	return 0;
}
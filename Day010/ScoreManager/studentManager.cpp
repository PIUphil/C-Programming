#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
#pragma warning(disable:4996)


// �л� ���������� �����ϱ� ���� Ŭ����
class Student {
private:
	int no;					// �й�
	char name[256];			// �̸�
	int kor, eng, math;		// ����,����,���� ����
	int total;				// ����
	double avg;				// ���
	char level;				// ����
	int grade;				// ���

public:
	Student(int no, char* name, int kor, int eng, int math);
	//Student(char* name);
	Student();
	void calculate();
	friend ostream& operator<<(ostream& os, const Student& stu);			// ������ �����ε�
	friend void PrintElement(Student stu);						// ����ʵ� �����ϱ� ���� ������
	bool operator==(const char* key) const;
	void getStudent();

	int getNo();
};

Student::Student(int no, char* name, int kor, int eng, int math)
	: no(no), kor(kor), eng(eng), math(math) {
	strcpy(this->name, name); 
	calculate();
}

//Student::Student(char* name) {
//	strcpy(this->name, name);
//	//calculate();
//}

Student::Student() {
	calculate();
}

int Student::getNo() { return no; }

void Student::calculate() {
	total = kor + eng + math;
	avg = total / 3.0;
	
	switch (int(avg) / 10) {
	case 10: 
	case 9: level = 'A'; break;
	case 8: level = 'B'; break;
	case 7: level = 'C'; break;
	case 6: level = 'D'; break;
	default : level = 'F';
	}

	grade = 1;				// ��ϵ� ��� �л��� ����� 1�� �ʱ�ȭ
}

ostream& operator<<(ostream& os, const Student& stu) {					// ������ �����ε�
	os << setw(4) << stu.no << setw(10) << stu.name
		<< setw(8) << stu.kor << setw(7) << stu.eng << setw(7) << stu.math
		<< setw(9) << stu.total << setw(9) << setprecision(2) << stu.avg			// setprecision(2) �Ҽ������� 2�ڸ����� ǥ��
		<< setw(7) << stu.level << setw(7) << stu.grade;

	return os;
}

bool Student::operator==(const char* key) const {
	return strcmp(name, key) == 0;
}

void Student::getStudent() {
	cout << "�й� = ";
	cin >> no;
	cout << "�̸� = ";
	cin >> name;
	cout << "�������� = ";
	cin >> kor;
	cout << "�������� = ";
	cin >> eng;
	cout << "�������� = ";
	cin >> math;

	// ���ۿ� �����ִ� ���� ���� �۾�
	fflush(stdin);
	calculate();
}

void PrintElement(Student stu) {
	cout << stu << endl;
}

/*
os << setw(4) << stu.no << setw(10) << stu.name
		<< setw(8) << stu.kor << setw(7) << stu.eng << setw(7) << stu.math
		<< setw(9) << stu.total << setw(9) << setprecision(2) << stu.avg
		<< setw(7) << stu.level << setw(7) << stu.grade;
*/

void title() {
	cout << "�й�    �̸�     ����     ����     ����     ����    ���    ����    ���" << endl;
	cout << "-------------------------------------------------------------------------" << endl;
}

//    [1] �Է�   [2] ����   [3] �˻�   [4] ���   [5] �ε�   [6] ����   [7] ����
// char* smenu[] = { "[1] �Է�", "[2] ����", "[3] �˻�", "[4] ���", "[5] �ε�", "[6] ����", "[7] ����" };

//char select_menu() {
//	char ch;
//	// int i;
//	cout << "\n****************************************************************************" << endl;
//	//for (i = 0; i < sizeof(smenu) / sizeof(smenu[0]); i++) {
//	//	cout << setw(10) << smenu[i];					// �޴� ���
//	//}
//	cout << "[1] �Է�,   [2] ����,   [3] �˻�,   [4] ���,   [5] �ε�,   [6] ����,   [7] ����";
//	cout << "\n****************************************************************************" << endl;
//
//	do {
//		cout << "�޴� = ";
//		cin.get(ch);
//		fflush(stdin);
//	} while (ch < '1' || ch>'7');
//
//	return ch;
//}


class StudentManager {
public:
	vector<Student> v;

	void Input() {
		cout << "\n == �л� ��� ==\n";
		Student temp;
		temp.getStudent();
		v.push_back(temp);
	}

	void Display() {
		cout << "\n\t == ��ü �л� ���� ��� == \n";
		title();
		for_each(v.begin(), v.end(), PrintElement);
	}

	void Delete() {
		//int id;
		char name;
		char searchName[256];


		cout << "\n == �л� ���� ==\n";
		//cout << "������ �й� = ";
		cout << "������ �̸� = ";
		//cin >> id;
		cin >> searchName;
		fflush(stdin);

		vector<Student>::iterator iter;
		//iter = find(v.begin(), v.end(), id);
		iter = find(v.begin(), v.end(), searchName);

		if (iter != v.end()) {
			cout << "[�������]" << endl;
			title();
			cout << *iter << endl;
			v.erase(iter);
			cout << "���������� ������ �Ϸ�Ǿ����ϴ�." << endl;
			Display();
		}
		else {
			//cout << id << " �й��� �������� �ʽ��ϴ�." << endl;
			cout << searchName << " �̸��� �������� �ʽ��ϴ�." << endl;
		}
	}

	void Search() {
		// int id;
		char searchName[256];

		cout << "\n == �л� �˻� ==\n";
		//cout << "�˻��� �й� = ";
		cout << "�˻��� �̸� = ";
		//cin >> id;
		cin >> searchName;
		fflush(stdin);

		vector<Student>::iterator iter;
		//iter = find(v.begin(), v.end(), id);
		iter = find(v.begin(), v.end(), searchName);

		if (iter != v.end()) {
			cout << "[�˻����]" << endl;
			title();
			cout << *iter << endl;
		}
		else {
			//cout << id << " �й��� �������� �ʽ��ϴ�." << endl;
			cout << searchName << " �̸��� �������� �ʽ��ϴ�." << endl;
		}
	}

	void delete_all() {
		for (int i = v.size() - 1; i > 0; i--) {
			v.erase(v.begin()+i);
		}
	}

	void Exit() {
		cout << "\n ���α׷��� �����մϴ�.\n";
		delete_all();
	}

	void Load() {
		delete_all();

		ifstream fin;

		fin.open("student.txt");
		
		Student temp;

		while (fin.read((char*)&temp, sizeof(temp))) {		// ���ڵ�(����) ������ �о��
			v.push_back(temp);
		}

		fin.close();
	}

	void Save() {
		ofstream fout;

		fout.open("student.txt");

		vector<Student>::iterator iter;

		for (iter = v.begin(); iter != v.end(); iter++) {
			Student temp = *iter;

			fout.write((char*)&temp, sizeof(temp));
		}

		fout.close();
	}	
};


int main() {
	StudentManager sm;

	sm.Load();

	//char ch;
	int ch;
		
	while (true) {
		//ch = select_menu();
		//    [1] �Է�   [2] ����   [3] �˻�   [4] ���   [5] �ε�   [6] ����   [7] ����
		cout << "\n\t ���� ���� ���α׷�\n";
		cout << "\n****************************************************************************" << endl;
		cout << "[1] �Է�,   [2] ����,   [3] �˻�,   [4] ���,   [5] �ε�,   [6] ����,   [7] ����";
		cout << "\n****************************************************************************" << endl;
		cin >> ch;

		switch (ch) {
		case 1: sm.Input(); break;
		case 2: sm.Delete(); break;
		case 3: sm.Search(); break;
		case 4: sm.Display(); break;
		case 5: sm.Load(); break;
		case 6: sm.Save(); break;
		case 7: sm.Exit(); return 0;
		}
	}
	return 0;
}
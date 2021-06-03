#include <iostream>
#include <cstring>
using namespace std;
#pragma warning (disable:4996)


class Person {
private:
	char* name;		// �����Ҵ�
	int age;

public:
	Person() {
		name = NULL;
		age = 0;
	}

	Person(char* curName, int curAge) {
		age = curAge;
		name = new char[strlen(curName) + 1];
		strcpy(name, curName);
	}

	void setPerson(char* curName, int curAge) {
		age = curAge;
		name = new char[strlen(curName) + 1];
		strcpy(name, curName);
	}

	void setName(char* curName) {
		name = curName;
	}

	char* getName() {
		return name;
	}

	void setAge(int age) {
		this->age = age;
	}

	int getAge() {
		return age;
	}

	void showPerson() {
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl << endl;
	}

	~Person() {
		delete[] name;					// �����Ҵ� ��ȯ
		cout << "�Ҹ��� ȣ��" << endl;
	}
};

int main() {
	Person* parr[3];
	char curName[100];
	int age;

	for (int i = 0; i < 3; i++) {
		cout << "�̸� = ";
		cin >> curName;
		cout << "���� = ";
		cin >> age;

		parr[i] = new Person(curName, age);
	}

	for (int i = 0; i < 3; i++) {
		parr[i]->showPerson();
	}

	// �����Ҵ� ��ȯ
	for (int i = 0; i < 3; i++) {
		delete parr[i];
	}
	return 0;
}

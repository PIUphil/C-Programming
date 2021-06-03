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
		name = new char[strlen(curName)+1];
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
	Person arr[3];			// ��ü �迭
	char curName[100];		// ������ 99��, �ѱ� 49��
	char* str;
	int age;
	int len;

	for (int i = 0; i < 3; i++) {
		cout << "�̸� = ";
		cin >> curName;
		cout << "���� = ";
		cin >> age;

		len = strlen(curName) + 1;
		str = new char[len];
		strcpy(str, curName);

		arr[i].setPerson(str, age);
	}

	for (int i = 0; i < 3; i++) {
		arr[i].showPerson();
	}
	return 0;
}


/*
int main() {
	Person arr[3];		// ��ü �迭
	// Person* ptr[100];		// ��ü �����͹迭

	//Person *p, *q, *r;			// �����ͺ���
	Person* ptr[3];
	//p = arr;			// &arr[0]
	/*p = &arr[0];
	q = &arr[1];
	r = &arr[2];*/

/*
	for (int i = 0; i < 3; i++) {
		// arr[i].showPerson();
		/*p->showPerson();
		p++;*/
/*		ptr[i]->showPerson();
	}

	return 0;
}
*/
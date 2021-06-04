/*
  ����� ���� ����
  - ������� Ŭ������ ���踦 �����ϱ� ���ؼ��� ������ �ʿ�
  - ����� �⺻���� IS-A ������ ���� (~�� ����.)
  - ��� : �Ļ�Ŭ������ ���Ŭ������ ��� ����� ����
	��ȭ�� => ������, ����, ������ ...
	���� => �������, �޵γ���, �質��, ������ ...			->  IS-A
*/

#include <iostream>
#include <string>
using namespace std;

class Computer {
	string owner;

public:
	Computer(string name): owner(name) {}

	void calculate() {
		cout << "��û ������ ����մϴ�.\n";
	}
};

// TableNote < NoteBook < Computer

class NoteBook : public Computer {
	int battery;

public:
	NoteBook(string name, int initChag)			// init_Charge
		: Computer(name), battery(initChag) {}

	void Charging() { battery += 5; }
	void UseBattery() { battery -= 1; }
	int getBatteryInfo() {
		return battery;
	}
	void MovindCal() {
		if (getBatteryInfo() < 1) {
			cout << "�����ʿ�\n";
			return;
		}
		cout << "�̵��ϸ鼭 ���\n";
		calculate();
		UseBattery();
	}
};

class TableNote : public NoteBook {
	string penNo;

public:
	TableNote(string name, int initChag, string pen)
		: NoteBook(name, initChag), penNo(pen) {}

	void write(string p) {
		if (getBatteryInfo() < 1) {
			cout << "�����ʿ�\n";
			return;
		}

		if (penNo.compare(p) != 0) {
			cout << "��ϵ� ���� �ƴմϴ�.\n";
			return;
		}

		cout << "���� �̿��Ͽ� ���� ���ϴ�.\n";
		UseBattery();
	}
};


int main() {

	return 0;
}
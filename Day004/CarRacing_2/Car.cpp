#include <iostream>
//#include <cstring>		// string.h  : strcpy
#include <string>
using namespace std;
#pragma warning(disable:4996)

#include "Car.h"

enum {
	ID_LEN=20, MAX_SPEED=200, FUEL_STEP=2, ACC_STEP=10, BRK_STEP=10
};

Car::Car(string id, int fuel) {
	gamerID = id;
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car::init(string id, int fuel) {		// ����ʵ带 �ʱ�ȭ�ϴ� �޼���
	//strcpy(gamerID, id);
	gamerID = id;
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car::showCar() {			// �ڵ����� ���� ���¸� ����ϴ� �޼���
	cout << "������ID : " << gamerID << endl;
	cout << "���� ���ᷮ : " << fuelGauge << endl;
	cout << "���� �ӵ� : " << curSpeed << endl << endl;
}

void Car::Accel() {				// �ڵ����� �Ǽ������ ��� ������ �ϴ� �޼���
	if (fuelGauge <= 0) {
		cout << "���ᰡ �����մϴ�." << endl << endl;
		return;
	}
	else {
		fuelGauge -= FUEL_STEP;

		if (curSpeed + ACC_STEP > MAX_SPEED)
			curSpeed = MAX_SPEED;
		else
			curSpeed += ACC_STEP;
	}
}

void Car::Break() {				// �ڵ����� �극��ũ����� ��� ������ �ϴ� �޼���
	if (curSpeed - BRK_STEP <= 0)
		curSpeed = 0;
	else
		curSpeed -= BRK_STEP;
}
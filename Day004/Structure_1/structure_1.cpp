#include <iostream>
using namespace std;

#define ID_LEN 20
#define MAX_SPEED 200
#define FUEL_STEP 2
#define ACC_STEP 10		// accel
#define BRK_STEP 10		// break

struct Car {
	char gamerID[ID_LEN];
	int fuelGauge;
	int curSpeed;
};

void showCar(Car &car) {			// �ڵ����� ���� ���¸� ����ϴ� �޼���
	cout << "������ID : " << car.gamerID << endl;
	cout << "���� ���ᷮ : " << car.fuelGauge << endl;
	cout << "���� �ӵ� : " << car.curSpeed << endl << endl;
}

void Accel(Car &car) {				// �ڵ����� �Ǽ������ ��� ������ �ϴ� �޼���
	if (car.fuelGauge <= 0) {
		cout << "���ᰡ �����մϴ�." << endl << endl;
		return;
	}
	else {
		car.fuelGauge -= FUEL_STEP;

		if (car.curSpeed + ACC_STEP > MAX_SPEED)
			car.curSpeed = MAX_SPEED;
		else
			car.curSpeed += ACC_STEP;
	}
}

void Break(Car &car) {				// �ڵ����� �극��ũ����� ��� ������ �ϴ� �޼���
	if (car.curSpeed - BRK_STEP <= 0)
		car.curSpeed = 0;
	else
		car.curSpeed -= BRK_STEP;
}

int main() {
	Car car = { "aaa", 10, 0 };
	showCar(car);

	// �ӵ�����
	Accel(car); // ���� - 8, �ӵ� - 10
	showCar(car);

	/*
	while (true) {
		cout << "�����Է� : ";
		cin >> 
		switch ()
	

	}*/
	return 0;
}
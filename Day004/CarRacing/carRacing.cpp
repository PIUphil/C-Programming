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

	void showCar() {			// �ڵ����� ���� ���¸� ����ϴ� �޼���
		cout << "������ID : " << gamerID << endl;
		cout << "���� ���ᷮ : " << fuelGauge << endl;
		cout << "���� �ӵ� : " << curSpeed << endl << endl;
	}

	void Accel() {				// �ڵ����� �Ǽ������ ��� ������ �ϴ� �޼���
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

	void Break() {				// �ڵ����� �극��ũ����� ��� ������ �ϴ� �޼���
		if (curSpeed - BRK_STEP <= 0)
			curSpeed = 0;
		else
			curSpeed -= BRK_STEP;
	}
};

int main() {
	Car car = { "aaa", 10, 0 };
	car.showCar();

	// �ӵ�����
	car.Accel(); // ���� - 8, �ӵ� - 10
	car.showCar();

	return 0;
}

// ����ü(struct)�ȿ� �Լ��� ���� �� �ִ�
#include <iostream>
//#include <cstring>		// string.h  : strcpy
#include <string>
using namespace std;
#pragma warning(disable:4996)

#include "Car.h"


int main() {
	Car car = { "aaa", 10 };
	//car.init("aaa", 10);
	car.showCar();

	// �ӵ�����
	car.Accel(); // ���� - 8, �ӵ� - 10
	car.showCar();

	return 0;
}
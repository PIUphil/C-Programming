#pragma once
#include <iostream>
#include <string>
using namespace std;

class Car {
	//char gamerID[ID_LEN];
	string gamerID;
	int fuelGauge;
	int curSpeed;

public:
	Car(string id, int fuel);
	void init(string id, int fuel); // ����ʵ带 �ʱ�ȭ�ϴ� �޼���
	void showCar();				// �ڵ����� ���� ���¸� ����ϴ� �޼���
	void Accel();				// �ڵ����� �Ǽ������ ��� ������ �ϴ� �޼���
	void Break();				// �ڵ����� �극��ũ����� ��� ������ �ϴ� �޼���
};
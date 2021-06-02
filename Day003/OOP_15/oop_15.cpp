/*
  ��������� ��������   // �������� - ���� ���� // �������� - �������� ����
  a = [1, 2, 3, 4, 5]
  b = a   # ��������
*/

// ���� �����ڿ� ��ü ����

#include <iostream>
using namespace std;

class Circle {
	int radius;

public:
	Circle(Circle& c);				// ���������
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	double getArea() { return radius * radius * 3.14; }
	void setRadius(int radius) { this->radius = radius; }
	int getRadius() { return radius; }
};

Circle::Circle(Circle& c) {
	this->radius = c.radius;
}

int main() {
	Circle src(30);
	Circle dest(src);				// ��������� ȣ��

	cout << "������ ���� = " << src.getArea() << endl;
	cout << "�纻�� ���� = " << dest.getArea() << endl;
}
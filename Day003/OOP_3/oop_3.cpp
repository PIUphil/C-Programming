#include <iostream>
using namespace std;

class Circle {
	int radius;

public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea();
};

double Circle::getArea() {
	return radius * radius * 3.14;
}


int main() {
	//Circle cArray[3];	// �⺻�����ڿ� ���� �迭 ����
	Circle cArray[3] = {Circle(), Circle(5), Circle(10)};	// �迭�� �ʱ�ȭ�� ��, �����ڰ� ���� ��

	for (int i = 0; i < 3; i++) {
		cout << "Circle" << i << "�� ���� = " << cArray[i].getArea() << endl;
	}
	return 0;
}
/*
  ���� �𵨸��ϴ� �۾�
  ����δ� �������� ��� ���� radius�� ���� ������ ����Ͽ�
  �ǵ����ִ� �޼��� getArea()�� ����
*/
// Ŭ���� ���Ǻ�, �����, �����

#include <iostream>
#include <string>
using namespace std;
#define PI 3.14

// Ŭ���� �����(class declaration)
class Circle {
public:
	// ��� �ʵ�
	int radius;

public:
	// ����޼���
	double getArea();
};


// Ŭ���� ������(class implementation)
double Circle::getArea() {		// Ŭ������ ������������ ��ȯ��
	return radius * radius * PI;
}


int main() {
	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut��ü ���� = " << area << endl;

	Circle pizza;
	pizza.radius = 30;
	area = pizza.getArea();
	cout << "pizza��ü ���� = " << area << endl;


	return 0;
}
/*
  �簢��(Rectangle) ��ü�� �����Ͻÿ�.
  ����δ� �ʺ�(width)�� ����(height)�� �ʵ�� ������,
  �簢���� ������ ����Ͽ� �ǵ����ִ� �޼��� getArea()�� ������ ��.
  ��, Ŭ������ ����ο� �����η� �и��Ͽ� ������ ��.
*/

#include <iostream>
using namespace std;

class Rectangle {				// Ŭ���� �����

public:
	int width, height;			// ����ʵ�

public:
	int getArea();				// ����޼���
};

int Rectangle::getArea() {		// Ŭ���� ������
	return width * height;
}


int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;

	// int area = rect.getArea();
	cout << "�簢�� ���� = " << rect.getArea() << endl;

	return 0;
}
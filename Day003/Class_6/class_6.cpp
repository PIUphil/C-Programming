/*
  �־��� main()�� �۵��ϵ��� RectŬ������ �����Ͻÿ�.
  Rect Ŭ������ width, height�� �� ��� ������ 3���� ������,
  �׸��� isSquare()�� �����ϵ��� ����Ͻÿ�.
*/

#include <iostream>
using namespace std;

// Ŭ���� ����
class Rect {
public:
	int width, height;

public:
	Rect() {			// �⺻������ - ����ʵ带 �ʱ�ȭ�����ִ� ����
		width = height = 1;
	}

	Rect(int n) {
		width = height = n;
	}
	Rect(int w, int h) {
		width = w;
		height = h;
	}

	bool isSquare() {
		if (width == height)
			return true;
		else
			return false;
	}
};

// main
int main() {

	Rect r1;
	Rect r2(3, 5);
	Rect r3(3);

	if (r1.isSquare())
		cout << "r1�� ���簢���̴�." << endl;
	if (r2.isSquare())
		cout << "r2�� ���簢���̴�." << endl;
	if (r3.isSquare())
		cout << "r3�� ���簢���̴�." << endl;
	
	return 0;
}

/*
  ��°��
  r1�� ���簢���̴�.
  r3�� ���簢���̴�.
*/
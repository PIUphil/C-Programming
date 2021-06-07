/*
  ������ �����ε�(Operator overloading)
  - �����ε� : ������ �̸��� ���� �޼��带 ���� �� ����� ���
			   ��, �Ű������� ������ �ٸ��ų� ����Ÿ���� �޶�� �Ѵ�.
  - ������ �����ε� : �ϳ��� �����ڸ� ���� �ǹ̷� ����� �� �ֵ��� ��.
  - ������ �Լ�(operator function)�� ����Ѵ�.
	����
	operator �����ε��� ������(�Ű�����)
*/

#include <iostream>
using namespace std;

class Point {
private:
	int xpos;
	int ypos;

public:
	//Point() {		// default ������ - ����ʵ带 �ʱ�ȭ
	//	xpos = 0;
	//	ypos = 0;
	//}

	
	Point(int xpos = 0, int ypos = 0) //{		// default parameter
		: xpos(xpos), ypos(ypos) {}
	//	this->xpos = xpos;
	//	this->ypos = ypos;
	//}

	/*Point(int len) {
		xpos = ypos = len;
	}*/

	void showPosition() const {
		cout << "��(x, y) = (" << xpos << ", " << ypos << ")\n";
	}

	Point operator+(const Point& ref) {
		Point pos(xpos + ref.xpos, ypos + ref.ypos);
		return pos;
	}

	Point operator-(const Point& ref) {
		return Point((xpos - ref.xpos, ypos - ref.ypos));
	}
};

int main() {
	Point pos1(3, 4);
	Point pos2(10, 20);

	Point pos3 = pos1 + pos2;		
	//Point pos3 = pos1.operator+(pos2);
	
	pos1.showPosition();
	pos2.showPosition();
	pos3.showPosition();

	return 0;
}

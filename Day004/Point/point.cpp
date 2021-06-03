#include <iostream>
using namespace std;

class Point {
	int xpos;
	int ypos;

public:
	/*Point() {			// default ������
		xpos = 0;
		ypos = 0;
	}*/
	//Point() : xpos(0), ypos(0) {}		// �ݷ��ʱ�ȭ

	/*Point(int x, int y) {
		xpos = x;
		ypos = y;
	}*/
	//Point(int x, int y) : xpos(x), ypos(y) {}

	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}		// ����Ʈ�Ķ����
	

	void disp() {
		cout << "��(x, y) = (" << xpos << ", " << ypos << ")" << endl;
	}

	void init(int x, int y) {
		xpos = x;
		ypos = y;
	}


	void setX(int x) {
		xpos = x; 
	}
	int getX() {
		return xpos;
	}

	void setY(int y) {
		ypos = y; 
	}
	int getY() {
		return ypos;
	}
};

int main() {
	/*Point ap;
	Point bp(3, 5);
	Point cp(10, 20);*/

	// ��ü�迭 (p[0], p[1], p[2])
	Point p[3] = { Point(), Point(3, 5), Point(10, 20) };

	/*ap.setX(1);
	ap.setY(1);*/
	// ap.init(1, 1);

	/*cout << "x��ǩ�� = " << ap.getX() << endl;
	cout << "y��ǩ�� = " << ap.getY() << endl;*/
	/*ap.disp();
	bp.disp();
	cp.disp();*/

	for (int i = 0; i < 3; i++) {
		p[i].disp();
	}

	return 0;
}
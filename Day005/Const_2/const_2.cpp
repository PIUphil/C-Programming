#include <iostream>
using namespace std;

class SoSimple {
	int num;

public:
	SoSimple(int n) : num(n) {}

	SoSimple& AddNum(int n) {
		num += n;
		return *this;			// ���� �ּҸ� ����
	}

	void showData() const {		// const�� ������� ��ü�� ���ٰ���..?( �ƴϾ �ǳ�,,?)
		cout << "num = " << num << endl;
	}
};

int main() {
	const SoSimple obj(7);
	// obj.AddNum(20);			// �� ���� �Ұ�
	obj.showData();

	return 0;
}
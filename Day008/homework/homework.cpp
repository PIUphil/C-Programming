/*����ī�� �ܾ��� �����ϴ� ���α׷�
����ī�� �ʱ� �ݾ��� 20000���̴�.

������ ���� ����� �ƴ� �Ÿ� ��Ģ�� ���� ���� �� �����ȴ�.

�⺻ ����� 40km�� 720��, �߰������ 41km���� 8km�� 80��
���α׷��� �� �̵��Ÿ��� �Է��Ͽ� ī���� ���� �ܾ��� ����Ѵ�.

�ּ��̵��Ÿ��� 4km, �ִ� �̵��Ÿ��� 178km�̴�.

�Է°��� ���� �־��� ������ ����� ���� �ܾ��� ����ϰ�,
���α׷��� �����Ѵ�.*/

#include <iostream>
using namespace std;


class Trfcard {
	static int money;

public:
	Trfcard();
	int getMoney();
	void setMoney(int fare);
};

Trfcard::Trfcard() { money = 20000; }
int Trfcard::getMoney() { return money; }
void Trfcard::setMoney(int fare) { money -= fare; }

int Trfcard::money = 0;


int fareCalc() {
	int distance;
	cout << "�̵��� �Ÿ�(4~178) = ";
	cin >> distance;

	if (distance < 4 || distance >178)
		return 0;

	if(distance <= 40)
		return 720;
	else
		return 720 + ((distance - 40) / 8) * 80;
}


int main() {
	Trfcard card;

	while (true) {
		if (card.getMoney() < 720) {
			cout << "�ܾ��� �����մϴ�." << endl;
			return 0;
		}

		int c = fareCalc();

		if (c == 0) {
			cout << "ī�� �ܿ� �ݾ��� " << card.getMoney() << "�� �Դϴ�." << endl;
			return 0;
		}
		else {
			card.setMoney(c);
			if (card.getMoney() < 0) {
				cout << "�ܾ��� �����Ͽ� ���̻� �� �� �����ϴ�." << endl;
				return 0;
			}
			cout << "ī�� �ܿ� �ݾ��� " << card.getMoney() << "�� �Դϴ�." << endl << endl;
		}
	}
	return 0;
}
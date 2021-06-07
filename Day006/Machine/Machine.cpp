/*
  Ŀ���ڵ��Ǹű� ���α׷��� �����Ͻÿ�.
  Entity Ŭ������ Handler Ŭ������ �����Ͽ� ����Ͻÿ�.
  �־��� ���ǰ� ����� ���Ŀ� �°� �����Ͻÿ�.

  <�Է� �� �������>
  == Coffee Machine ==
  1. ����������
  2. �Ƹ޸�ī��
  3. ����Ŀ��
  4. ����Ŀ��
  5. �������
  6. �ܷ�Ȯ��
  ====================
  ���� = 


  <ó������>
  1. Ŀ���ڵ��Ǹű� Ŭ���� CoffeeMachine�� ����ʵ�� Ŀ��, ��, ����, ����, ���� ������ �ִ�.
  2. �� ���� �⺻������ 3���� ����ִ�.
  3. ��������� �� ����� �������� ����ڰ� ���� �Է��ϵ��� �����Ѵ�.
  4. ���������Ҵ� Ŀ��1�� ��1�� �Ҹ��Ѵ�.
  5. �Ƹ޸�ī��� Ŀ��1�� ��2�� �Ҹ��Ѵ�.
  6. ����Ŀ�Ǵ� Ŀ��1�� ��2�� ����1�� �Ҹ��Ѵ�.
  7. ����Ŀ�Ǵ� Ŀ��1�� ��2�� ����1�� �Ҹ��Ѵ�.
  8. ��� Ŀ�Ǵ� ��1�� �Ҹ��Ѵ�.
*/

#include <iostream>
using namespace std;


class Container {
	int size;			// ���� ���差. �ִ� 10�� ���尡��

public:
	Container() {
		size = 10;
	}

	void fill();		// ��Ḧ �ڵ����� ä��� �޼���
	void consume();		// 1�Ҹ�
	int getSize();		// ���� �뷮 ����
};

void Container::fill() {
	size = 10;
}

void Container::consume() {
	size--;
}

int Container::getSize() {
	return size;
}


/*
  Ŀ�����Ǳ⸦ ǥ���ϴ� Ŭ����
*/

class CoffeeMachine {
	Container box[5];		// Ŀ��[0], ����[1], ����[2], ��[3], ��[4]

public:
	void fill();				// 5���� �뿡 ��� 10���� ����
	void selectEspresso();		// ���������Ҹ� ����(Ŀ��1, ��1, ��1)
	void selectAmericano();		// �Ƹ޸�ī�븦 ����(Ŀ��1, ��2, ��1)
	void selectSugarCoffee();	// ����Ŀ�Ǹ� ����(Ŀ��1, ��2, ��1, ����1)
	void selectPreamCoffee();	// ����Ŀ�Ǹ� ����(Ŀ��1, ��2, ��1, ����1)
	//void fill();			// ���� ����
	void show();			// �ܷ�Ȯ�� ����

	void run();			// �ӽ� �۵�
};


void CoffeeMachine::fill() {
	for(int i = 0; i < 5; i++)
		box[i].fill();

	show();
}

void CoffeeMachine::selectEspresso() {
	// Ŀ��[0], ����[1], ����[2], ��[3], ��[4] 
	for (int i = 0; i < 5; i++) {
		if (box[i].getSize() == 0) {
			cout << "��ᰡ �����մϴ�." << endl <<endl;
			run();
		}
	}
	
	box[0].consume();
	box[3].consume();
	box[4].consume();
	cout << "���������Ұ� ���Խ��ϴ�.\n" << endl;
}

void CoffeeMachine::selectAmericano() {
	// Ŀ��[0], ����[1], ����[2], ��[3], ��[4] 
	for (int i = 0; i < 5; i++) {
		if (box[i].getSize() == 0) {
			cout << "��ᰡ �����մϴ�." << endl << endl;
			run();
		}
	}

	box[0].consume();
	box[3].consume();
	box[4].consume(); box[4].consume();
	cout << "�Ƹ޸�ī�밡 ���Խ��ϴ�.\n" << endl;
}

void CoffeeMachine::selectSugarCoffee() {
	// Ŀ��[0], ����[1], ����[2], ��[3], ��[4] 
	for (int i = 0; i < 5; i++) {
		if (box[i].getSize() == 0) {
			cout << "��ᰡ �����մϴ�." << endl << endl;
			run();
		}
	}

	box[0].consume();
	box[1].consume();
	box[3].consume();
	box[4].consume(); box[4].consume();
	cout << "����Ŀ�ǰ� ���Խ��ϴ�.\n" << endl;
}

void CoffeeMachine::selectPreamCoffee() {
	// Ŀ��[0], ����[1], ����[2], ��[3], ��[4] 
	for (int i = 0; i < 5; i++) {
		if (box[i].getSize() == 0) {
			cout << "��ᰡ �����մϴ�." << endl << endl;
			run();
		}
	}

	box[0].consume();
	box[2].consume();
	box[3].consume();
	box[4].consume(); box[4].consume();
	cout << "����Ŀ�ǰ� ���Խ��ϴ�.\n" << endl;
}

void CoffeeMachine::show() {
	cout << "Ŀ�� �ܷ� : " << box[0].getSize() << endl;
	cout << "���� �ܷ� : " << box[1].getSize() << endl;
	cout << "���� �ܷ� : " << box[2].getSize() << endl;
	cout << "��   �ܷ� : " << box[3].getSize() << endl;
	cout << "��   �ܷ� : " << box[4].getSize() << endl;
}


enum { Espresso = 1, Americano, SugarCoffee, PreamCoffee, Fill, Show };

void CoffeeMachine::run() {
	int menu;
	bool check = true;

	while (check) {
		cout << "== Coffee Machine ==\n";
		cout << "1. ����������\n";
		cout << "2. �Ƹ޸�ī��\n";
		cout << "3. ����Ŀ��\n";
		cout << "4. ����Ŀ��\n";
		cout << "5. �������\n";
		cout << "6. �ܷ�Ȯ��\n";
		cout << "====================\n";
		cout << "���� = ";
		cin >> menu;

		switch (menu) {
		case Espresso: selectEspresso(); break;
		case Americano: selectAmericano(); break;
		case SugarCoffee: selectSugarCoffee(); break;
		case PreamCoffee: selectPreamCoffee(); break;
		case Fill: fill(); break;
		case Show: show(); break;
		default: break;
		}
	}
}


int main() {
	CoffeeMachine* coffee = new CoffeeMachine();
	coffee->run();

	delete coffee;
	return 0;
}

// Handler Class = CoffeeMachine
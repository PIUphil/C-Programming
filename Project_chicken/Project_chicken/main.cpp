#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
using namespace std;


int chicken = 20, radish= 20;
int coke = 20, beer = 20;
float oil = 20;

// ġŲ----------------------------------------------------------------
class Chicken {				// �Ķ��̵�ġŲ - �ֻ���Ŭ����
public:
	Chicken();
	void fry();
	virtual int getSeasoning() { return 0; }
	virtual void setSeasoning(int ss) {}
	virtual int getSoysource() { return 0; }
	virtual void setSoysource(int soy) {}
	virtual int getGarlic() { return 0; }
	virtual void setGarlic(int gl) {}
};

Chicken::Chicken() {}

void Chicken::fry() { chicken--; radish--; oil -= 0.1; }


class SeasoningChicken : public Chicken {	// ��� ġŲ
	static int seasoning;

public:
	SeasoningChicken();
	void fry();
	int getSeasoning();
	void setSeasoning(int ss);
};

SeasoningChicken::SeasoningChicken() { seasoning = 20; }

void SeasoningChicken::fry() {chicken--; radish--; seasoning--; oil -= 0.1;}

int SeasoningChicken::getSeasoning() { return seasoning; }

void SeasoningChicken::setSeasoning(int ss) { seasoning += ss; }

int SeasoningChicken::seasoning = 20;


class SoyChicken : public Chicken {			// ���� ġŲ
	static int soysource;

public:
	SoyChicken();
	void fry();
	int getSoysource();
	void setSoysource(int soy);
};

SoyChicken::SoyChicken() { soysource = 20; }

void SoyChicken::fry() { chicken--; radish--; soysource--; oil -= 0.1; }

int SoyChicken::getSoysource() { return soysource; }

void SoyChicken::setSoysource(int soy) { soysource += soy; }

int SoyChicken::soysource = 20;


class GarlicChicken : public Chicken {		// ���� ġŲ
	static int garlic;

public:
	GarlicChicken();
	void fry();
	int getGarlic();
	void setGarlic(int gl);
};

GarlicChicken::GarlicChicken() { garlic = 20; }

void GarlicChicken::fry() { chicken--; radish--; garlic--; oil -= 0.1; }

int GarlicChicken::getGarlic() { return garlic; }

void GarlicChicken::setGarlic(int gl) { garlic += gl; }

int GarlicChicken::garlic = 20;


void Coke() { coke--; }
void Beer() { beer--; }

// ----------------------------------------------------------------

// ChickenHandler();

// ----------------------------------------------------------------

int run() {
	int ch;

	cout << "========== ġŲ �ֹ� ���α׷� ==========" << endl
		<< "1. �޴� ����		5. ��� Ȯ��" << endl
		<< "2. ��� �Ϸ�		6. ��� ����" << endl
		<< "3. �ֹ� ���		7. �ǸŽ��� Ȯ��" << endl
		<< "4. �ֹ� Ȯ��		8. ���α׷� ����" << endl
		<< "========================================" << endl
		<< "���� = ";
	cin >> ch;

	return ch;
}

void showMenu() {
	cout<< "\n ==== �޴����� ====" << endl
		<< "1. �Ķ��̵� (15,000)" << endl
		<< "2. ���ġŲ (16,000)" << endl
		<< "3. ����ġŲ (17,000)" << endl
		<< "4. ����ġŲ (17,000)" << endl
		<< "5. �ݶ�      (1,000)" << endl
		<< "6. ����      (3,000)" << endl
		<< "7. ���� ����" << endl
		<< "====================" << endl;
}

string totalChoice(vector<int> choice) {			// �� �޴� (Map; key-�޴�, value-����)

	vector<string> list = { "", "�Ķ��̵�", "���ġŲ", "����ġŲ", "����ġŲ", "�ݶ�", "����" };
	map<string, int> mapList;

	for (int i = 0; i < choice.size(); i++)
		if (mapList.find(list[choice[i]]) == mapList.end())
			mapList[list[choice[i]]] = 1;
		else mapList[list[choice[i]]]++;

	string choiceStr = "[";

	map<string, int>::iterator iter;
	for (iter = mapList.begin(); iter != mapList.end(); iter++) {
		choiceStr += iter->first + "(" + to_string(iter->second) + "), ";
	}
	choiceStr = choiceStr.substr(0, choiceStr.length() - 2) + "]";

	return choiceStr;
}


int totalPrice(vector<int> choice) {			// �� �ֹ��ݾ�
	int tot = 0;

	vector<int> price = {0, 15000, 16000, 17000, 17000, 1000, 3000 };

	for (int i = 0; i < choice.size(); i++)
		tot += price[choice[i]];

	return tot;
}

void cook(vector<int> choice);
void orderList(string ttc, string ttp, string addr, string callNum);


void menu() {										// �޴� ����
	int ch_menu;
	vector<int> choice;

	while (true) {
		showMenu();
		cout << "���� = ";
		cin >> ch_menu;
		
		if (ch_menu ==7) break;
		choice.push_back(ch_menu);
	}

	cout << "\n<�ֹ� Ȯ��>" << endl;

	string ttc = totalChoice(choice);
	int ttp = totalPrice(choice);
	cout << ttc << "\t = " << ttp << "��" << endl;

	char chk;
	cout << "�ֹ������� �½��ϱ�? (y/n) = ";
	cin >> chk;
	if (chk == 'n'|| chk=='N') {
		cout << "�ֹ��� ��ҵǾ����ϴ�." << endl << endl;
		return;
	}

	int deliv;
	string addr, callNum;
	cout << "������(1.Ȧ 2.�ٹ� 3.�հŸ�) = ";
	cin >> deliv;

	if (deliv == 1) { addr = "Ȧ"; callNum = ""; }
	else if (deliv != 1) {
		cout << "���ּ� = ";
		cin >> addr;
		/*getline(cin, addr);
		cin.ignore();*/
		cout << "����ó = ";
		cin >> callNum;
		/*getline(cin, callNum);
		cin.ignore();*/
	}
	
	cout << "\n<�ֹ� Ȯ��>" << endl;
	cout << ttc << " = " << ttp << "��" << endl;

	if (deliv == 1) {}
	else if (deliv == 2) {
		ttp += 1000;
		cout << "+ ��޺� 1,000��\t = " << ttp << "��" << endl;
	}
	else if (deliv == 3) {
		ttp += 2000;
		cout << "+ ��޺� 2,000��\t = " << ttp << "��" << endl;
	}
	else cout << "�߸��� �����Դϴ�"<<endl;

	cout << "\t\t\t �����մϴ�" << endl << endl;

	cook(choice);
	orderList(ttc, to_string(ttp), addr, callNum);
}

void cook(vector<int> choice) {							// �丮
	Chicken chik;
	SeasoningChicken ssc;
	SoyChicken syc;
	GarlicChicken glc;

	for (int i = 0; i < choice.size(); i++) {
		switch (choice[i]) {
		case 1: chik.fry(); break;
		case 2: ssc.fry(); break;
		case 3: syc.fry(); break;
		case 4: glc.fry(); break;
		case 5: Coke(); break;
		case 6: Beer(); break;
		default: cout << "�丮 ����" << endl;
		}
	}
}

vector<vector<string>> orderV = {};
void orderList(string ttc, string ttp, string addr, string callNum) {		// �ֹ� ����
	orderV.push_back({ttc, ttp, addr, callNum});		// 2��������
}

vector<vector<string>> completeV = {};
void completeList(string ttc, string ttp, string addr, string callNum) {		// �Ϸ� ����
	completeV.push_back({ ttc, ttp, addr, callNum });		// 2��������
}

void complete() {											// ��� �Ϸ�
	int del;

	cout << "\n============== ��� �Ϸ� ==============" << endl;
	for (int i = 0; i < orderV.size(); i++)
		cout << i + 1 << ". " << orderV[i][0] << " " << orderV[i][3] << endl;
	cout << "0. ���"<< endl;
	cout << "=======================================" << endl;
	cout << "���� = ";
	cin >> del;
	
	if (del == 0) return;
	completeList(orderV[del-1][0], orderV[del - 1][1], orderV[del - 1][2], orderV[del - 1][3]);
	orderV.erase(orderV.begin() + del - 1);
}

void cancel() {													// �ֹ� ���
	int del;

	cout << "\n============== �ֹ� ��� ==============" << endl;
	for (int i = 0; i < orderV.size(); i++)
		cout << i + 1 << ". " << orderV[i][0] << " " << orderV[i][3] << endl;
	cout << "0. ���" << endl;
	cout << "=======================================" << endl;
	cout << "���� = ";
	cin >> del;

	if (del == 0) return;
	orderV.erase(orderV.begin() + del - 1);
}


void confirm() {												// �ֹ�Ȯ��
	cout << "\n============== �ֹ� Ȯ�� ==============" << endl;
	for (int i = 0; i < orderV.size(); i++) {
		cout << i + 1 << ". " << orderV[i][0] << " " << orderV[i][3] << endl;
		cout << "   " << orderV[i][2] << endl;
	}
	cout << "=======================================" << endl << endl;
}

void amount() {											// ��� Ȯ��
	Chicken chik;
	/*SeasoningChicken ssc;
	SoyChicken syc;
	GarlicChicken glc;*/

	cout << "\n================= ���� ��� =================" << endl
		<< "ġŲ = " << chicken << "  ġŲ��= " << radish << "   �ݶ� = " << coke << "   ���� = " << beer << endl
		<< "��� = " << chik.getSeasoning() << "   ���� = " << chik.getSoysource() << "   ���� = "
		<< chik.getGarlic() << "   �⸧ = " << oil << endl
		<< "=============================================" << endl << endl;
}


void fix() {											// �������
	SeasoningChicken ssc;
	GarlicChicken glc;
	SoyChicken syc;

	while (true) {
		cout << "\n================= ��� ���� =================" << endl
			<< "1. ġŲ = " << chicken << "\t5. ��� = " << ssc.getSeasoning() << "\t9. ����" << endl
			<< "2. ġŲ�� = " << radish << "\t6. ���� = " << syc.getSoysource() << endl
			<< "3. �ݶ� = " << coke << "\t7. ���� = " << glc.getGarlic() << endl
			<< "4. ���� = " << beer << "\t8. �⸧ = " << oil << endl
			<< "=============================================" << endl
			<< "���� = ";

		int ch, a;
		cin >> ch;
		if (ch == 9) break;

		cout << "���� = ";
		cin >> a;

		switch (ch) {
		case 1: chicken += a; break;
		case 2: radish += a; break;
		case 3: coke += a; break;
		case 4: beer += a; break;
		case 5: ssc.setSeasoning(a); break;
		case 6: syc.setSoysource(a); break;
		case 7: glc.setGarlic(a); break;
		case 8: oil += a; break;
		default: cout << "�߸��� �����Դϴ�" << endl;
		}
	}
}

void income() {													// �Ǹ� ����
	int totalEarn = 0;
	cout << "\n============= �Ǹ� ���� =============" << endl
		<< "   �Ǹ�			  �ݾ�" << endl;
	for (int i = 0; i < completeV.size(); i++) {
		cout << i + 1 << ". " << completeV[i][0] << "  " << completeV[i][1] << "��" << endl;
		totalEarn += stoi(completeV[i][1]);
	}
	cout << "-------------------------------------" << endl;
	cout << "\t\t\t�� " << totalEarn << "��" << endl << endl;
}


int main() {
	// 1. �޴� ����  2. ��� �Ϸ�  3. �ֹ� ���  4. �ֹ� Ȯ��
	// 5. ��� Ȯ��  6. ��� ����  7. �ǸŽ��� Ȯ��  8. ���α׷� ����
	enum { MENU = 1, COMPLETE, CANCEL, CONFIRM, AMOUNT, FIX, INCOME, BYE };

	while (true) {
		switch (run()) {
		case MENU: menu(); break;
		case COMPLETE: complete(); break;
		case CANCEL: cancel(); break;
		case CONFIRM: confirm(); break;
		case AMOUNT: amount(); break;
		case FIX: fix(); break;
		case INCOME: income(); break;
		case BYE:
			cout << "���õ� �����ϼ̽��ϴ� (_ _)" << endl;
			return 0; break;
		default:
			cout << "�߸��� �����Դϴ�." << endl << endl;
		}
	}
	return 0;
}
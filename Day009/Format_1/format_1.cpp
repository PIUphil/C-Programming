/*
  ios Ŭ������ ���ǵ� ���� �÷���
  - ios::skipws => �Է½� ���鹮�� ����			// ws=space bar
  - ios::unitbuf => ��½�Ʈ���� ������ �����͸� ���۸������ʰ�(���ۿ� ���� �ʰ�) �ٷ� ���	
  - ios::uppercase => 16����(0~9, A~F) ����ǥ���� �빮�ڷ�
  - ios::dec => decimal, 10������ ���. �⺻��
*/

#include <iostream>
using namespace std;

int main() {
	cout << 30 << endl;			// 10������ ���

	cout.unsetf(ios::dec);			// setting���� ���� - 10���� ����
	cout.setf(ios::hex);			// 16������ ���

	cout << 30 << endl;				// 1e  => 0x1e

	cout.setf(ios::showbase);
	cout << 30 << endl;				// 0x1e

	cout.setf(ios::uppercase);
	cout << 30 << endl;				// 0X1E

	cout.setf(ios::dec | ios::showpoint);		// showpoint - �Ҽ��� ǥ��
	cout << 23.5 << endl;			// 23.5000
			
	cout.setf(ios::scientific);		// �Ǽ� ǥ���� ���л���� ǥ��
	cout << 23.5 << endl;			// 2.350000E +001

	cout.setf(ios::showpos);		// ��ȣ�� �Բ� ���
	cout << 23.5 << endl;			// +2.350000E +001

	return 0;
}
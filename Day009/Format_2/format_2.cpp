/*
  ���� �Լ�
  - int width(int minWidth) : ��µǴ� �ʵ��� �ּҳʺ�
  - char fill(char cFill) : cFill ���ڷ� �� ĭ�� ä���
  - int precision(int np) : ��� ������ ��ȿ���� �ڸ����� np�� ���� 
	������ �Ҽ��� ������ ���� �ڸ��� ��� �����ϰ� �Ҽ����� ����  
*/

#include <iostream>
using namespace std;

int main() {
	cout.width(10);					// ��µǴ� ���� �ʺ� 10ĭ���� ����
	cout << "Hello" << endl;		// ��������		// Hello + '\0' �� ������ 6ĭ �����ϰ�, ����4ĭ �������
	cout.width(5);
	cout << 12 << endl;				// ��������


	cout.fill('^');					// ��ĭ�� ä��
	cout.width(10);						
	cout << "Hello" << endl;		
	cout.width(5);
	cout << 12 << endl;				

	cout.precision(5);				// ��ȿ�ڸ��� 5ĭ
	cout << 11.0 / 3.0 << endl;		// 3.6667	// �Ҽ��� �����ϰ� 5��. �������� �ݿø�

	return 0;
}
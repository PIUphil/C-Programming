/*
  ����ȯ(casting) : �ڷ��� ���� ��ȯ�ϴ� �۾�
  - �ڵ�����ȯ(����������ȯ, promotion)
	: ū ������ ���� �����͸� ��� ����
	: �������� �ս��� �߻����� �ʴ´�.
  - ��������ȯ(���������ȯ, casting)
	: ���� ������ ū �����͸� ��� ����
	: �������� �ս��� �߻��Ѵ�.
  - �ڷ����� ũ��
	bool < char < short < int < long < long long < float < double
	1bit	1B		2B	   4B	 4B		   8B		 4B		 8B
*/

#include <iostream>
using namespace std;

int main() {
	char a = 100;
	char b = 'A';
	int c = 100;
	long d = 101L; // long�� ����
	float e = 3.14f;
	double f = 3.14;

	a = (char)d;
	c = int(f);

	cout << c;

	return 0;
}
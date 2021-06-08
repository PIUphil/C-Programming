/*
  vector : ���� ũ�� �迭
*/

#include <iostream>
#include <vector>
// #include <algorithm> // ��� �˰����� ���� ����
using namespace std;

/*
  push_back(���) : �������� �߰�
  at(�ε���) : ����, ����
  begin(), end() : �����̳��� ����,������ ��ġ
  empty() : ���Ͱ� ����ִ����� bool������ ���� true/false
  erase(iterator it) : it�� ����Ű�� ���� ���� (�ڵ����� ���� ũ��������. it�� ������)
  insert(iterator it, element) : it�� ����Ű�� ���� ���(element) ����
  size() : ����(���)�� ����
*/

int main() {
	vector<int> v;		// �������� ����

	// ���� ����
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	
	// ���Ұ����� �뷮
	int s = v.size();		// ũ�� 3
	int c = v.capacity();	// �뷮 3 ... �ٸ�;? // �ִ�ũ��

	// cout << s << endl << c << endl << endl;

	// ���� ����
	v.at(2) = 5;			// 1 2 5
	int num = v.at(1);		// 2
	v[0] = 10;				// 10 2 5
	int num2 = v[2];		// 5

	// ������ ��� ���
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;

	return 0;
}

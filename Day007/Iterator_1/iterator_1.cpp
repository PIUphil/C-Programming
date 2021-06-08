/*
  iterator
  - �ݺ���
  - �����̳��� ���Ҹ� ����Ű�� ������
  - ���� ����
	��ü���� �����̳ʸ� �����Ͽ� �ݺ��� ����
	vector<int>::iterator it;
	it = v.begin();
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	for (int i = 1; i <= 5; i++)
		v.push_back(i);

	vector<int>::iterator it;		// �����ͺ��� (�����̳ʿ� �����ϴ�)
	it = v.begin();

	it++;				// it = it + 1;
	int num = *it;		// 2

	num = num * 2;		// 4
	*it = num;			// 1 4 3 4 5

	it = v.erase(it);	// 1 3 4 5

	it = v.end();		// ������ ��ġ�� �� �ڷ� �̵�

	for (it = v.begin(); it != v.end(); it++) {		// ������ ��ġ�� ó������ ������ �̵�
		cout << *it << ' ';
	}

	return 0;
}
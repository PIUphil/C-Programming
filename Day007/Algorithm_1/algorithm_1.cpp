/*
  STL �˰���
  - ���ø� �Լ�
  - ���� �Լ�
  - STL �����̳� Ŭ������ ��� �Լ��� �ƴϴ�.
  - iterator�� �Բ� ���
  - sort(������ġ, ��������ġ)
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v;

	cout << "5���� ������ �Է��ϼ���.\n";
	for (int i = 0; i < 5; i++) {
		cout << i+1 << "��° ���� = ";
		int num;
		cin >> num;
		v.push_back(num);
	}

	// �������� ����
	sort(v.begin(), v.end());

	// �ݺ���
	// vector<int>::iterator it;
	//for (it = v.begin(); it != v.end(); it++)
	for (auto it = v.begin(); it != v.end(); it++)
		cout << *it << " ";
	cout << endl;

	return 0;
}
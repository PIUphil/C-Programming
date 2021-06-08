/*
  STL(Standard Template Library) : �Ϲ�ȭ ���α׷���
  - �Ϲ�ȭ ���α׷����� �����͸� �߽��ϴ� ��ü���� ���α׷��ְ��� �޸�
	���α׷��� �˰��� ������ �� ���
  - C++ ǥ�� ���ø� ���̺귯�� �������
	�ݺ���(iterator)
	�����̳�(container) : ���� Ÿ���� ���� ��ü�� ����
						  Ŭ���� ���ø�		// �Ϲ������� ����ϱ� ���� ��Ƴ��� Ŭ�������� ����?
	�˰���(Algorithm) : �Լ���

  - �����̳� : ����(sequence) - ������� �����͸� �����ϱ� ���� �����̳� (ex.����Ʈ)
			   ����(associative), �����(adapter)	
  - ���� �����̳� : vector, list, deque(queue�� Ȯ����, stack+queue�� ������ ����)
  - ���� �����̳� : set, map(���̽��� dict�� ���)
  - ����� �����̳� : stack, queue
*/

#include <iostream>
#include <vector>
using namespace std;

//template <typename T>
//class Vector { };

int main() {
	// ���Ͱ�ü ���� �� �ʱ�ȭ
	vector<int> vc = { 10, 20, 30 };				// �����迭(ũ�Ⱑ �����Ǿ���������)
	
	cout << "���� ������ ũ�� : " << vc.size() << endl;		// size() : ũ��

	// ���� ��� �߰�
	vc.push_back(40);										// push_back() : �ڿ� �߰�
	
	cout << "������ �׹�° ��� : " << vc[3] << endl;
	cout << "���� ������ ũ�� : " << vc.size() << endl;

	copy(vc.begin(), vc.end(), ostream_iterator<int>(cout, ", "));	// copy(���۰�, ��������, ��¹ݺ���

	return 0;
}

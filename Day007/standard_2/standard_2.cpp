/*
  List : ���� ���� ����Ʈ, �迭�� ���� �ڷ������� ����
*/

#include <iostream>
#include <list>			// Ŭ���� ����Ϸ��� include �������
using namespace std;

int main() {
	int arr[10];
	list<int> li = {1, 2, 2, 3, 4, 3, 5, 5};
	/*
	  swap() : �� ����� ��ġ�� ���� �ٲ�
	  reverse() : ����
	  sort() : ����
	  unique() : ������
	  merge() : ����
	*/

	li.sort();		// 1, 2, 2, 3, 3, 4, 5, 5
	copy(li.begin(), li.end(), ostream_iterator<int>(cout, ", "));
	cout << endl<<endl;
	
	li.unique();	// 1, 2, 3, 4, 5
	copy(li.begin(), li.end(), ostream_iterator<int>(cout, ", "));
	cout << endl << endl;

	return 0;
}
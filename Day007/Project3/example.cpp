/*
  ���� ��� for��
  for(��������:���պ���)		// �迭�� ũ�Ⱑ ��Ȯ���� ������ ���Ұ�
*/

#include <iostream>
using namespace std;

int main() {
	int arr[] = { 1, 2, 3, 4, 5 };
	//char arr2[] = { 'a', 'b','c','d','e'};

	// for (int i = 0; i < 5; i++)
	//		cout << arr[i] << " ";

	for(auto i: arr)		
		cout << i << " ";
	cout << endl;

	return 0;
}
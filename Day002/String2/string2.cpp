/*
  c-��Ʈ�� ����� �̿��Ͽ� ��ȣ�� �Է¹޾� ��Ȯ�� ��ȣ�� �ԷµǸ�
  ���α׷��� ����Ǵ� ���α׷�
  ��ȣ : c++
*/

#include <iostream>
#include <cstring> // c���� #include <string.h>�� ����
/*
  ���ڿ� ���� �Լ�
  strlen : ���ڿ��� ����
  strcpy : ���ڿ� ����
  strcmp : ���ڿ� �� , strcmp(���ڿ�1, ���ڿ�2)
			( -1(���������� ���� �ڿ� �ܾ �ڿ� ��ġ), 0(��ġ), 1(�� �ܾ �ڿ� ��ġ) )
*/

using namespace std;

int main() {
	char password[12];
	
	cout << "���α׷��� �����Ϸ��� ��ȣ�� �Է��ϼ���." << endl;

	while (true) {

		cout << "��ȣ = ";
		cin >> password;

		if (strcmp(password, "c++") == 0) {			// strcmp ��ġ�� �� 0�� ��ȯ
			cout << "���������� ���α׷��� �����մϴ�." << endl;
			break;
		}
		else {
			cout << "��ȣ�� ��ġ���� �ʽ��ϴ�." << endl;
		}
	}

	return 0;
}
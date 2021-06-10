/*
  get()�� �̿��ؼ� �ؽ�Ʈ ����
  C:\Windows\system.ini ������ �о� ȭ�鿡 ����ϴ� ���α׷��� �����Ͻÿ�.
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
	const char* file = "C:/Windows/system.ini";
	
	// step1. ���� ��ü ����
	ifstream fin;

	// step2. ���� ����
	//fin.open("C:/Windows/system.ini"/*, ios::in*/);	// ios::in - ���� �б� (����)
	fin.open(file);

	if (!fin) {
		cout << "���� ���� ����\n";
		return 0;
	}

	// step3. �۾�
	int byte = 0;
	int ch;

	while ((ch = fin.get()) != EOF) {
		cout.put(ch);				
		byte++;
		//if (ch == '\n') break;
	}

	cout << "���� ����Ʈ �� : " << byte << endl;

	// step4. ���� �ݱ�
	fin.close();

	return 0;
}
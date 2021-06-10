/*
  C++ ���� �����(File I/O)
  - ����(file) : ������������ ó�� ����
  - �ؽ�Ʈ ���� : ���ڸ����� ������ ����. txt, html, xml, c/c++, java
  - ���̳ʸ� ���� : ����, �׸�, ǥ, ����, ������ ���
					hwp, doc, ppt, jpg, bmp, mp3, ...
  - ���� ����� ���̺귯��
	fstream : iostream
	ifstream : istream - �Է�
	ofstream : ostream - ���

  - ��������� ���
	step1. ���ϰ�ü ����
	step2. ���� ����
	step3. �۾�
	step4. ���� �ݱ�
*/

#include <iostream>
#include <fstream>		// ifstream or ofstream
using namespace std;

int main() {
	// step1. ���� ��ü ����
	ofstream fout;		// file out

	// step2. ���� ����
	// open(���ϸ�, mode)
	// mode : r(read), w(write), a(append), rb, wb, ab [binary]
	// ofstream�� ��¿��̹Ƿ� w�� ���������ϴ�?
	fout.open("song.txt");
	if (!fout) {			// ���� ������ ���
		cout << "song.txt ������ ���� ���߽��ϴ�.\n";
		return 0;
	}

	// step3. �۾�
	int age = 21;
	char singer[] = "kim";
	char song[] = "Yesterday";

	fout << age << '\n';
	fout << singer << endl;
	fout << song << endl;

	// step4. ���� �ݱ�
	fout.close();

	return 0;
}



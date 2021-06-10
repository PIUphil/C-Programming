/*
  words.txt ������ �ٴ����� �о� ������ ��
  ����ڰ� �Է��� �ܾ �����ϰ� �ִ� ���ڿ��� ����ϴ� ���α׷�
*/

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;


void fileRead(vector<string>& v, ifstream& fin) {		// ���Ͽ��� �� �о���� �Լ�
	string line;

	while (getline(fin, line)) {
		v.push_back(line);
	}
}

void search(vector<string>& v, string word) {			// ���忡�� �ܾ� ã�� �Լ�
	for (int i = 0; i < v.size(); i++) {
		int index = v[i].find(word);			// 1 or -1
		if (index != -1)		// ã�Ҵٸ�
			cout << v[i] << endl;
	}
}


int main() {
	vector<string> wordVector;

	ifstream fin("D:/C++_Prograimming/source/words.txt");
	if (!fin) {
		cout << "words.txt ������ �� �� �����ϴ�.\n";
		return 0;
	}

	fileRead(wordVector, fin);
	fin.close();

	cout << "words.txt ������ �о����ϴ�.\n";

	while (true) {
		cout << "�˻��� �ܾ �Է����ּ���. \n";
		cout << "���α׷��� ������ ��� exit�� �Է��ϼ���.";
		cout << "�˻��� �ܾ� = ";
		string word;
		getline(cin, word);

		if (word == "exit") break;

		search(wordVector, word);
	}
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}
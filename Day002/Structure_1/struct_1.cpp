/*
  ����ü(structure) -> Ŭ���� (Ȯ��)
  - ���� �ٸ� Ÿ���� �ڷ����� �ϳ��� ��� �����ϴ� �ڷᱸ��
  - ����ü�� ��� or ��� ����
  - ���� : struct ����ü����{
			int a;
			float b;
			char c;
		    };			// ���� �����ݷ�(;)�� ����
*/

#include <iostream>
using namespace std;

struct Book {
	char title[30];
	char author[30];
	int price;
};

int main() {
	// ����ü����(��ü)
	// struct Book book;
	struct Book web_book = { "C++ Programming", "ȫ�浿", 28000 };		//����ü ����+�ʱ�ȭ

	cout << "å ���� : " << web_book.title << endl;
	cout << "���ڸ�  : " << web_book.author << endl;
	cout << "å ���� : " << web_book.price << endl;

	return 0;
}
// ��ó���� : preprocessor
#include <iostream>		// import (<-�ٸ�����)�� ������ �ǹ̸� ����	// import - ����, include - Ȯ��
/*
  ios : input output system. �ֻ��� ��ü
  istream + ostream = iostream
  stream(��Ʈ��) : �ó���, ���(������, �����ȣ)
  c��� #include <stdio.h>		// .h = header // c++ => #include <stdio>
  - string.h : ���ڿ��� ���õ� �Լ��� ���� => cstring (c++)
*/

// �����Լ� or �������� or ��ũ�λ��
/*
  #define ����� = ��;
  const(=constant) : ���
  - ����� ������ �ʴ� ��, ������ ��
*/
using namespace std;		// �� ���ۿ� ����;

namespace A {
	void aaa() {}
	void bbb() {}
}

/*
  �̸� ���� �̸�����
  - namespace { ... }
  - ��� ��ü�� static Ű���尡 �پ��ִ� ȿ���� ����.
*/

namespace B {
	void aaa() {}
	void bbb() {}
	void ccc() {}
}

// main�Լ� : ���α׷��� ���۰� ���� ��Ÿ���� �Լ�
int main() {		// ����Ÿ�� �Լ���(�Ű�����) { ... }
	/*
	  �̸�����(namespace)�� ����������(scope������, ::) - ~��
	*/
	A::aaa();

	// std::cout << "Hello, World!!" << std::endl;
	cout << "Hello, World!!" << endl;

	/*
	printf	=> cout ��ü�� <<������
	scanf	=> cin ��ü�� >>������
	std : c++ ǥ�� ���̺귯���� ��� �Լ�, ��ü ���� ���ǵ� �̸�����
	*/


	return 0;		// �ý����� �����Ѵٴ� �ǹ�
}



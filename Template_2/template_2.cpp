/*
  STACK(����)
  - LIFO(Last in First Out), ���Լ���
  - �������� �Է��� �����͸� ���� ó���� ����
  - �������
	top : ���ø޸��� ���
	bottom : ���ø޸��� �ϴ�
	sp(stack point) : ���԰� ������ �̷������ ��ġ
	push(����), pop(����)
*/

#include <iostream>
using namespace std;

template <typename T>
class STACK {
	T data[10];		// 0~9
	T sp;

public:
	STACK();
	void push(T a);
	T pop();
};

template <typename T>
STACK<T>::STACK(): sp(-1) {}

template <typename T>
void STACK<T>::push(T a) {
	if (sp > 9) {
		cout << "stack is full" << endl;
		return;
	}

	data[++sp] = a;
}

template <typename T>
T STACK<T>::pop() {
	if (sp < 0) {
		cout << "stack is empty" << endl;
		return 0;
	}

	T a = data[sp--];
	return a;
}


int main() {
	STACK<char> stack;

	stack.push('A');
	stack.push('B');
	stack.push('C');

	cout << stack.pop() << endl;
	cout << stack.pop() << endl;
	cout << stack.pop() << endl;

	return 0;
}
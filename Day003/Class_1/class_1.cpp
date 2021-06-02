/*
  ��ü ���� ���α׷���(OOP, Object-Oriented Programming)			// ���
  - ��� �����͸� ��ü(Object)�� ����Ͽ� ó���ϴ� ��ü �߽� ���α׷���
  - ������ ��� ���� ��ü
  - Ư¡ : �߻�ȭ, ĸ��ȭ, ��������, ��Ӽ�, ������

  Ŭ������ ��ü
  - Ŭ����(class) : ��ü(Object)�� �𵨸� �ϴ� �� // ��üȭ,���α׷��� �ϴ� ��
    �ڷᱸ�� : ����, �迭, ����ü                        // �����͸� �����ϰ� ���
    �������(property) - �Ӽ�, ����޼���(method, �Լ�)-���� �ൿ, ����    // Ŭ������ �����ϴ� ��
    ����������(����������) : private, public, protected

  - ��ü(Object)�� ��ü(instance)
*/

#include <iostream>
#include <string>       // string Ŭ���� ����
using namespace std;
#include "Person.h"     // ���� ���� ��������� ""�� �ҷ���


int main() {
    // ��ü(instance)�� �����ؾ� �Ѵ�.
    Person p("ȫ�浿");
    // p.name = "ȫ�浿";

    Person q("�庸��");
    // q.name = "�庸��";

    Person w("������");
    // w.name = "������";

    // ��ü�� �̿��ؼ� ����� ���� : direct������(.)
    p.walk(5);
    p.run(10);

    q.run(10);
    q.walk(15);

    w.walk(20);

    return 0;
}

// Ŭ���� ���� ���� - ��Ȱ��
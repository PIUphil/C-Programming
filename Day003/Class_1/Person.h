#pragma once

#include <iostream>
#include <string>
using namespace std;

class Person {      // ����� �𵨸�
    // ����������
    // ����ʵ�

    // ����������
    // ����޼���
public:                 // ����������
    string name;        // ����ʵ�

public:                 // ����������

    // ������ �޼��� : ��ü�� ������ �� �ڵ����� ȣ��Ǵ� �޼���
    Person(string irum) {          // default constructor(����Ʈ ������) - �⺻���� Ŭ������� �����ϰ� ����. �����Ǿ��־���.
    // ��ü�� ������ �� ������ �۾��� ���
    // ����ʵ带 �ʱ�ȭ�����ִ� ������ �����Ѵ�.
        name = irum;
    }


    void walk(int speed) {   // ����޼���(�Լ�)
        cout << name << "�� " << speed << "�� �ӵ��� �ɾ�ϴ�" << endl;
    }

    void run(int speed) {
        cout << name << "�� " << speed << "�� �ӵ��� �پ�ϴ�" << endl;
    }
};
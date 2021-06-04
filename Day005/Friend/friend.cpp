/*
  friend Ű���� : ����� Ŭ������ private ����� ������ �� �ִ�.
*/

#include <iostream>
#include <cstring>
#include <string>
using namespace std;
#pragma warning (disable:4996)

// Ŭ���� ����
class Girl;

class Boy {
	int height;
	friend class Girl;


public:
	Boy(int len) : height(len) {}
	
	void showYourFriendInfo(Girl& frn);
};


class Girl {
	//char phone[20];
	string phone;

public:
	friend class Boy;
	/*Girl(char* num) {
		strcpy(phone, num);
	}*/
	Girl(string num) { phone = num; }

	void showYourFriendInfo(Boy& frn);
};


void Boy::showYourFriendInfo(Girl& frn) {
	cout << "Her Number : " << frn.phone << endl;
}

void Girl::showYourFriendInfo(Boy& frn) {
	cout << "His Height: " << frn.height << endl;
}

int main() {
	Boy boy(178);
	Girl girl("010-1234-5678");

	boy.showYourFriendInfo(girl);
	girl.showYourFriendInfo(boy);

	return 0;
}
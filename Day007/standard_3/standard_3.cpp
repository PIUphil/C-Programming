#include <iostream>
#include <vector>
using namespace std;

int main() {
	//vector<int> a;
	// int b[10]; // a(10)

	//cout << a.capacity() << endl;		// 0
	//cout << a.size() << endl;			// 0

	//vector<int> a2(10);
	//cout << a2.capacity() << endl;		// 10
	//cout << a2.size() << endl;			// 10
	
	vector<int> a(10);

	a.push_back(10);
	a.push_back(20);
	a.push_back(30);

	// cout << a.capacity() << endl;		// 15 > �ڷ����� ����ؼ� ũ�Ⱑ �þ - �� �Ⱦ���
	cout << a.size() << endl<<endl;			// 13 > 10�� ���Ŀ� �߰�,,

	for (int i = 0; i < a.size(); i++)
		cout << a[i] << endl;
	//copy(a.begin(), a.end(), ostream_iterator<int>(cout, "\n"));

	return 0;
}
#include<iostream>
using namespace std;

int max(int x, int y) {
	if (x < y)
		return y;
	else
		return x;
}
int min(int x, int y) {
	if (x < y)
		return x;
	else
		return y;
}


int main() {
	int a, b;
	cout << "�� ���� �Է��� �ּ��� (����� ����) >> ";
	cin >> a >> b;
	cout << endl << "ū �� >> " << max(a, b);
	cout << endl << "���� �� >> " << min(a, b);
}

	


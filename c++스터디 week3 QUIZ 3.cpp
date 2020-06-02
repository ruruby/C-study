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
	cout << "두 수를 입력해 주세요 (띄어쓰기로 구분) >> ";
	cin >> a >> b;
	cout << endl << "큰 수 >> " << max(a, b);
	cout << endl << "작은 수 >> " << min(a, b);
}

	


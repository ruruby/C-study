#include <iostream>
using namespace std;

void swap(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main() {
	int num, i, j, k, temp, mintemp;

	cout << "수열의 길이 : ";
	cin >> num;
	int *p = new int[num];

	cout << "수열을 입력해주세요";
	for (i = 0; i < num; i++) {
		cin >> p[i];
	}
	
	for (i = 0; i < num; i++) {
		temp = p[i];
		mintemp = p[i];
		k = i;
		for (j = i+1; j < num; j++) {
			if (temp > p[j]) {
				mintemp = p[j];
				k = j;
			}
		}
		if (k != i) {
			swap(temp, mintemp);
		}
		p[i] = temp;
		p[j] = mintemp;
		cout << "출력" << endl;
		for (i = 0; i < num; i++) {
			cout << p[i];
		}
	}
}
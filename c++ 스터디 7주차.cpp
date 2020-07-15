#include <iostream>
using namespace std;

int main() {
	int num, i, j, k, f, temp, mintemp;

	cout << "수열의 길이 : ";
	cin >> num;
	int *p = new int[num];

	cout << "수열을 입력해주세요"<<endl;
	for (i = 0; i < num; i++) {
		cin >> p[i];
	}
	
	for (i = 0; i < num-1; i++) {
		temp = p[i];
		mintemp = p[i];
		k = i;
		for (j = i+1; j < num; j++) {
			if (mintemp > p[j]) {
				mintemp = p[j];
				k = j;
			}
		}
		if (k != i) {
			p[i] = mintemp;
			p[k] = temp;
		}
		
		cout << endl;
		for (f = 0; f < num; f++) {
			cout << p[f];
		}
	}
}
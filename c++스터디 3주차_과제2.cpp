#include<iostream>
using namespace std;

void swap(int* c, int* d) {//숫자를 교환할 변수의 주소를 입력받는다
	int temp = *c;//임시로 변수를 생성해 처음 입력받은 수의 주소를 저장한다
	*c = *d;//처음 입력받은 수의 주소에 두번 째로 입력받은 수의 주소를 저장한다
	*d = temp;//두번 째로 입력받은 수의 주소에 임시 변수에 저장해둔 첫번 째 수의 주소를 저장한다
}

int main() {

	int a, b;
	
	cout << "first number >> ";
	cin >> a;
	cout << "second number >> ";
	cin >> b;
	
	cout << "swap 전 >> "<<a<<"\t"<<b<< endl;

	swap(&a, &b);//처음 숫자와 두번 째 숫자의 주소를 함수에 넣는다

	cout << "swap 후 >> " <<a<<"\t"<<b<<endl;
}

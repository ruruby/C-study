#include<iostream>
using namespace std;
int main() {
	float a;
	float b;
	cout << "First number>>";
	cin >> a;
	cout << "Second number>>";
	cin >> b;
	cout << endl << "============계산 결과====================" << endl;
	cout << "a+b="<<a+b<<endl;
	cout << "a-b="<<a-b<<endl;
	cout << "a*b="<<a*b<<endl;
	cout.precision(1);
	cout << "a/b="<<a/b;
}
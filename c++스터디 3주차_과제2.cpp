#include<iostream>
using namespace std;

void swap(int* c, int* d) {//���ڸ� ��ȯ�� ������ �ּҸ� �Է¹޴´�
	int temp = *c;//�ӽ÷� ������ ������ ó�� �Է¹��� ���� �ּҸ� �����Ѵ�
	*c = *d;//ó�� �Է¹��� ���� �ּҿ� �ι� °�� �Է¹��� ���� �ּҸ� �����Ѵ�
	*d = temp;//�ι� °�� �Է¹��� ���� �ּҿ� �ӽ� ������ �����ص� ù�� ° ���� �ּҸ� �����Ѵ�
}

int main() {

	int a, b;
	
	cout << "first number >> ";
	cin >> a;
	cout << "second number >> ";
	cin >> b;
	
	cout << "swap �� >> "<<a<<"\t"<<b<< endl;

	swap(&a, &b);//ó�� ���ڿ� �ι� ° ������ �ּҸ� �Լ��� �ִ´�

	cout << "swap �� >> " <<a<<"\t"<<b<<endl;
}

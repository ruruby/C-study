#include <iostream>
#include <string>
using namespace std;

#include "Class.h"
#include "Class.h"
#include "Class.h"

Person::Person() {
	name = " "; phone = "000-0000-0000";//��� ���� ���ڿ� �ʱ�ȭ
}

void Person::addPhone(string p) {//��ȣ ���� �Է�->return �� �ʿ���� ���常 �ϸ� �Ǵ� �Լ��� ����Ÿ���� void
	getline(cin, phone);//������� phone�� �Է¹��� ���ڿ� ����
}
void Person::editPhone(string p) {//��ȣ ����->return �� �ʿ���� ���常 �ϸ� �Ǵ� �Լ��� ����Ÿ���� void
	getline(cin, phone);//������� phone�� ���� �Է¹��� ���ڿ� ����
}
string Person::getPnum() {//��� ���ڿ��� �ؾ��ϴ� �Լ��� ����Ÿ���� string
	return phone;//phone���ڿ� main�Լ��� ����
}
string Person::getName(string n) {//��� ���ڿ��� �ؾ��ϴ� �Լ��� ����Ÿ���� string
	name = n;//main�Լ� ���� ���ڿ� n�� ���ڿ� name�� ��´�
	return name;//name���ڿ� main�Լ��� ����
}
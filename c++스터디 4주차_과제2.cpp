#include <iostream>
#include <string>
using namespace std;


class Person {
private:
	string name;
	string phone;//��� ������ �̸�, ��ȣ

public:
	Person();
	void addPhone(string p);//��� �Լ�(ó���� ��ȣ�� �߰�)
	void editPhone(string p);//	     (��ȣ�� ����)
	string getPnum(); //(��ȣ�� ���)
	string getName(string n);//	(�̸��� ���)
};


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
string Person::getName(string n){//��� ���ڿ��� �ؾ��ϴ� �Լ��� ����Ÿ���� string
	name = n;//main�Լ� ���� ���ڿ� n�� ���ڿ� name�� ��´�
	return name;//name���ڿ� main�Լ��� ����
}

int main() {
	string n = " ";//���ڿ� �ʱ�ȭ
	string p = "000-0000-0000";//���ڿ� �ʱ�ȭ
	string w = " ";//���ڿ� �ʱ�ȭ
	int opt;//���Ǻ� �б� ���� ����
	Person info;//Person Ŭ������ ��ü info ����
	cout << "--- swing ��ȭ��ȣ�� ---" << endl << "�̸��� �Է��� �ּ��� >>";
	getline(cin, n);//�̸� �Է¹���(��� n�� ������ �� �ʿ��� �� ������� name�� ������ ��)
	cout << "��ȭ��ȣ�� �Է��� �ּ��� >>";
	info.addPhone(p);//��ü info�� ����Լ� ȣ��
		
	do{
		cout << endl<<"1. �ֽ� ��� ��ȭ��ȣ ��ȸ\n" << "2. �ֽ� ��� ��ȭ��ȣ ����\n" << "3. ���� >>";
		cin >> opt;//���� ���� �޴´�
		if (opt == 1) {//1����
			cout << info.getName(n);//��ü info�� ����Լ� ȣ���ؼ� ���
			cout << "::";
			cout << info.getPnum()<<endl;//��ü info�� ����Լ� ȣ���ؼ� ���
		}
		else if (opt == 2) {//2����
				cout << "\n�̸��� �Է��� �ּ��� >> ";	
				getchar();
			do{
				getline(cin,w);
				if ((info.getName(n)).compare(w) == 0) {//��ü info�� ����Լ��� n�� ��ü info�� ��������� name�� ���� �� ������ �� w�� ���� ���
					cout << "������ ��ȭ��ȣ�� �Է��� �ּ��� >> ";
					info.editPhone(p);//��ü info�� ����Լ� ȣ���ؼ� ��ȣ ����
					cout << endl;
				}
				else {
					cout << "����ó�� �������� �ʽ��ϴ� �ٽ� �Է��� �ּ��� >> ";//��ü info�� ������� name�� w�� ���� ���� ��� �ٽ� do~while�� �������� ����
				}
			} while ((info.getName(n)).compare(w) != 0);//��ü info�� ������� name�� w�� ���� ���� ���� ��� do ~ while�� qksqhr
		}
		else 
			continue;//1,2,3�ܿ� �ٸ� ���� �� ���� �� ������ ����(do~while������ ���ư���)
	}while (opt != 3);//3�� ������ �� do~while�� ����->���� ���α׷� ����
}
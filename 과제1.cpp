#include<iostream>
#include<string>
using namespace std;
int main() {
	char name[100];
	char birth[100];
	string age;
	string department;
	string hobby;
	cout << "�̸��� �Է��ϼ���: ";
	cin >> name;
	cout << "������ �Է��ϼ���: "<<getchar();
	cin.getline(birth, 100);
	cout << "���̸� �Է��ϼ���: ";
	getline(cin, age);
	cout << "�Ҽ� �а��� �Է��ϼ���: ";
	getline(cin, department);
	cout << "��̸� �Է��ϼ���: ";
	getline(cin, hobby);
	cout << endl << endl;
	cout << "====================================================";
	cout << endl<<"<ȸ�� ����>" << endl;
	cout << "�̸�: " <<name<<endl;
	cout << "����: " << birth << endl;
	cout << "����: " << age<<endl;
	cout << "�Ҽ� �а�: " << department<<endl;
	cout << "���: " << hobby;
}
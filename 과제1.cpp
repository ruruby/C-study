#include<iostream>
#include<string>
using namespace std;
int main() {
	char name[100];
	char birth[100];
	string age;
	string department;
	string hobby;
	cout << "이름을 입력하세요: ";
	cin >> name;
	cout << "생일을 입력하세요: ";
	getchar();
	cin.getline(birth, 100);
	cout << "나이를 입력하세요: ";
	getline(cin, age);
	cout << "소속 학과를 입력하세요: ";
	getline(cin, department);
	cout << "취미를 입력하세요: ";
	getline(cin, hobby);
	cout << endl << endl;
	cout << "====================================================";
	cout << endl<<"<회원 정보>" << endl;
	cout << "이름: " <<name<<endl;
	cout << "생일: " << birth << endl;
	cout << "나이: " << age<<endl;
	cout << "소속 학과: " << department<<endl;
	cout << "취미: " << hobby;
}

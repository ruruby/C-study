#include <iostream>
#include <string>
using namespace std;

class PhoneBook {
private:
	string number;
	string name;
public:
	PhoneBook();
	void setPnum(string number) { this->number = number; }
	void setName(string name) { this->name = name; }
	void addPhone(string name, string number) { this->name = name, this->number = number; }
	string getPnum() { return number; }
	string getName() { return name; }
};

class PhoneBookManager {
private:
	PhoneBook *phoneB;
	int size;
public:
	PhoneBookManager(int num);
	void showAll();
	void setPnum();
	void searchPnum();
	void addPnum(PhoneBookManager *r);
	void editPnum();
	void deletephoneB() { delete[] phoneB; }
};

PhoneBook::PhoneBook() {}

PhoneBookManager::PhoneBookManager(int num) {//멤버변수인 포인터와 생성자 생성 시 입력받은 숫자로 class PhoneBook의 객체 동적생성
	phoneB = new PhoneBook[num];
	size = num;
}

void PhoneBookManager::showAll() {
	int i;
	for (i = 0; i < size; i++) {
		cout << i+1<<". "<<(phoneB + i)->getName() << "::" << (phoneB + i)->getPnum() << endl;
	}
}

void PhoneBookManager::setPnum() {
	int i;
	string tempName, tempNum;
	getchar();
	for (i = 0; i < size; i++) {
		cout << i + 1 << "번째 사람의 이름을 입력해주세요 >> ";
		getline(cin, tempName);
		(phoneB+i)->setName(tempName);
		cout << i + 1 << "번째 사람의 전화번호를 입력해주세요 >> ";
		getline(cin, tempNum);
		(phoneB+i)->setPnum(tempNum);
		cout << endl;
	}
}

void PhoneBookManager::searchPnum() {
	int i, check=0;
	string sNum,tempName;
	cout << "누구의 번호를 검색하겠습니까? >> ";
	getchar();
	getline(cin, sNum);
	for (i = 0; i < size; i++) {
		tempName=(phoneB+i)->getName();
		if (tempName == sNum) {
			cout << sNum << "님의 전화번호 : " << (phoneB + i)->getPnum()<<endl;
			check++;
		}
	}
	if (check != 1) {
		cout << "연락처가 존재하지 않습니다.";
	}
}

void PhoneBookManager::addPnum(PhoneBookManager *r) {
	int i;	
	string tempName, tempNum;

	PhoneBook *temp = new PhoneBook[size + 1];

	for (i = 0; i < size; i++) {
		temp[i] = r->phoneB[i];
	}

	r->deletephoneB();
	size++;

	cout << "이름을 입력해주세요 >> ";
	getchar();
	getline(cin, tempName);
	cout << "전화번호를 입력해주세요 >> ";
	getline(cin, tempNum);
	temp[size-1].addPhone(tempName, tempNum);
	cout << "전화번호가 추가되었습니다.";

	phoneB = new PhoneBook[size];
	for (i = 0; i < size; i++) {
		phoneB[i] = temp[i];
	}	
	
}

void PhoneBookManager::editPnum() {
	int i, check=0;
	string editName, tempName, editNum;
	cout << "누구의 번호를 수정하겠습니까? >> ";
	getchar();
	getline(cin, editName);
	for (i = 0; i < size; i++) {
		tempName = (phoneB + i)->getName();
		if (tempName == editName) {
			cout << "변경할 번호를 입력해주세요 >> ";
			getline(cin, editNum);
			(phoneB + i)->setPnum(editNum);
			cout << "전화번호가 변경되었습니다.";
			check++;
		}
	}
	if (check!=1){
		cout << "연락처가 존재하지 않습니다.";
	}
}
int main(){
	int pNum, opt;
	string pName;
	cout << " --- SWING 전화번호부 ---" << endl;
	cout << "저장할 전화번호의 수를 입력해주세요 >> ";
	cin >> pNum;
	cout << endl;
	PhoneBookManager swingPBManager(pNum);
	PhoneBookManager *p = &swingPBManager;
	p->setPnum();

	do {
		cout <<endl<< " --- SWING 전화번호부 ---" << endl;
		cout << "1. 전화번호부 보기\n2. 전화번호 검색\n3. 전화번호 추가하기\n4. 전화번호 수정하기\n5. 종료" << endl;
		cout << "번호를 입력해주세요 >>";
		cin >> opt;
		cout << endl << endl;
		switch (opt) {
		case 1:
			swingPBManager.showAll();
			break;
		case 2:
			swingPBManager.searchPnum();
			break;
		case 3:
			swingPBManager.addPnum(p);
			break;
		case 4:
			swingPBManager.editPnum();
			break;
		case 5:
			cout << "프로그램을 종료합니다.";
			break;
		default:
			cout << "잘못 입력하셨습니다.";
			break;
		}
	} while (opt != 5);
}
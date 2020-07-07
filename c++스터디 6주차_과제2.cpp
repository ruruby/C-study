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
	void addPnum();
	void editPnum();
};

PhoneBook::PhoneBook() {}

PhoneBookManager::PhoneBookManager(int num) {//��������� �����Ϳ� ������ ���� �� �Է¹��� ���ڷ� class PhoneBook�� ��ü ��������
	PhoneBook *phoneB = new PhoneBook[num];
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
		cout << i + 1 << "��° ����� �̸��� �Է����ּ��� >> ";
		getline(cin, tempName);
		(phoneB+i)->setName(tempName);
		cout << i + 1 << "��° ����� ��ȭ��ȣ�� �Է����ּ��� >> ";
		getline(cin, tempNum);
		(phoneB+i)->setPnum(tempNum);
		cout << endl;
	}
}

void PhoneBookManager::searchPnum() {
	int i, check=0;
	string sNum,tempName;
	cout << "������ ��ȣ�� �˻��ϰڽ��ϱ�? >> ";
	getline(cin, sNum);
	for (i = 0; i < size; i++) {
		tempName=(phoneB+i)->getName();
		if (tempName == sNum) {
			cout << sNum << "���� ��ȭ��ȣ : " << (phoneB + i)->getPnum();
			check++;
		}
	}
	if (check != 1) {
		cout << "����ó�� �������� �ʽ��ϴ�.";
	}
}

void PhoneBookManager::addPnum() {
	PhoneBook addP;
	PhoneBook *q = &addP;
	q = phoneB + size;
	size++;
	string tempName, tempNum;
	cout << "�̸��� �Է����ּ��� >> ";
	getline(cin, tempName);
	cout << "��ȭ��ȣ�� �Է����ּ��� >> ";
	getline(cin, tempNum);
	(phoneB + size)->addPhone(tempName, tempNum);
	cout << "��ȭ��ȣ�� �߰��Ǿ����ϴ�.";
}

void PhoneBookManager::editPnum() {
	int i, check=0;
	string editName, tempName, editNum;
	cout << "������ ��ȣ�� �����ϰڽ��ϱ�? >> ";
	getline(cin, editName);
	for (i = 0; i < size; i++) {
		tempName = (phoneB + i)->getName();
		if (tempName == editName) {
			cout << "������ ��ȣ�� �Է����ּ��� >> ";
			getline(cin, editNum);
			(phoneB + i)->setPnum(editNum);
			cout << "��ȭ��ȣ�� ����Ǿ����ϴ�.";
			check++;
		}
	}
	if (check!=1){
		cout << "����ó�� �������� �ʽ��ϴ�.";
	}
}
int main(){
	int pNum, opt;
	string pName;
	cout << " --- SWING ��ȭ��ȣ�� ---" << endl;
	cout << "������ ��ȭ��ȣ�� ���� �Է����ּ��� >> ";
	cin >> pNum;
	cout << endl;
	PhoneBookManager swingPBManager(pNum);
	PhoneBookManager *p = &swingPBManager;
	swingPBManager.setPnum();

	do {
		cout << " --- SWING ��ȭ��ȣ�� ---" << endl;
		cout << "1. ��ȭ��ȣ�� ����\n2. ��ȭ��ȣ �˻�\n3. ��ȭ��ȣ �߰��ϱ�\n4. ��ȭ��ȣ �����ϱ�\n5. ����" << endl;
		cout << "��ȣ�� �Է����ּ��� >>";
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
			swingPBManager.addPnum();
			break;
		case 4:
			swingPBManager.editPnum();
			break;
		case 5:
			cout << "���α׷��� �����մϴ�.";
			break;
		default:
			cout << "�߸� �Է��ϼ̽��ϴ�.";
			break;
		}
	} while (opt != 5);
}
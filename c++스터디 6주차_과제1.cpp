#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class ATM {
private:
	string name;
	int pw;
	int money;

public:
	ATM();
	void deposit(int depoMon) { money += depoMon; }
	void withdraw(int withMon) { money -= withMon; }
	void send(string receiver, int sendMon) { money += sendMon; }
	void receive(int receiveMon) { money -= receiveMon; }
	int getMoney() { return money; }
	string getName() { return name; }
	int getPasswd() {return pw;}
	void setName(string setName) { name = setName; }
	void setPasswd(int passwd) { pw = passwd; }
};

ATM::ATM(){
	name = " ";
	pw = 0000;
	money = 0;
}

void mainMenu(ATM *p, ATM *standp, int n) {
	int sel, tempoMon, pwIn, i;
	int userPw = p->getPasswd;
	char alName[10];
	string tempoName;
	cout << " --- SWING ATM " << p->getName() << "�� ---" << endl;
	cout << "1. �Ա� \n2. ����\n3. ��ü\n4. �ܾ� Ȯ��\n5. ����" << endl;
	cout << "��ȣ�� �������ּ��� >> ";
	cin >> sel;
	switch (sel) {
	case 1:
		cout << "�Ա��� �ݾ��� �Է����ּ��� >> ";
		cin >> tempoMon;
		p->deposit(tempoMon);
		cout << "���� " << p->getName() << "���� �ܾ��� " << p->getMoney() << "�Դϴ�.";
		break;
	case 2:
		cout << "�󸶸� �����Ͻðڽ��ϱ�? >> ";
		cin >> tempoMon;
		cout << "��й�ȣ�� �Է����ּ��� >> ";
		cin >> pwIn;
		if (pwIn != userPw) {
				cout << "��й�ȣ�� Ʋ�Ƚ��ϴ�.";
				break;
			}
		p->withdraw(tempoMon);
		cout << endl << "���� " << p->getName() << "���� �ܾ��� " << p->getMoney << "�� �Դϴ�.";
		break;
	case 3:
		cout << "�������� �����ڽ��ϱ�? >> ";
		getline(cin, tempoName);
		for (i = 0; i < n; i++) {
			strcpy(alName, &(standp + i)->getName);
			if (alName == tempoName) {
				cout << "�󸶸� �����ڽ��ϱ�? >> ";
				cin >> tempoMon;
				cout << "��й�ȣ�� �Է��� �ּ��� >> ";
				cin >> pwIn;
				if (pwIn == userPw) {
					(standp + i)->send(tempoName, tempoMon);
					p->receive(tempoMon);
					cout << tempoName << "�Բ� " << tempoMon << "���� ���½��ϴ�." << endl << endl;
					cout << "���� " << p->getName << "���� �ܾ���" << p->getMoney << "�� �Դϴ�." << endl;
				}
			}
		}
		break;
	case 4:
		cout << p->getName << "���� ���� �ܾ��� " << p->getMoney << "�� �Դϴ�." << endl;
		break;
	case 5:
		break;
	}
}



int main() {
	int i, n, check;
	string newName, Name, alName;
	int passWd, temp, depo;
	char sel;
	cout << "���࿡ ������ �ο��� �Է����ּ��� >> ";
	cin >> n;
	cout << endl;
	ATM *pPerson = new ATM[n];

	for (i = 0; i < n; i++) {
		cout << i+1 << "��° �մ�" << endl<<endl;
		cout << "������ �����ֽʽÿ� >> ";
		getchar();
		getline(cin, newName);
		(pPerson + i)->setName(newName);
		do {
			cout << "��й�ȣ�� �Է����ּ��� >> ";
			cin >> passWd;
			(pPerson + i)->setPasswd(passWd);
			cout << "�� �� �� �Է����ּ��� >> ";
			cin >> temp;
			if (passWd != temp) {
				cout << "��й�ȣ�� ���� �ٸ��ϴ�." << endl << endl;
			}
		} while (passWd != temp);
		cout << "�Ա��� �ݾ��� �Է����ּ��� >> ";
		cin >> depo;
		(pPerson + i)->deposit(depo);
		cout << endl << endl << endl;
	}
	do {
		cout << " --- SWING ATM ---" << endl;
		cout << "������ �Է����ּ��� (������ x�� �Է����ּ���) >> ";
		getchar();
		getline(cin,Name);
		if (Name == "x")
			break;
		for (i = 0; i < n; i++) {
			alName = (pPerson + i)->getName();
			if (alName == Name) {
				mainMenu(pPerson+i, pPerson, n);
				check++;
				break;
			}
		}
		if (check == 0) {
			cout << "�������� �ʴ� �������Դϴ�." << endl << endl;
		}
	}while (Name != "x");
	cout << "ATM�� �����մϴ�.";
}
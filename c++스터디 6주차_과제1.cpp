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
	int sel, tempoMon, pwIn, i, c=0;
	int userPw = p->getPasswd();
	string alName, tempoName, tempoName2;
	string *stP = &tempoName2;
	do {
		cout << " --- SWING ATM " << p->getName() << "님 ---" << endl;
		cout << "1. 입금 \n2. 인출\n3. 이체\n4. 잔액 확인\n5. 종료" << endl;
		cout << "번호를 선택해주세요 >> ";
		cin >> sel;
		switch (sel) {
		case 1:
			cout << "입금할 금액을 입력해주세요 >> ";
			cin >> tempoMon;
			p->deposit(tempoMon);
			cout << "현재 " << p->getName() << "님의 잔액은 " << p->getMoney() << "입니다." << endl;
			break;
		case 2:
			cout << "얼마를 인출하시겠습니까? >> ";
			cin >> tempoMon;
			cout << "비밀번호를 입력해주세요 >> ";
			cin >> pwIn;
			if (pwIn != userPw) {
				cout << "비밀번호가 틀렸습니다.";
				break;
			}
			p->withdraw(tempoMon);
			cout << endl << "현재 " << p->getName() << "님의 잔액은 " << p->getMoney() << "원 입니다."<<endl;
			break;
		case 3:
			cout << "누구에게 보내겠습니까? >> ";
			getchar();
			getline(cin, tempoName);
			for (i = 0; i < n; i++) {
				alName = (standp + i)->getName();
				if (alName == tempoName) {
					cout << "얼마를 보내겠습니까? >> ";
					cin >> tempoMon;
					cout << "비밀번호를 입력해 주세요 >> ";
					cin >> pwIn;
					if (pwIn == userPw) {
						(standp + i)->send(tempoName, tempoMon);
						p->receive(tempoMon);
						cout << tempoName << "님께 " << tempoMon << "원을 보냈습니다." << endl << endl;
						cout << "현재 " << p->getName() << "님의 잔액은" << p->getMoney() << "원 입니다." << endl;
					}
				}
			}
			break;
		case 4:
			cout << p->getName() << "님의 현재 잔액은 " << p->getMoney() << "원 입니다." << endl;
			break;
		case 5:
			c++;
			break;
		}
	} while (c == 0);
}



int main() {
	int i, n, check=0;
	string newName, Name, alName;
	int passWd, temp, depo;
	char sel;
	cout << "은행에 가입할 인원을 입력해주세요 >> ";
	cin >> n;
	cout << endl;
	ATM *pPerson = new ATM[n];

	for (i = 0; i < n; i++) {
		cout << i+1 << "번째 손님" << endl<<endl;
		cout << "성명을 적어주십시오 >> ";
		getchar();
		getline(cin, newName);
		(pPerson + i)->setName(newName);
		do {
			cout << "비밀번호를 입력해주세요 >> ";
			cin >> passWd;
			(pPerson + i)->setPasswd(passWd);
			cout << "한 번 더 입력해주세요 >> ";
			cin >> temp;
			if (passWd != temp) {
				cout << "비밀번호가 서로 다릅니다." << endl << endl;
			}
		} while (passWd != temp);
		cout << "입금할 금액을 입력해주세요 >> ";
		cin >> depo;
		(pPerson + i)->deposit(depo);
		cout << endl << endl << endl;
	}

	while (1) {
		check = 0;
		Name.clear();
		cout << endl << endl << " --- SWING ATM ---" << endl;
		cout << "성함을 입력해주세요 (종료라면 x를 입력해주세요) >> ";
		cin >> Name;

		if (Name == "x")
			break;

		else {
			for (i = 0; i < n; i++) {
				alName = (pPerson + i)->getName();
				if (alName == Name) {
					mainMenu(pPerson + i, pPerson, n);
					check++;
				}
			}
			if (check == 0) {
				cout << "존재하지 않는 계좌주입니다." << endl;
			}
			continue;
		}
	}

	if (Name == "x");
	cout << "ATM을 종료합니다.";
}
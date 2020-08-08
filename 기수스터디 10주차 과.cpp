#include <iostream>
#include <string>
#include <vector>
using namespace std;

class kiosk {
private:
	char choice=' ';
	vector<string> burger = { "새우버거","불고기버거","싸이버거","딥치즈버거" };
	vector<string> side = { "치즈스틱","감자튀김","샐러드","아이스크림" };
	vector<string> drink = { "사이다","콜라","환타","오렌지주스" };

public:
	kiosk() {};
	int order, n;
	char *p = &choice;
	void getburger();
	void getside();
	void getdrink();
	void select(int a) {};
	~kiosk() {};
};

void kiosk::getburger() {
		cout << "1. 새우버거\n2. 불고기버거\n3. 싸이버거\n4. 딥치즈버거" << endl << endl;
		cout << "주문할 버거의 번호와 수량을 입력해주세요\nex>새우버거 2개 : 1 2" << endl;
		do{
			cin >> order >> n;
		if (order != 1 && order != 2 && order != 3 && order != 4) {
			cout << "존재하지 않는 메뉴를 선택하셨습니다\n다시 선택해 주십시오" << endl;
		}
	} while (order != 1 && order != 2 && order != 3 && order != 4);
	cout << burger[order - 1] << " " << n << "개가 주문되었습니다" << endl;
	cout << "계속 선택하시겠습니까?(y or 끝내려면 아무키나 눌러주세요)" << endl;
	cin >> choice;
}

void kiosk::getside() {
		cout <<"1. 치즈스틱\n2. 감자튀김\n3. 샐러드\n4. 아이스크림"  << endl << endl;
		cout << "주문할 사이드의 번호와 수량을 입력해주세요\nex>치즈스틱 2개 : 1 2" << endl;
		do{
			cin >> order >> n;
		if (order != 1 && order != 2 && order != 3 && order != 4) {
			cout << "존재하지 않는 메뉴를 선택하셨습니다\n다시 선택해 주십시오" << endl;
		}
	} while (order != 1 && order != 2 && order != 3 && order != 4);
	cout << side[order - 1] << " " << n << "개가 주문되었습니다" << endl;
	cout << "계속 선택하시겠습니까?(y or 끝내려면 아무키나 눌러주세요)" << endl;
	cin >> choice;
}

void kiosk::getdrink() {
		cout << "1. 사이다\n2. 콜라\n3. 환타\n4. 오렌지주스" << endl << endl;
		cout << "주문할 음료의 번호와 수량을 입력해주세요\nex>사이다 2개 : 1 2" << endl;
		do{
			cin >> order >> n;
		if (order != 1 && order != 2 && order != 3 && order != 4) {
			cout << "존재하지 않는 메뉴를 선택하셨습니다\n다시 선택해 주십시오" << endl;
		}
	} while (order != 1 && order != 2 && order != 3 && order != 4);
	cout << drink[order - 1] << " " << n << "개가 주문되었습니다" << endl;
	cout << "계속 선택하시겠습니까?(y or 끝내려면 아무키나 눌러주세요)" << endl;
	cin >> choice;
}

int main() {
	kiosk a;
	int pick=1;
	do {	
		do{
			if (pick == 1 || pick == 2 || pick == 3) {
				cout << "====== 메뉴 분류 ======" << endl;
				cout << "1. 햄버거\n2. 사이드\n3. 음료" << endl;
				cout << "=======================" << endl << endl << "몇번을 선택하시겠습니까? ";
			}
			cin >> pick;
			switch (pick) {
			case 1:
				a.getburger();
				break;
			case 2:
				a.getside();
				break;
			case 3:
				a.getdrink();
				break;
			default:
				cout << "존재하지 않는 분류를 선택하셨습니다\n다시 선택해 주십시오" << endl;
				break;
			}
		} while (*(a.p)== 'y');
	} while (pick != 1 && pick!=2 && pick!=3);
}
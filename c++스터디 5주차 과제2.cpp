#include <iostream>
#include <string>
using namespace std;

class VendingMachine
{
private:
	string name;//음료 이름
	int price;//가격
	int total;//음료 합산 값
public:
	VendingMachine(); //생성자
	void purchase(double v1);
	void menu();
	void newMenu();
	string getName() { return name; }
	double getPrice() { return price; }
	double getTotal() { return total; }
	void setName(string n) { name = n; }
	void setPrice(int p) { price = p; }
	void setTotal(int t) {total += t; }
};

VendingMachine::VendingMachine() {
	name = " ";
	price = 0;
	total = 0;
}

void VendingMachine::purchase(double v1){
	int input, d, e ;
	cout << "지폐를 입력하세요 : ";
	do {
		cin >> input;
		if (input < v1) {
			cout << "금액이 부족합니다. 다시 넣어주세요.";
		}
	} while (input < v1);
	cout << "거스름돈입니다"<<endl;
	if (input == v1){
		cout << "거스름돈이 없습니다. 안녕히가세요";
	}
	else if (input > v1) {
		if (input % 100 != 0) {
			cout << "거스름돈은 500원과 100원만 가능합니다" << endl;
		}
		d = input - v1;
		e = d % 500;
		cout << "500원 : " << (int)(input - v1) / 500<< "개"<<endl;
		cout << "100원 : " << e / 100 << "개" << endl;
		cout << "안녕히가세요.";
	}

}
void VendingMachine::menu() {
	cout << "====SWING 자판기====" << endl;
	cout << "1.레쓰비 : 700원" << endl;
	cout << "2.제티 : 400원" << endl;
	cout << "3.바나나 우유 : 1400원" << endl;
	cout << "4.준비중" << endl;
	cout << "5.계산" << endl<<endl;
}
void VendingMachine::newMenu() {
	cout << "====SWING 자판기====" << endl;
	cout << "1.레쓰비 : 700원" << endl;
	cout << "2.제티 : 400원" << endl;
	cout << "3.바나나 우유 : 1400원" << endl;
	cout << "4." <<name<<" : "<<price<<"원"<< endl;
	cout << "5.계산" << endl;
}


int main() {
	string newName = " ";
	int newPrice = 0;
	int opt, num, a, b;
	VendingMachine beverage;//beverage라는 이름의 객체 생성
	beverage.menu();//메뉴판 출력
	
	VendingMachine *p = &beverage;//포인터 p 선언 및 beverage 객체의 주소 저장

	cout << "추가할 음료의 이름을 입력해주세요 : ";
	getline(cin, newName);//추가할 음료의 이름 문자열 newName에 저장
	p->setName(newName);
	cout << "판매할 가격을 입력하세요 : ";
	cin >> newPrice;
	(*p).setPrice(newPrice);
	do{
		cout << endl;
		(*p).newMenu();//포인터 p로 객체 beverage의 멤버함수 호출;
		cout << "번호를 선택해주세요 : ";
		cin >> opt;
	
		if (opt == 1) {
			cout << "구매할 수량을 입력해주세요 : ";
			cin >> num;
			(*p).setTotal(700*num);
		}
		if (opt == 2) {
			cout << "구매할 수량을 입력해주세요 : ";
			cin >> num;
			(*p).setTotal(400*num);
		}
		if (opt == 3) {
			cout << "구매할 수량을 입력해주세요 : ";
			cin >> num;
			(*p).setTotal(1400*num);
		}
		if (opt == 4) {
			cout << "구매할 수량을 입력해주세요 : ";
			cin >> num;
			a = (*p).getPrice();
			(*p).setTotal(a*num);
		}
	}while(opt != 5);

	cout << endl<<"계산 중입니다. 기다려주세요 . . . " << endl<<endl;
	
	b = (*p).getTotal();

	cout << "총금액 : " << b << endl;
	
	(*p).purchase(b);
}

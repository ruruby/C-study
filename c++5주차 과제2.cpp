#include <iostream>
#include <string>
using namespace std;

class VendingMachine
{
private:
	string name;//���� �̸�
	int price;//����
	int total;//���� �ջ� ��
public:
	VendingMachine(); //������
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
	cout << "���� �Է��ϼ��� : ";
	do {
		cin >> input;
		if (input < v1) {
			cout << "�ݾ��� �����մϴ�. �ٽ� �־��ּ���.";
		}
	} while (input < v1);
	cout << "�Ž������Դϴ�"<<endl;
	if (input == v1){
		cout << "�Ž������� �����ϴ�. �ȳ���������";
	}
	else if (input > v1) {
		if (input % 100 != 0) {
			cout << "�Ž������� 500���� 100���� �����մϴ�" << endl;
		}
		d = input - v1;
		e = d % 500;
		cout << "500�� : " << (int)(input - v1) / 500<< "��"<<endl;
		cout << "100�� : " << e / 100 << "��" << endl;
		cout << "�ȳ���������.";
	}

}
void VendingMachine::menu() {
	cout << "====SWING ���Ǳ�====" << endl;
	cout << "1.������ : 700��" << endl;
	cout << "2.��Ƽ : 400��" << endl;
	cout << "3.�ٳ��� ���� : 1400��" << endl;
	cout << "4.�غ���" << endl;
	cout << "5.���" << endl<<endl;
}
void VendingMachine::newMenu() {
	cout << "====SWING ���Ǳ�====" << endl;
	cout << "1.������ : 700��" << endl;
	cout << "2.��Ƽ : 400��" << endl;
	cout << "3.�ٳ��� ���� : 1400��" << endl;
	cout << "4." <<name<<" : "<<price<<"��"<< endl;
	cout << "5.���" << endl;
}


int main() {
	string newName = " ";
	int newPrice = 0;
	int opt, num, a, b;
	VendingMachine beverage;//beverage��� �̸��� ��ü ����
	beverage.menu();//�޴��� ���
	
	VendingMachine *p = &beverage;//������ p ���� �� beverage ��ü�� �ּ� ����

	cout << "�߰��� ������ �̸��� �Է����ּ��� : ";
	getline(cin, newName);//�߰��� ������ �̸� ���ڿ� newName�� ����
	p->setName(newName);
	cout << "�Ǹ��� ������ �Է��ϼ��� : ";
	cin >> newPrice;
	(*p).setPrice(newPrice);
	do{
		cout << endl;
		(*p).newMenu();//������ p�� ��ü beverage�� ����Լ� ȣ��;
		cout << "��ȣ�� �������ּ��� : ";
		cin >> opt;
	
		if (opt == 1) {
			cout << "������ ������ �Է����ּ��� : ";
			cin >> num;
			(*p).setTotal(700*num);
		}
		if (opt == 2) {
			cout << "������ ������ �Է����ּ��� : ";
			cin >> num;
			(*p).setTotal(400*num);
		}
		if (opt == 3) {
			cout << "������ ������ �Է����ּ��� : ";
			cin >> num;
			(*p).setTotal(1400*num);
		}
		if (opt == 4) {
			cout << "������ ������ �Է����ּ��� : ";
			cin >> num;
			a = (*p).getPrice();
			(*p).setTotal(a*num);
		}
	}while(opt != 5);

	cout << endl<<"��� ���Դϴ�. ��ٷ��ּ��� . . . " << endl<<endl;
	
	b = (*p).getTotal();

	cout << "�ѱݾ� : " << b << endl;
	
	(*p).purchase(b);
}
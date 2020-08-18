#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class kiosk {
private:
	char choice=' ';
	vector<string> burger = { "�������","�Ұ�����","���̹���","��ġ�����" };
	vector<int> bprice = { 4300, 4500, 4700, 4900 };
	vector<string> side = { "ġ�ƽ","����Ƣ��","������","���̽�ũ��" };
	vector<int> sprice = { 1500, 1000, 1500, 700 };
	vector<string> drink = { "���̴�","�ݶ�","ȯŸ","�������ֽ�" };
	int dprice = 1000;
	vector<string> total = { "�� �ֹ� �޴�" };
	vector<int> total_num = {};
	ofstream writeFile;

public:
	kiosk() {};
	int border, sorder, dorder;
	int b, s, d;
	int cnt = 0;
	int totalprice = 0;
	char *p = &choice;
	void getburger();
	void getside();
	void getdrink();
	void select(int a) {};
	void cleartotal(){ total.clear(); }
	void receipt();
	~kiosk() {};
};

void kiosk::getburger() {
	string temp;
	for (int i = 0; i < 4; i++) {
		cout << i + 1 << ". " << burger[i] << "(" << bprice[i] << ")" << endl;
		}
		cout << endl<<endl<<"�ֹ��� ������ ��ȣ�� ������ �Է����ּ���\nex>������� 2�� : 1 2" << endl;
		do{
			cin >> border >> b;
		if (border != 1 && border != 2 && border != 3 && border != 4) {
			cout << "�������� �ʴ� �޴��� �����ϼ̽��ϴ�\n�ٽ� ������ �ֽʽÿ�" << endl;
		}
	} while (border != 1 && border != 2 && border != 3 && border != 4);
	temp=burger.at(border-1);
	total.push_back(temp);
	total_num.push_back(b);
	totalprice += b * bprice[border-1];
	cnt++;
	
	cout << burger[border - 1] << " " << b << "���� �ֹ��Ǿ����ϴ�" << endl;
	cout << "��� �����Ͻðڽ��ϱ�?(y,n)" << endl;
	cin >> choice;
}

void kiosk::getside() {
	string temp;
		for (int i = 0; i < 4; i++) {
			cout << i + 1 << ". " << side[i] << "(" << sprice[i] << ")" << endl;
		}
		cout << endl<< "�ֹ��� ���̵��� ��ȣ�� ������ �Է����ּ���\nex>ġ�ƽ 2�� : 1 2" << endl;
		do{
			cin >> sorder >> s;
		if (sorder != 1 && sorder != 2 && sorder != 3 && sorder != 4) {
			cout << "�������� �ʴ� �޴��� �����ϼ̽��ϴ�\n�ٽ� ������ �ֽʽÿ�" << endl;
		}
	} while (sorder != 1 && sorder != 2 && sorder != 3 && sorder != 4);
	temp = side.at(sorder - 1);
	total.push_back(temp);
	total_num.push_back(s);
	totalprice += s * sprice[sorder - 1];
	cnt++;

	cout << side[sorder - 1] << " " << s << "���� �ֹ��Ǿ����ϴ�" << endl;
	cout << "��� �����Ͻðڽ��ϱ�?(y,n)" << endl;
	cin >> choice;
}

void kiosk::getdrink() {
	string temp;
		for (int i = 0; i < 4; i++) {
			cout << i + 1 << ". " << drink[i] << "(" << dprice << ")" << endl;
		}
		cout << endl<<"�ֹ��� ������ ��ȣ�� ������ �Է����ּ���\nex>���̴� 2�� : 1 2" << endl;
		do{
			cin >> dorder >> d;
		if (dorder != 1 && dorder != 2 && dorder != 3 && dorder != 4) {
			cout << "�������� �ʴ� �޴��� �����ϼ̽��ϴ�\n�ٽ� ������ �ֽʽÿ�" << endl;
		}
	} while (dorder != 1 && dorder != 2 && dorder != 3 && dorder != 4);
	temp = drink.at(dorder - 1);
	total.push_back(temp);
	total_num.push_back(d);
	totalprice += d * dprice;
	cnt++;

	cout << drink[dorder - 1] << " " << d << "���� �ֹ��Ǿ����ϴ�" << endl;
	cout << "��� �����Ͻðڽ��ϱ�?(y,n)" << endl;
	cin >> choice;
}

void kiosk::receipt() {
	writeFile.open("receipt.txt");
	writeFile<<"======������======"<<endl;
	
	for (int i = 0; i < cnt; i++) {
		string menu = total[i];
		writeFile.write(menu.c_str(), menu.size());
		writeFile << " "<<total_num[i];
		char arr[3] = "��";
		writeFile.write(arr, 2);
		writeFile << endl;
	}
	writeFile<<"================="<<endl<<"�� ���� : "<<totalprice<<endl << "�����մϴ�." << endl;
		writeFile.close();
	cout << "�������� ��µǾ����ϴ�" << endl;
}

int main() {
	kiosk a;
	a.cleartotal();
	int pick=1;
	do {	
		do{
			if (pick == 1 || pick == 2 || pick == 3) {
				cout << "====== �޴� �з� ======" << endl;
				cout << "1. �ܹ���\n2. ���̵�\n3. ����" << endl;
				cout << "=======================" << endl << endl << "����� �����Ͻðڽ��ϱ�? ";
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
				cout << "�������� �ʴ� �з��� �����ϼ̽��ϴ�\n�ٽ� ������ �ֽʽÿ�" << endl;
				break;
			}
		} while (*(a.p)== 'y');
	} while (pick != 1 && pick!=2 && pick!=3);
	a.receipt();
}
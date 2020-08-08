#include <iostream>
#include <string>
#include <vector>
using namespace std;

class kiosk {
private:
	char choice=' ';
	vector<string> burger = { "�������","�Ұ�����","���̹���","��ġ�����" };
	vector<string> side = { "ġ�ƽ","����Ƣ��","������","���̽�ũ��" };
	vector<string> drink = { "���̴�","�ݶ�","ȯŸ","�������ֽ�" };

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
	for (int i = 0; i < 4; i++) {
		cout <<i+1<<". "<< burger[i] << endl;
		}
		cout << endl<<endl<<"�ֹ��� ������ ��ȣ�� ������ �Է����ּ���\nex>������� 2�� : 1 2" << endl;
		do{
			cin >> order >> n;
		if (order != 1 && order != 2 && order != 3 && order != 4) {
			cout << "�������� �ʴ� �޴��� �����ϼ̽��ϴ�\n�ٽ� ������ �ֽʽÿ�" << endl;
		}
	} while (order != 1 && order != 2 && order != 3 && order != 4);
	cout << burger[order - 1] << " " << n << "���� �ֹ��Ǿ����ϴ�" << endl;
	cout << "��� �����Ͻðڽ��ϱ�?(y or �������� �ƹ�Ű�� �����ּ���)" << endl;
	cin >> choice;
}

void kiosk::getside() {
		for (int i = 0; i < 4; i++) {
			cout << i + 1 << ". " << side[i] << endl;
		}
		cout << "�ֹ��� ���̵��� ��ȣ�� ������ �Է����ּ���\nex>ġ�ƽ 2�� : 1 2" << endl;
		do{
			cin >> order >> n;
		if (order != 1 && order != 2 && order != 3 && order != 4) {
			cout << "�������� �ʴ� �޴��� �����ϼ̽��ϴ�\n�ٽ� ������ �ֽʽÿ�" << endl;
		}
	} while (order != 1 && order != 2 && order != 3 && order != 4);
	cout << side[order - 1] << " " << n << "���� �ֹ��Ǿ����ϴ�" << endl;
	cout << "��� �����Ͻðڽ��ϱ�?(y or �������� �ƹ�Ű�� �����ּ���)" << endl;
	cin >> choice;
}

void kiosk::getdrink() {
		for (int i = 0; i < 4; i++) {
			cout << i + 1 << ". " << drink[i] << endl;
		}
		cout << "�ֹ��� ������ ��ȣ�� ������ �Է����ּ���\nex>���̴� 2�� : 1 2" << endl;
		do{
			cin >> order >> n;
		if (order != 1 && order != 2 && order != 3 && order != 4) {
			cout << "�������� �ʴ� �޴��� �����ϼ̽��ϴ�\n�ٽ� ������ �ֽʽÿ�" << endl;
		}
	} while (order != 1 && order != 2 && order != 3 && order != 4);
	cout << drink[order - 1] << " " << n << "���� �ֹ��Ǿ����ϴ�" << endl;
	cout << "��� �����Ͻðڽ��ϱ�?(y or �������� �ƹ�Ű�� �����ּ���)" << endl;
	cin >> choice;
}

int main() {
	kiosk a;
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
}
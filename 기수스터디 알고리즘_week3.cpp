#include <iostream>
using namespace std;

void solution(int m, int d) {
	int con;//1�� 1�Ϻ��� ����ڰ� �Է��� ��¥������ ���� ��
	int n = 0;//����ڰ� �Է��� ���� ���� �ޱ����� �߰� �ϼ��� ���ϱ� ���� ����(index�� ���)
	int month[] = { 2,0,2,1,2,1,2,2,1,2,1,2 };/*1������ 12������ ������ ���� ������ �ϼ��ϱ� ���� 
											  29�Ͽ��� ���ؾ��ϴ� ���� �� ������� �迭*/
	if (month[m] + 29 < d) {//����ڰ� �Է��� ��¥�� �ش� ���� ���� ������ ���� ��� �������� �ʴ� ������ �˷���
		cout << "������ �����ϴ� ���� �ƴմϴ�";
	}
	else {//����ڰ� ������ �����ϴ� ��¥�� �Է��� ���
		for (int i = 0; i < m - 1; i++) {//(����ڰ� �Է��� ��-1)�ޱ����� �߰� ��¥���� ��� ����
			n += month[i];
		}
		con = (m - 1) * 29 + n + d;//(����ڰ� �Է��� ��-1)*29+(�߰���¥���� ��)+(����ڰ� �Է��� ���� ��)
		switch (con % 7) {//�Է����� ��¥�� 1�� 1���� �����ؼ� ���° ������ ���� con�� ������ ���� ���� ���� Ȯ�ΰ���
		case 0:
			cout << "THU";
			break;
		case 1:
			cout << "FRI";
			break;
		case 2:
			cout << "SAT";
			break;
		case 3:
			cout << "SUN";
			break;
		case 4:
			cout << "MON";
			break;
		case 5:
			cout << "TUE";
			break;
		case 6:
			cout << "WED";
			break;
		}
	}
}

int main() {
	int a, b;
	cout << "2016�� a�� b���� ���� �����ϱ��? " << endl;
	cout << "a : ";
	cin >> a;
	cout << "b : ";
	cin >> b;
	solution(a, b);
}
#include <iostream>;
using namespace std;

int even(int a);//��ȯ���� �������� even �Լ� ����
int odd(int a);//��ȯ���� �������� odd �Լ� ����
int n1, n2;

int even(int a)
{
	if (a % 2 == 0) {
		cout << a<<" ";
		n1++;
	}
	return 0;
}

int odd(int a)
{
	if (a % 2 == 1) {
		cout << a<<" ";
		n2++;
	}
	return 0;
}

	int main()
	{
		int i;
		int a[5] = { 0 };

		for (i = 0; i < 5; i++) {
			cout << "���ڸ� �Է����ּ���: ";
			cin >> a[i];
		}

		cout << "\n\n";
		cout << "--------���--------" << endl;
		cout << "Ȧ��:";
		for (i = 0; i < 5; i++)
			odd(a[i]);
		cout << "\n";
		cout << "Ȧ���� �� " << n2 << "�� �Դϴ�."<<endl;
		
		cout << "¦��:";
		for (i = 0; i < 5; i++)
			even(a[i]);
		cout << "\n";
		cout << "¦���� �� " << n1 << "�� �Դϴ�.";
	}
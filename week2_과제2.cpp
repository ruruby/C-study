#include <iostream>
using namespace std;
int main()
{
	int opt;//����� ���� ���
	int n;//case 1������ ���� ����
	int i, j, k;/*i:���� ����, j:���� ����, k:���鹮�� ���� */

	int n2;/*case 2������ ���� ����*/

	int n3;/*case 3������ ���� ����*/
	do
	{
		cout << "--------�� ��� �ý���--------" << endl;
		cout << "����� ���� ����� �������ּ���." << endl;
		cout << "1. �����ﰢ��\n2. ���ﰢ��\n3. ����\n4. ������" << endl;
		cin >> opt;//���� opt�� ��������� �ش��ϴ� ���� ���� �� switch case���� �̿��Ѵ�.
		cout << "\n";

		switch (opt) {
		case 1:
			cout << "�����ﰢ���� �����ϼ̽��ϴ�." << endl;
			cout << "���� ������ �������ּ���." << endl;
			cin >> n;

			cout << "\n";

			for (i = 0; i < n; i++) {/*i�� 0���� n-1���� �ݺ��ǹǷ� �� n���� �ݺ��ȴ�.*/
				for (k = 0; k < n - i; k++) {/*(��ü �࿡�� �������� ���� ��°���� �� ��)-1��ŭ ���鹮�� ����ش�.*/
					cout << " ";
				}
				for (j = 0; j <= i; j++) {/*�������� ���� ��°�� ��ŭ *�� ����ش�.*/
					cout << "*";
				}
				cout << "\n";/*�� �� �Է��� ������ �ٹٲ��ش�.*/
			}

			cout << "\n";

			for (i = n; i > 0; i--) {/*i�� ���� ������ �����ִµ� �� ��翡���� ���� �ϳ��� �پ��� ������
									 i�� 1�� �پ���*/
				for (j = 0; j < i; j++) {
					cout << "*";
				}
				cout << "\n";
			}

			cout << "\n";

			for (i = n; i > 0; i--) {
				for (k = 0; k < n - i; k++)
					cout << " ";
				for (j = i; j > 0; j--)
					cout << "*";
				cout << "\n";
			}
			break;
		case 2:
			cout << "���ﰢ���� �����ϼ̽��ϴ�." << endl;
			cout << "���� ������ �������ּ���." << endl;
			cin >> n2;

			for (i = 0; i < n2; i++) {//n���� �ٷ� ����Ѵ�.
				for (k = n2 - 1; k > i; k--)//���鹮��
					cout << " ";
				for (j = 0; j < 2 * i + 1; j++)
					cout << "*";
				cout << "\n";
			}
			break;
		case 3:
			cout << "���� �����ϼ̽��ϴ�." << endl;
			one:
			cout << "Ȧ���� �Է����ּ���:";
			cin >> n3;
			if (n3 % 2 == 0)
				goto one;
			else
				for (i = 1; i < n3 / 2 + 1; i++) {//���߾� �ٱ��� ������ش�.
					for (j = 1; j <= i; j++)//j�� �ݺ�Ƚ���� ���� ������ ��ġ�Ѵ�.
						cout << "*";
					for (k = 1; k <= n3 - 2 * i; k++)
						cout << " ";
					for (j = 1; j <= i; j++)
						cout << "*";
					cout << "\n";
				}
			for (j = 1; j <= n3; j++)
				cout << "*";
			cout << "\n";
			for (i = n3 / 2; i >= 1; i--) {
				for (j = 1; j <= i; j++)
					cout << "*";
				for (k = 1; k <= n3 - 2 * i; k++)
					cout << " ";
				for (j = 1; j <= i; j++)
					cout << "*";
				cout << "\n";
			}
			break;
		case 4:
			cout << "�����⸦ �����ϼ̽��ϴ�.\n�����մϴ�.";
		default:
			break;
		}
	} while (opt != 4);
}
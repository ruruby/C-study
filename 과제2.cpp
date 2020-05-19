#include <iostream>
using namespace std;
int main()
{
	int opt;//만들고 싶은 모양
	int n;//case 1에서의 행의 개수
	int i, j, k;/*i:행의 개수, j:별의 개수, k:공백문자 개수 */

	int n2;/*case 2에서의 행의 개수*/

	int n3;/*case 3에서의 행의 개수*/
	do
	{
		cout << "--------별 찍기 시스템--------" << endl;
		cout << "만들고 싶은 모양을 선택해주세요." << endl;
		cout << "1. 직각삼각형\n2. 정삼각형\n3. 나비\n4. 나가기" << endl;
		cin >> opt;//변수 opt에 모양종류에 해당하는 정수 저장 후 switch case문에 이용한다.
		cout << "\n";

		switch (opt) {
		case 1:
			cout << "직각삼각형을 선택하셨습니다." << endl;
			cout << "행의 개수를 선택해주세요." << endl;
			cin >> n;

			cout << "\n";

			for (i = 0; i < n; i++) {/*i는 0부터 n-1까지 반복되므로 총 n번이 반복된다.*/
				for (k = 0; k < n - i; k++) {/*(전체 행에서 진행중인 행의 번째수를 뺀 수)-1만큼 공백문자 찍어준다.*/
					cout << " ";
				}
				for (j = 0; j <= i; j++) {/*진행중인 행의 번째수 만큼 *을 찍어준다.*/
					cout << "*";
				}
				cout << "\n";/*한 줄 입력이 끝나면 줄바꿔준다.*/
			}

			cout << "\n";

			for (i = n; i > 0; i--) {/*i는 별의 개수와 관련있는데 이 모양에서는 별이 하나씩 줄어들기 때문에
									 i도 1씩 줄어든다*/
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
			cout << "정삼각형을 선택하셨습니다." << endl;
			cout << "행의 개수를 선택해주세요." << endl;
			cin >> n2;

			for (i = 0; i < n2; i++) {//n개의 줄로 출력한다.
				for (k = n2 - 1; k > i; k--)//공백문자
					cout << " ";
				for (j = 0; j < 2 * i + 1; j++)
					cout << "*";
				cout << "\n";
			}
			break;
		case 3:
			cout << "나비를 선택하셨습니다." << endl;
			one:
			cout << "홀수를 입력해주세요:";
			cin >> n3;
			if (n3 % 2 == 0)
				goto one;
			else
				for (i = 1; i < n3 / 2 + 1; i++) {//정중앙 줄까지 출력해준다.
					for (j = 1; j <= i; j++)//j의 반복횟수는 줄의 순서와 일치한다.
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
			cout << "나가기를 선택하셨습니다.\n감사합니다.";
		default:
			break;
		}
	} while (opt != 4);
}
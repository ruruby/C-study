#include <iostream>;
using namespace std;

int even(int a);//반환값이 정수형인 even 함수 선언
int odd(int a);//반환값이 정수형인 odd 함수 선언
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
			cout << "숫자를 입력해주세요: ";
			cin >> a[i];
		}

		cout << "\n\n";
		cout << "--------결과--------" << endl;
		cout << "홀수:";
		for (i = 0; i < 5; i++)
			odd(a[i]);
		cout << "\n";
		cout << "홀수는 총 " << n2 << "개 입니다."<<endl;
		
		cout << "짝수:";
		for (i = 0; i < 5; i++)
			even(a[i]);
		cout << "\n";
		cout << "짝수는 총 " << n1 << "개 입니다.";
	}
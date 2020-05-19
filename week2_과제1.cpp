#include <iostream>;
using namespace std;

int even(int a);//반환값이 정수형인 even 함수 선언
int odd(int a);//반환값이 정수형인 odd 함수 선언
int n1, n2;//n1:짝수의 개수,n2:홀수의 개수

int even(int a)//짝수만 출력하는 함수
{
	if (a % 2 == 0) {//2로 나누었을 때 나머지가 0이면 짝수.
		cout << a<<" ";
		n1++;
	}
	return 0;
}

int odd(int a)//홀수만 출력하는 함수
{
	if (a % 2 == 1) {//2로 나누었을 때 나머지가 1이면 홀수.
		cout << a<<" ";
		n2++;
	}
	return 0;
}

	int main()
	{
		int i;//반복문 위한 변수선언
		int a[5] = { 0 };//5개의 숫자를 배열할 것이므로 정수형 배열 a[5]선언.

		for (i = 0; i < 5; i++) {
			cout << "숫자를 입력해주세요: ";
			cin >> a[i];//a[0]~a[4]배열에 하나씩 입력받음.
		}

		cout << "\n\n";
		cout << "--------결과--------" << endl;
		cout << "홀수:";
		for (i = 0; i < 5; i++)
			odd(a[i]);//홀수만 출력하는 함수 odd 실행.
		cout << "\n";
		cout << "홀수는 총 " << n2 << "개 입니다."<<endl;
		
		cout << "짝수:";
		for (i = 0; i < 5; i++)
			even(a[i]);//짝수만 출력하는 함수 even 실행.
		cout << "\n";
		cout << "짝수는 총 " << n1 << "개 입니다.";
	}

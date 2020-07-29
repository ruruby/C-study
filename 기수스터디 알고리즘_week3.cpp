#include <iostream>
using namespace std;

void solution(int m, int d) {
	int con;//1월 1일부터 사용자가 입력한 날짜까지의 날의 수
	int n = 0;//사용자가 입력한 달의 이전 달까지의 추가 일수를 더하기 위한 변수(index로 사용)
	int month[] = { 2,0,2,1,2,1,2,2,1,2,1,2 };/*1월부터 12월까지 각각의 달의 날수를 완성하기 위해 
											  29일에서 더해야하는 날의 수 순서대로 배열*/
	if (month[m] + 29 < d) {//사용자가 입력한 날짜가 해당 달의 날의 수보다 작은 경우 존재하지 않는 날임을 알려줌
		cout << "실제로 존재하는 날이 아닙니다";
	}
	else {//사용자가 실제로 존재하는 날짜를 입력한 경우
		for (int i = 0; i < m - 1; i++) {//(사용자가 입력한 달-1)달까지의 추가 날짜들을 모두 더함
			n += month[i];
		}
		con = (m - 1) * 29 + n + d;//(사용자가 입력한 달-1)*29+(추가날짜들의 합)+(사용자가 입력한 일의 수)
		switch (con % 7) {//입력해준 날짜가 1월 1일을 포함해서 몇번째 날인지 구한 con에 나머지 값에 따라 요일 확인가능
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
	cout << "2016년 a월 b일은 무슨 요일일까요? " << endl;
	cout << "a : ";
	cin >> a;
	cout << "b : ";
	cin >> b;
	solution(a, b);
}
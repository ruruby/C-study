#include <iostream>
#include <cstdlib>//seed값을 설정해서 랜덤한 수를 뽑아주는 srand함수와 이를 출력하는 rand함수를 담고 있는 헤더파일
#include <ctime>//항상 변화하는 숫자를 얻을 수 있는 time함수를 담고 있는 헤더파일
using namespace std;

class Random {//랜덤한 수를 발생시키는 Random이라는 이름의 클래스를 생성
	public:
		      //코드 짤 때 범위를 정해준 후 랜덤한 정수를 출력할 것이기 때문에 매개변수가 필요 없다
	Random();//매개 변수 없는 생성자
	int next();//정수를 리턴 값으로 갖는 멤버함수인 next 함수 선언
	int nextInRange(int x, int y);//정수를 리턴값으로 갖고 두가지 정수 변수를 갖는 nextInRange 함수 선언
};

Random::Random() {//생성자 함수 Random()구현
	srand((unsigned)time(0));/*time함수에 원래 시간을 넣어주면 경과시간을 알려주는 함수이지만 'NULL'이나 '0'을 넣어주면
							 1970년 1월 1일을 기준으로 경과된 시간을 초 단위로 반환하기 때문에 (매 순간 변화)
							 항상 다른 수가 출력된다. srand함수가 seed값에 따라 랜덤한 수를 뽑아주기 때문에 랜덤한 seed값으로
							 매순간 다른 값이 출력되는 time(0)함수를 사용하는 것이다.(시간을 표현할 때 음수를 사용하지 않기 때문에
							 이를 나타내는 unsigned라는 문법적 용어를 사용한 것이다.)*/
}
int Random::next() {//0부터 RAND_MAX를 범위로 하는 next 함수 선언(int값이 리턴된다)
	return rand()%((RAND_MAX)+1);//RAND_MAX는 rand함수로 반환될 수 있는 수의 최대값으로 32767을 그 값으로 갖는다
}
int Random::nextInRange(int x, int y) {//정수 x에서 y까지를 범위로 랜덤으로 뽑는 nextInRange함수 선언(int 값이 리턴된다)
	return rand() % (y - x + 1) + x;/*'%'는 나머지를 도출하는 연산자이므로 0부터 (뒤에 나눠주는 정수-1)까지의 값만을 답으로 갖는다.
									 이를 이용하여 0부터 n까지의 랜덤한 값을 구할 때는 (랜덤한 수)%(n+1)를 활용한다
									 nextInRange 함수는 x부터 y까지가 그 범위이기 때문에 
									 x와 y이의 차이에서 1더한 것으로 랜덤한 수를 나눠서 0부터 y-x까지의 수를 뽑고 x를 더해 
									 x에서 y까지의 수가 최종결과로 나오게 하는 것이다.*/
}
int main() {
	Random r;//매개변수 없는 기본 생성자 r 생성
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10개 --" << endl;//0부터 32767까지의 값 중에 랜덤으로 10개를 뽑는다
	for (int i = 0; i < 10; i++)//10개를 뽑는 것이니 반복문으로 랜덤한 수를 뽑는 함수를 10번 반복하여 랜덤한 수를 뽑아준다.
	{
		int nRandom = r.next();//생성자 r의 매개함수인 next()로 랜덤으로 값을 뽑아 nRandom이라는 정수형 변수에 넣어 출력해준다
		cout << nRandom << " ";
	}
	cout << endl << endl << "-- 2에서 " << "4까지의 랜덤 정수 10개 --" << endl;//2에서 4로 범위를 지정해준 후 랜덤함수로 수를 뽑아준다.
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2,4);/*(랜덤한 수)%(4-2+1)+2가 되겠다. 즉, 3으로 나눈 나머지인 0부터 2까지를 무작위로 뽑아준 뒤 
								   2를 더해 2부터 4까지의 수를 랜덤으로 뽑은 것처럼 되는 것이다*/
		cout << n << " ";
	}
	cout << endl;
}



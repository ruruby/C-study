#include <iostream>
using namespace std;
int main()
{
	int i, k;
	for (i = 0; i < 5; i++) {/*5줄이니까 5번 반복*/
		for (k = 0; k <= i; k++){/*다음 줄로 갈 때마다 *이 하나씩 늘어나므로 1씩 증가하는 반복횟수*/
			cout << "*";
	}
		cout << "\n";//i가 1씩 증가할 때마다 줄 바뀌어야 하기 때문에 i 관련 for문 반복할 문장에 공백문자 넣어준다.
	}
}

#include <iostream>
using namespace std;

void sort(int* arr) {//배열을 바꾸는 함수이므로 배열의 주소인 arr을 알려준다
	int i, j, temp;//배열의 기준점, 기준점의 우측에 있는 것들, 자리 바꾸기 위해 임시 사용을 위한 변수를 선언한다.
	for (i = 0; i < 5; i++) {//배열의 왼쪽부터 차례로 기준점으로 두고 비교하기 시작한다.
		for (j = i + 1; j < 5; j++) {//기준점의 우측에 배열되어 있는 것들을 하나씩 비교한다
			if (arr[i] > arr[j]) {//기준점이 우측에 있는 값보다 클 경우
				temp = arr[i];//기준점을 임시변수에 담아준다
				arr[i] = arr[j];//우측에 있는 값을 기준점에 담아준다
				arr[j] = temp;//임시변수에 담았던 기준점의 값을 우측 배열 위치에 넣어준다.
			}
		}
	}
}

void print(int* q) {//주소값을 알려줘서 함수를 구현한다
	int i;//반복문을 위한 변수를 선언한다 
	for (i = 0; i < 5; i++) {
		cout << i + 1 << ". " << q[i] << endl;//배열 num을 순서대로 순서와 함께 출력해준다
	}

}
int main() {
	int num[5];
	cout << "숫자 다섯 개를 입력해주세요 (띄어쓰기로 구분) << ";
	cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4];//띄어쓰기로 구분해 값을 받는다
	cout << endl;
	cout << "< 정렬 전 > " << endl << endl;
	print(num);//print함수에 주소값을 넣어줘야 하는데 num은 배열이므로 배열의 이름 자체가 주소를 의미한다
	
	sort(num);//sort함수를 사용한다
	
	cout << endl << "< 정렬 후 > " << endl << endl;
	print(num);//sort함수로 변화된 배열 num을 출력해준다
	}

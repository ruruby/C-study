#include <iostream>
using namespace std;

void sort(int* arr) {//배열을 바꾸는 함수이므로 배열의 주소인 arr을 알려준다
	int size = 5;//num 배열의 크기이다
	int i, temp[5];//배열을 변화하기 위해 사용할 반복문에 필요한 변수 i와 임시적으로 담을 배열인 temp[5](num배열의 크기와 사이즈 동일)를 선언해준다.
	for (i = 0; i < size; i++) {
		temp[4-i] = arr[i];//배열temp[5]에 입력받을 배열의 순서와 반대로 값을 넣어준다
	}
	for (i = 0; i < size; i++) {
		arr[i] = temp[i];//반대로 입력받은 배열과 동일하게 원래 배열에 값을 넣어준다
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
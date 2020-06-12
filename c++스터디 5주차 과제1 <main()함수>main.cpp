#include <iostream>
#include <string>
using namespace std;

#include "Class.h"

int main() {
	string n = " ";//문자열 초기화
	string p = "000-0000-0000";//문자열 초기화
	string w = " ";//문자열 초기화
	int opt;//조건별 분기 위한 변수
	Person info;//Person 클래스의 객체 info 생성
	cout << "--- swing 전화번호부 ---" << endl << "이름을 입력해 주세요 >>";
	getline(cin, n);//이름 입력받음(잠시 n에 저장한 후 필요할 때 멤버변수 name에 저장할 것)
	cout << "전화번호를 입력해 주세요 >>";
	info.addPhone(p);//객체 info의 멤버함수 호출

	do {
		cout << endl << "1. 최신 등록 전화번호 조회\n" << "2. 최신 등록 전화번호 수정\n" << "3. 종료 >>";
		cin >> opt;//조건 선택 받는다
		if (opt == 1) {//1선택
			cout << info.getName(n);//객체 info의 멤버함수 호출해서 출력
			cout << "::";
			cout << info.getPnum() << endl;//객체 info의 멤버함수 호출해서 출력
		}
		else if (opt == 2) {//2선택
			cout << "\n이름을 입력해 주세요 >> ";
			getchar();
			do {
				getline(cin, w);
				if ((info.getName(n)).compare(w) == 0) {//객체 info의 멤버함수로 n을 객체 info의 멤버변수인 name에 저장 후 비교했을 때 w와 같을 경우
					cout << "변경할 전화번호를 입력해 주세요 >> ";
					info.editPhone(p);//객체 info의 멤버함수 호출해서 번호 수정
					cout << endl;
				}
				else {
					cout << "연락처가 존재하지 않습니다 다시 입력해 주세요 >> ";//객체 info의 멤버변수 name과 w가 같지 않을 경우 다시 do~while문 시작으로 간다
				}
			} while ((info.getName(n)).compare(w) != 0);//객체 info의 멤버변수 name과 w가 같지 않을 동안 계속 do ~ while문 qksqhr
		}
		else
			continue;//1,2,3외에 다른 선택 시 무한 히 선택지 제시(do~while문으로 돌아간다)
	} while (opt != 3);//3을 선택할 시 do~while문 종료->최종 프로그램 종료
}

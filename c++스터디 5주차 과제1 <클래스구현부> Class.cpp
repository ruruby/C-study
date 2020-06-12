#include <iostream>
#include <string>
using namespace std;

#include "Class.h"

Person::Person() {
	name = " "; phone = "000-0000-0000";//멤버 변수 문자열 초기화
}

void Person::addPhone(string p) {//번호 최초 입력->return 값 필요없고 저장만 하면 되니 함수의 리턴타입은 void
	getline(cin, phone);//멤버변수 phone에 입력받은 문자열 저장
}
void Person::editPhone(string p) {//번호 수정->return 값 필요없고 저장만 하면 되니 함수의 리턴타입은 void
	getline(cin, phone);//멤버변수 phone에 수정 입력받은 문자열 저장
}
string Person::getPnum() {//출력 문자열로 해야하니 함수의 리턴타입은 string
	return phone;//phone문자열 main함수에 리턴
}
string Person::getName(string n) {//출력 문자열로 해야하니 함수의 리턴타입은 string
	name = n;//main함수 상의 문자열 n을 문자열 name에 담는다
	return name;//name문자열 main함수에 리턴
}

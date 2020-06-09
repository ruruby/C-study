#ifndef PERSON_H
#define PERSON_H

class Person {
private:
	string name;
	string phone;//멤버 변수인 이름, 번호

public:
	Person();
	void addPhone(string p);//멤버 함수(처음에 번호를 추가)
	void editPhone(string p);//	     (번호를 수정)
	string getPnum(); //(번호를 출력)
	string getName(string n);//	(이름을 출력)
}; 

#endif
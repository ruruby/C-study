#ifndef PERSON_H
#define PERSON_H

class Person {
private:
	string name;
	string phone;//��� ������ �̸�, ��ȣ

public:
	Person();
	void addPhone(string p);//��� �Լ�(ó���� ��ȣ�� �߰�)
	void editPhone(string p);//	     (��ȣ�� ����)
	string getPnum(); //(��ȣ�� ���)
	string getName(string n);//	(�̸��� ���)
}; 

#endif
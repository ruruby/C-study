#include <iostream>
using namespace std;

void sort(int* arr) {//�迭�� �ٲٴ� �Լ��̹Ƿ� �迭�� �ּ��� arr�� �˷��ش�
	int size = 5;//num �迭�� ũ���̴�
	int i, temp[5];//�迭�� ��ȭ�ϱ� ���� ����� �ݺ����� �ʿ��� ���� i�� �ӽ������� ���� �迭�� temp[5](num�迭�� ũ��� ������ ����)�� �������ش�.
	for (i = 0; i < size; i++) {
		temp[4-i] = arr[i];//�迭temp[5]�� �Է¹��� �迭�� ������ �ݴ�� ���� �־��ش�
	}
	for (i = 0; i < size; i++) {
		arr[i] = temp[i];//�ݴ�� �Է¹��� �迭�� �����ϰ� ���� �迭�� ���� �־��ش�
	}
}

void print(int* q) {//�ּҰ��� �˷��༭ �Լ��� �����Ѵ�
	int i;//�ݺ����� ���� ������ �����Ѵ� 
	for (i = 0; i < 5; i++) {
		cout << i + 1 << ". " << q[i] << endl;//�迭 num�� ������� ������ �Բ� ������ش�
	}

}
int main() {
	int num[5];
	cout << "���� �ټ� ���� �Է����ּ��� (����� ����) << ";
	cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4];//����� ������ ���� �޴´�
	cout << endl;
	cout << "< ���� �� > " << endl << endl;
	print(num);//print�Լ��� �ּҰ��� �־���� �ϴµ� num�� �迭�̹Ƿ� �迭�� �̸� ��ü�� �ּҸ� �ǹ��Ѵ�
	
	sort(num);//sort�Լ��� ����Ѵ�
	
	cout << endl << "< ���� �� > " << endl << endl;
	print(num);//sort�Լ��� ��ȭ�� �迭 num�� ������ش�
	}
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

	int computer_score=0;
	int user_score=0;
	int count5 = 0;
	while (1) {
		count5++;
		//1. 0~5 ������ ���� �Ѱ��� �����Ѵ�. (��ǻ�Ͱ� ���� ���)
		int computer;

		computer = 1 + rand() % 5;

		cout << "��ǻ�Ͱ� ���� ���ϴ�.";
		cout << computer << endl;

		//2. ����ڰ� 1���� ���ڸ� �Է��Ѵ�. 
		int user;

		cin >> user;

		cout << "����ڰ� ���� ���� " << user << " �Դϴ�" << endl;


		//3. ����� ����Ѵ�. 


		if (computer != user) {
			computer_score++;
		}

		//4. ����� ����Ѵ�.
		cout << "��ǻ��:����� = " << computer_score << " : " << user_score << endl;

		//5.  0~5 ������ ���� �Ѱ��� �����Ѵ�. (����ڰ� ���� ���)
		computer = 1 + rand() % 5;

		cout << "��ǻ�Ͱ� ���� �����ϴ�.";
		cout << computer << endl;

		//6. ����ڰ� 1���� ���ڸ� �Է��Ѵ�. 
		cin >> user;

		cout << "����ڰ� ���� ���� " << user << " �Դϴ�" << endl;

		//7. ����� ����Ѵ�.
		if (computer != user) {
			user_score++;
		}

		//8.����� ����Ѵ�.
		cout << "��ǻ��:����� = " << computer_score << " : " << user_score << endl;


		//9. 5������ ��ȸ�� ������ ���� ����� ����ϰ� ������.
		if (count5 > 4) {
			if (computer_score != user_score) {
				if (computer_score > user_score) {
					cout << "��ǻ�Ͱ� " << computer_score << " : " << user_score << "���� �̰���ϴ�." << endl;
				}
				if (computer_score < user_score) {
					cout << "����ڰ� " << computer_score << " : " << user_score << "���� �̰���ϴ�." << endl;
				}
				break;
			}
		}
		//10. ���ºζ�� 1���� ��ȸ�� �� �ش�.

	}
	return 0;
}
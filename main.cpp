#include <iostream>
#include <stdlib.h>
using namespace std;

#define TRUE 1
#define MAX_VALUE 5
#define MINIMUM_CHANCE 4
int main() {

	int computer_score = 0;
	int user_score = 0;
	int opportunity = 0;
	while (TRUE) {
		opportunity++;
		//1. 0~5 ������ ���� �Ѱ��� �����Ѵ�. (��ǻ�Ͱ� ���� ���)
		int computer;

		computer = 1 + rand() % MAX_VALUE;

		cout << "Computer kicks a ball.";
		cout << computer << endl;

		//2. ����ڰ� 1���� ���ڸ� �Է��Ѵ�. 
		int user;

		cin >> user;



		//3. ����� ����Ѵ�. 


		if (computer != user) {
			computer_score++;
			cout << "Miss a ball." << endl;
		}
		else {
			cout << "Catch a ball." << endl;
		}

		//4. ����� ����Ѵ�.
		cout << "Computer:User = " << computer_score << " : " << user_score << endl;

		//5.  0~5 ������ ���� �Ѱ��� �����Ѵ�. (����ڰ� ���� ���)
		computer = 1 + rand() % MAX_VALUE;

		cout << "You kick a ball.";
		cout << computer << endl;

		//6. ����ڰ� 1���� ���ڸ� �Է��Ѵ�. 
		cin >> user;

		//7. ����� ����Ѵ�.
		if (computer != user) {
			user_score++;
			cout << "Get a goal." << endl;
		}
		else {
			cout << "Lose a goal." << endl;
		}

		//8.����� ����Ѵ�.
		cout << "Computer:User = " << computer_score << " : " << user_score << endl;


		//9. 5������ ��ȸ�� ������ ���� ����� ����ϰ� ������.
		if (opportunity > MINIMUM_CHANCE) {
			if (computer_score != user_score) {
				if (computer_score > user_score) {
					cout << computer_score << " : " << user_score << "  Winner is Computer." << endl;
				}
				if (computer_score < user_score) {
					cout << computer_score << " : " << user_score << "  Winner is User" << endl;
				}
				break;
			}
		}
		//10. ���ºζ�� 1���� ��ȸ�� �� �ش�.

	}
	return 0;
}
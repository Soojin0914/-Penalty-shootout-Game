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
		//1. 0~5 사이의 난수 한개를 생성한다. (컴퓨터가 차는 경우)
		int computer;

		computer = 1 + rand() % MAX_VALUE;

		cout << "Computer kicks a ball.";
		cout << computer << endl;

		//2. 사용자가 1개의 숫자를 입력한다. 
		int user;

		cin >> user;



		//3. 결과를 계산한다. 


		if (computer != user) {
			computer_score++;
			cout << "Miss a ball." << endl;
		}
		else {
			cout << "Catch a ball." << endl;
		}

		//4. 결과를 출력한다.
		cout << "Computer:User = " << computer_score << " : " << user_score << endl;

		//5.  0~5 사이의 난수 한개를 생성한다. (사용자가 차는 경우)
		computer = 1 + rand() % MAX_VALUE;

		cout << "You kick a ball.";
		cout << computer << endl;

		//6. 사용자가 1개의 숫자를 입력한다. 
		cin >> user;

		//7. 결과를 계산한다.
		if (computer != user) {
			user_score++;
			cout << "Get a goal." << endl;
		}
		else {
			cout << "Lose a goal." << endl;
		}

		//8.결과를 출력한다.
		cout << "Computer:User = " << computer_score << " : " << user_score << endl;


		//9. 5번씩의 기회가 끝나고 최종 결과를 출력하고 끝난다.
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
		//10. 무승부라면 1번씩 기회를 더 준다.

	}
	return 0;
}
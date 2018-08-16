#include <iostream>
#include <stdlib.h>
#include "Score.h"
using namespace std;

#define TRUE 1
#define MAX_VALUE 5
#define MINIMUM_CHANCE 4

int Number() {
	

	int number = 1 + rand() % MAX_VALUE;

	return number;
}

int Input() {
	int user;
	cin >> user;

	return user;
}

void ScorePrint(int computer, int user) {

	cout << "Computer:User = " << computer << " : " << user<< endl;

}

int main() {

	Score score;

	int opportunity = 0;

	while (TRUE) {
		opportunity++;

		//1. 0~5 사이의 난수 한개를 생성한다. (컴퓨터가 차는 경우)
		int computer = Number();
		cout << "Computer kicks a ball.";
		

		//2. 사용자가 1개의 숫자를 입력한다. 
		int user;
		user=Input();
	    

		//3. 결과를 계산한다. 
		if (computer != user) {
			score.computer++;
			cout << "Miss a ball." << endl;
		}
		else {
			cout << "Catch a ball." << endl;
		}

		//4. 결과를 출력한다.
		ScorePrint(score.computer, score.user);

		//5.  0~5 사이의 난수 한개를 생성한다. (사용자가 차는 경우)
		computer = Number();
		cout << "You kick a ball.";

		//6. 사용자가 1개의 숫자를 입력한다. 
		user = Input();

		//7. 결과를 계산한다.
		if (computer != user) {
			score.user++;
			cout << "Get a goal." << endl;
		}
		else {
			cout << "Lose a goal." << endl;
		}

		//8.결과를 출력한다.
		ScorePrint(score.computer, score.user);


		//9. 5번씩의 기회가 끝나고 최종 결과를 출력하고 끝난다.
		if (opportunity > MINIMUM_CHANCE) {
			if (score.computer != score.user) {
				if (score.computer > score.user) {
					ScorePrint(score.computer, score.user);
					cout << "  Winner is Computer." << endl;
				}
				else if (score.computer < score.user){
					ScorePrint(score.computer, score.user);
					cout << "  Winner is User" << endl;
				}
				break;
			}
		}
		//10. 무승부라면 1번씩 기회를 더 준다.

	}
	return 0;
}
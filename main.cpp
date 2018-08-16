#include <iostream>
#include <stdlib.h>
#include "Score.h"
using namespace std;

#define TRUE 1
#define FALSE 0
#define MAX_VALUE 5
#define MINIMUM_CHANCE 4

int Number(const char* who) {

	cout << who << " kicks a ball.";
	int number = 1 + rand() % MAX_VALUE;

	return number;
}

int Input() {
	int user;
	cin >> user;

	return user;
}

void PrintScore(const char* message, int computer, int user) {

	cout << message << endl;
	cout << "Computer:User = " << computer << " : " << user << endl;

}

int ComputerTurn(int kicker, int keeper, Score* score) {

	if (kicker != keeper) {
		score->computer++;
		PrintScore("Miss a ball.", score->computer, score->user);
	}
	else {
		PrintScore("Catch a ball.", score->computer, score->user);
	}
	return score->computer;
}

int UserTurn(int kicker, int keeper, Score* score) {
	if (kicker != keeper) {
		score->user++;
		PrintScore("Get a goal.", score->computer, score->user);
	}
	else {
		PrintScore("Lose a goal.", score->computer, score->user);
	}
	return score->user;
}

int FinalScore(int opportunity, Score* score) {
	if (opportunity > MINIMUM_CHANCE) {
		if (score->computer > score->user) {
			PrintScore("**Winner is Computer**", score->computer, score->user);
		}
		else if (score->computer < score->user) {
			PrintScore("**Winner is User**", score->computer, score->user);
		}
		return score->computer != score->user ? TRUE : FALSE;
	}
	else return FALSE;
}

int main() {

	
	Score score;

	int opportunity = 0;

	while (TRUE) {

		opportunity++;

		//1. 0~5 사이의 난수 한개를 생성한다. (컴퓨터가 차는 경우)
		int computer = Number("computer");


		//2. 사용자가 1개의 숫자를 입력한다. 
		int user = Input();


		//3. 결과를 계산한다. //4. 결과를 출력한다.
		score.computer = ComputerTurn(computer, user, &score);


		//5.  0~5 사이의 난수 한개를 생성한다. (사용자가 차는 경우)
		computer = Number("User");

		//6. 사용자가 1개의 숫자를 입력한다. 
		user = Input();

		//7. 결과를 계산한다.//8.결과를 출력한다.
		score.user = UserTurn(user, computer, &score);

		//9. 5번씩의 기회가 끝나고 최종 결과를 출력하고 끝난다.
		int finish = FinalScore(opportunity, &score);

		if (finish)
			break;

		//10. 무승부라면 1번씩 기회를 더 준다.

	}
	return 0;
}
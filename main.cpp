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

		//1. 0~5 ������ ���� �Ѱ��� �����Ѵ�. (��ǻ�Ͱ� ���� ���)
		int computer = Number("computer");


		//2. ����ڰ� 1���� ���ڸ� �Է��Ѵ�. 
		int user = Input();


		//3. ����� ����Ѵ�. //4. ����� ����Ѵ�.
		score.computer = ComputerTurn(computer, user, &score);


		//5.  0~5 ������ ���� �Ѱ��� �����Ѵ�. (����ڰ� ���� ���)
		computer = Number("User");

		//6. ����ڰ� 1���� ���ڸ� �Է��Ѵ�. 
		user = Input();

		//7. ����� ����Ѵ�.//8.����� ����Ѵ�.
		score.user = UserTurn(user, computer, &score);

		//9. 5������ ��ȸ�� ������ ���� ����� ����ϰ� ������.
		int finish = FinalScore(opportunity, &score);

		if (finish)
			break;

		//10. ���ºζ�� 1���� ��ȸ�� �� �ش�.

	}
	return 0;
}
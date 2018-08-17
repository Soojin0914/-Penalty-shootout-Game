#include "main.h"


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

void PrintScore(const char* message, int computer, int user) {

	cout << message << endl;
	cout << "Computer:User = " << computer << " : " << user << endl;

}
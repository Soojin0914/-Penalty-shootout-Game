#include "main.h"


int Score::UserTurn(int kicker, int keeper) {
	if (kicker != keeper) {
		user++;
		PrintScore("Get a goal.", computer, user);
	}
	else {
		PrintScore("Lose a goal.", computer, user);
	}
	return user;
}


int Score::ComputerTurn(int kicker, int keeper) {

	if (kicker != keeper) {
		computer++;
		PrintScore("Miss a ball.", computer,user);
	}
	else {
		PrintScore("Catch a ball.", computer, user);
	}
	return computer;
}

void PrintScore(const char* message, int computer, int user) {

	cout << message << endl;
	cout << "Computer:User = " << computer << " : " << user << endl;

}
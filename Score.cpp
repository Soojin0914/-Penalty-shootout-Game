#include "main.h"


int Score::UserTurn(int kicker, int keeper) {
	if (kicker != keeper) {
		user++;
		PrintScore("Get a goal.");
	}
	else {
		PrintScore("Lose a goal.");
	}
	return user;
}


int Score::ComputerTurn(int kicker, int keeper) {

	if (kicker != keeper) {
		computer++;
		PrintScore("Miss a ball.");
	}
	else {
		PrintScore("Catch a ball.");
	}
	return computer;
}

int Score::Final(int opportunity) {
	if (opportunity > MINIMUM_CHANCE) {
		if (computer >user) {
			PrintScore("**Winner is Computer**");
		}
		else if (computer <user) {
			PrintScore("**Winner is User**");
		}
		return computer != user ? TRUE : FALSE;
	}
	else return FALSE;
}

void Score::PrintScore(const char* message) {

	cout << message << endl;
	cout << "Computer:User = " << computer << " : " << user << endl;

}
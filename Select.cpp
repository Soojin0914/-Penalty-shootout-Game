#include "main.h"

int Select::UserNumber() {
	cin >> user;

	return user;
}

int Select::ComputerNumber(const char* who) {

	cout << who << " kicks a ball.";
	computer = 1 + rand() % MAX_VALUE;

	return computer;
}
#include "main.h"

int ComputerSelect(const char* who) {

	cout << who << " kicks a ball.";
	int number = 1 + rand() % MAX_VALUE;

	return number;
}
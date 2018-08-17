#include "main.h"

int Number(const char* who) {

	cout << who << " kicks a ball.";
	int number = 1 + rand() % MAX_VALUE;

	return number;
}
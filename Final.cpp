#include "main.h"

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
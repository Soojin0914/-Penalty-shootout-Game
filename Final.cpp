#include "main.h"

int Score::Final(int opportunity) {
	if (opportunity > MINIMUM_CHANCE) {
		if (computer >user) {
			PrintScore("**Winner is Computer**", computer, user);
		}
		else if (computer <user) {
			PrintScore("**Winner is User**", computer, user);
		}
		return computer != user ? TRUE : FALSE;
	}
	else return FALSE;
}
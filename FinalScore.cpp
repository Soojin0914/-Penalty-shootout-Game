#include "main.h"

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
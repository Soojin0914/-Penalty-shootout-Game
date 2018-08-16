#include <iostream>
#include <stdlib.h>
#include "Score.h"
using namespace std;

#define TRUE 1
#define FALSE 0
#define MAX_VALUE 5
#define MINIMUM_CHANCE 4

int Number(const char* who) {
	
	cout << who<<" kicks a ball.";
	int number = 1 + rand() % MAX_VALUE;

	return number;
}

int Input() {
	int user;
	cin >> user;

	return user;
}

void PrintScore(const char* message,int computer, int user) {

	cout << message << endl;
	cout << "Computer:User = " << computer << " : " << user<< endl;

}

int ComputerTurn(int kicker, int keeper, int computer_score, int user_score) {
	
	if (kicker != keeper) {
		computer_score++;
		PrintScore("Miss a ball.", computer_score, user_score);
	}
	else {
		PrintScore("Catch a ball.", computer_score, user_score);
	}
	return computer_score;
}
int UserTurn(int kicker, int keeper, int computer_score, int user_score) {
	if (kicker != keeper) {
		user_score++;
		PrintScore("Get a goal.", computer_score, user_score);
	}
	else {
		PrintScore("Lose a goal.", computer_score, user_score);
	}
	return user_score;
}

int FinalScore(int computer_score,int user_score) {
	if (computer_score != user_score) {
		if (computer_score > user_score) {
			PrintScore("**Winner is Computer**", computer_score, user_score);
		}
		else if (computer_score <  user_score) {
			PrintScore("**Winner is User**", computer_score, user_score);
		}
		return TRUE;
	}
	else
	{
		return FALSE;
	}

	}


int main() {

	Score score;

	int opportunity = 0;

	while (TRUE) {
		opportunity++;

		//1. 0~5 사이의 난수 한개를 생성한다. (컴퓨터가 차는 경우)
		int computer = Number("computer");
	

		//2. 사용자가 1개의 숫자를 입력한다. 
		int user=Input();
	    

		//3. 결과를 계산한다. //4. 결과를 출력한다.
		score.computer=ComputerTurn(computer, user, score.computer, score.user);
		

		//5.  0~5 사이의 난수 한개를 생성한다. (사용자가 차는 경우)
		computer = Number("User");

		//6. 사용자가 1개의 숫자를 입력한다. 
		user = Input();

		//7. 결과를 계산한다.//8.결과를 출력한다.
		score.user=UserTurn(user, computer, score.computer, score.user);



		//9. 5번씩의 기회가 끝나고 최종 결과를 출력하고 끝난다.
		int finish;
		
		if (opportunity > MINIMUM_CHANCE) {
			finish=	FinalScore(score.computer, score.user);
			if(finish)break;

			
		}
		//10. 무승부라면 1번씩 기회를 더 준다.

	}
	return 0;
}
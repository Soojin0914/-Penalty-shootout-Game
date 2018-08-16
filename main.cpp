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

		//1. 0~5 ������ ���� �Ѱ��� �����Ѵ�. (��ǻ�Ͱ� ���� ���)
		int computer = Number("computer");
	

		//2. ����ڰ� 1���� ���ڸ� �Է��Ѵ�. 
		int user=Input();
	    

		//3. ����� ����Ѵ�. //4. ����� ����Ѵ�.
		score.computer=ComputerTurn(computer, user, score.computer, score.user);
		

		//5.  0~5 ������ ���� �Ѱ��� �����Ѵ�. (����ڰ� ���� ���)
		computer = Number("User");

		//6. ����ڰ� 1���� ���ڸ� �Է��Ѵ�. 
		user = Input();

		//7. ����� ����Ѵ�.//8.����� ����Ѵ�.
		score.user=UserTurn(user, computer, score.computer, score.user);



		//9. 5������ ��ȸ�� ������ ���� ����� ����ϰ� ������.
		int finish;
		
		if (opportunity > MINIMUM_CHANCE) {
			finish=	FinalScore(score.computer, score.user);
			if(finish)break;

			
		}
		//10. ���ºζ�� 1���� ��ȸ�� �� �ش�.

	}
	return 0;
}
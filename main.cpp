#include <iostream>
#include <stdlib.h>
#include "Score.h"
using namespace std;

#define TRUE 1
#define MAX_VALUE 5
#define MINIMUM_CHANCE 4

int Number() {
	

	int number = 1 + rand() % MAX_VALUE;

	return number;
}

int Input() {
	int user;
	cin >> user;

	return user;
}

void ScorePrint(int computer, int user) {

	cout << "Computer:User = " << computer << " : " << user<< endl;

}

int main() {

	Score score;

	int opportunity = 0;

	while (TRUE) {
		opportunity++;

		//1. 0~5 ������ ���� �Ѱ��� �����Ѵ�. (��ǻ�Ͱ� ���� ���)
		int computer = Number();
		cout << "Computer kicks a ball.";
		

		//2. ����ڰ� 1���� ���ڸ� �Է��Ѵ�. 
		int user;
		user=Input();
	    

		//3. ����� ����Ѵ�. 
		if (computer != user) {
			score.computer++;
			cout << "Miss a ball." << endl;
		}
		else {
			cout << "Catch a ball." << endl;
		}

		//4. ����� ����Ѵ�.
		ScorePrint(score.computer, score.user);

		//5.  0~5 ������ ���� �Ѱ��� �����Ѵ�. (����ڰ� ���� ���)
		computer = Number();
		cout << "You kick a ball.";

		//6. ����ڰ� 1���� ���ڸ� �Է��Ѵ�. 
		user = Input();

		//7. ����� ����Ѵ�.
		if (computer != user) {
			score.user++;
			cout << "Get a goal." << endl;
		}
		else {
			cout << "Lose a goal." << endl;
		}

		//8.����� ����Ѵ�.
		ScorePrint(score.computer, score.user);


		//9. 5������ ��ȸ�� ������ ���� ����� ����ϰ� ������.
		if (opportunity > MINIMUM_CHANCE) {
			if (score.computer != score.user) {
				if (score.computer > score.user) {
					ScorePrint(score.computer, score.user);
					cout << "  Winner is Computer." << endl;
				}
				else if (score.computer < score.user){
					ScorePrint(score.computer, score.user);
					cout << "  Winner is User" << endl;
				}
				break;
			}
		}
		//10. ���ºζ�� 1���� ��ȸ�� �� �ش�.

	}
	return 0;
}
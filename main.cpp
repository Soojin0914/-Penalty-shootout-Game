#include <stdlib.h>
#include "main.h"

using namespace std;


int main() {
	Score score;

	int opportunity = 0;

	while (TRUE) {

		opportunity++;

		//1. 0~5 ������ ���� �Ѱ��� �����Ѵ�. (��ǻ�Ͱ� ���� ���)
		int computer = Number("computer");


		//2. ����ڰ� 1���� ���ڸ� �Է��Ѵ�. 
		int user = Input();


		//3. ����� ����Ѵ�. //4. ����� ����Ѵ�.
		score.computer = ComputerTurn(computer, user, &score);


		//5.  0~5 ������ ���� �Ѱ��� �����Ѵ�. (����ڰ� ���� ���)
		computer = Number("User");

		//6. ����ڰ� 1���� ���ڸ� �Է��Ѵ�. 
		user = Input();

		//7. ����� ����Ѵ�.//8.����� ����Ѵ�.
		score.user = UserTurn(user, computer, &score);

		//9. 5������ ��ȸ�� ������ ���� ����� ����ϰ� ������.
		int finish = FinalScore(opportunity, &score);

		if (finish)
			break;

		//10. ���ºζ�� 1���� ��ȸ�� �� �ش�.

	}
	return 0;
}
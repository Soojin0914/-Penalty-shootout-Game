#include <stdlib.h>
#include "main.h"

using namespace std;


int main() {
	Score score;
	Select select;

	int opportunity = 0;

	while (TRUE) {

		opportunity++;

		//1. 0~5 사이의 난수 한개를 생성한다. (컴퓨터가 차는 경우)
		select.computer = select.ComputerNumber("computer");


		//2. 사용자가 1개의 숫자를 입력한다. 
		select.user = select.UserNumber();


		//3. 결과를 계산한다. //4. 결과를 출력한다.
		score.computer = score.ComputerTurn(select.computer, select.user);


		//5.  0~5 사이의 난수 한개를 생성한다. (사용자가 차는 경우)
		select.computer = select.ComputerNumber("User");

		//6. 사용자가 1개의 숫자를 입력한다. 
		select.user = select.UserNumber();

		//7. 결과를 계산한다.//8.결과를 출력한다.
		score.user = score.UserTurn(select.user, select.computer);

		//9. 5번씩의 기회가 끝나고 최종 결과를 출력하고 끝난다.
		int finish = score.Final(opportunity);

		if (finish)
			break;

		//10. 무승부라면 1번씩 기회를 더 준다.

	}
	return 0;
}
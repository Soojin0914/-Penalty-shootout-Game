#include <stdlib.h>
#include "main.h"

using namespace std;


int main() {
	Score score;
	Select select;

	int opportunity = 0;

	while (TRUE) {

		opportunity++;

		//1. 0~5 ������ ���� �Ѱ��� �����Ѵ�. (��ǻ�Ͱ� ���� ���)
		select.computer = select.ComputerNumber("computer");


		//2. ����ڰ� 1���� ���ڸ� �Է��Ѵ�. 
		select.user = select.UserNumber();


		//3. ����� ����Ѵ�. //4. ����� ����Ѵ�.
		score.computer = score.ComputerTurn(select.computer, select.user);


		//5.  0~5 ������ ���� �Ѱ��� �����Ѵ�. (����ڰ� ���� ���)
		select.computer = select.ComputerNumber("User");

		//6. ����ڰ� 1���� ���ڸ� �Է��Ѵ�. 
		select.user = select.UserNumber();

		//7. ����� ����Ѵ�.//8.����� ����Ѵ�.
		score.user = score.UserTurn(select.user, select.computer);

		//9. 5������ ��ȸ�� ������ ���� ����� ����ϰ� ������.
		int finish = score.Final(opportunity);

		if (finish)
			break;

		//10. ���ºζ�� 1���� ��ȸ�� �� �ش�.

	}
	return 0;
}
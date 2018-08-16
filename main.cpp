#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int myscore = 0;
	int comscore = 0;
	int fiveloop = 0;
	//1. 0~5 사이의 난수 한개를 생성한다. (컴퓨터가 차는 경우)
	
	while (1) {
		int comshoot;
		comshoot = rand() % 5 + 1;


		//2. 사용자가 1개의 숫자를 입력한다. 
	
		int block;
		
		cout << "사용자가 막을방향을 입력합니다 : ";
		cin >> block;

		//3. 결과를 계산한다. 


		if (comshoot != block) {
			comscore++;
			cout << "막지 못하였습니다." << endl;
		}
			
		else
			cout << "슛을 막았습니다." << endl;


		//4. 결과를 출력한다.
		cout << "현재 점수는 ";
		cout << myscore << " : " << comscore << endl << endl;


		//5.  0~5 사이의 난수 한개를 생성한다. (사용자가 차는 경우)
		int comblock;

		comblock = rand() % 5 + 1;

		//6. 사용자가 1개의 숫자를 입력한다. 
		int shoot;
		cout << "사용자가 슛팅할 방향을 입력합니다: ";
		cin >> shoot;
		//7. 결과를 계산한다.
		if (shoot != comblock) {
			myscore++;
			cout << "골을 넣었습니다" << endl;
		}
		else
			cout << " 골을 넣지 못하였습니다." << endl;
		//8.결과를 출력한다.
		cout << "현재 점수는 ";
		cout << myscore << " : " << comscore<<endl<<endl;
	
		fiveloop++;
		if (fiveloop >= 5 && myscore != comscore)break;
	
	}
	//9. 5번씩의 기회가 끝나고 최종 결과를 출력하고 끝난다.


	cout << "승자는 최종스코어" << myscore << " : " << comscore << "로";
	if (myscore > comscore)
		cout << " 사용자입니다. ";
	else
		cout << " 컴퓨터입니다.";

	//10. 무승부라면 1번씩 기회를 더 준다.


	return 0;
}
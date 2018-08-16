#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

	int computer_score=0;
	int user_score=0;
	int count5 = 0;
	while (1) {
		count5++;
		//1. 0~5 사이의 난수 한개를 생성한다. (컴퓨터가 차는 경우)
		int computer;

		computer = 1 + rand() % 5;

		cout << "컴퓨터가 공을 찹니다.";
		cout << computer << endl;

		//2. 사용자가 1개의 숫자를 입력한다. 
		int user;

		cin >> user;

		cout << "사용자가 막을 곳은 " << user << " 입니다" << endl;


		//3. 결과를 계산한다. 


		if (computer != user) {
			computer_score++;
		}

		//4. 결과를 출력한다.
		cout << "컴퓨터:사용자 = " << computer_score << " : " << user_score << endl;

		//5.  0~5 사이의 난수 한개를 생성한다. (사용자가 차는 경우)
		computer = 1 + rand() % 5;

		cout << "컴퓨터가 공을 막습니다.";
		cout << computer << endl;

		//6. 사용자가 1개의 숫자를 입력한다. 
		cin >> user;

		cout << "사용자가 막을 곳은 " << user << " 입니다" << endl;

		//7. 결과를 계산한다.
		if (computer != user) {
			user_score++;
		}

		//8.결과를 출력한다.
		cout << "컴퓨터:사용자 = " << computer_score << " : " << user_score << endl;


		//9. 5번씩의 기회가 끝나고 최종 결과를 출력하고 끝난다.
		if (count5 > 4) {
			if (computer_score != user_score) {
				if (computer_score > user_score) {
					cout << "컴퓨터가 " << computer_score << " : " << user_score << "으로 이겼습니다." << endl;
				}
				if (computer_score < user_score) {
					cout << "사용자가 " << computer_score << " : " << user_score << "으로 이겼습니다." << endl;
				}
				break;
			}
		}
		//10. 무승부라면 1번씩 기회를 더 준다.

	}
	return 0;
}
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int myscore = 0;
	int comscore = 0;
	int fiveloop = 0;
	//1. 0~5 ������ ���� �Ѱ��� �����Ѵ�. (��ǻ�Ͱ� ���� ���)
	
	while (1) {
		int comshoot;
		comshoot = rand() % 5 + 1;


		//2. ����ڰ� 1���� ���ڸ� �Է��Ѵ�. 
	
		int block;
		
		cout << "����ڰ� ���������� �Է��մϴ� : ";
		cin >> block;

		//3. ����� ����Ѵ�. 


		if (comshoot != block) {
			comscore++;
			cout << "���� ���Ͽ����ϴ�." << endl;
		}
			
		else
			cout << "���� ���ҽ��ϴ�." << endl;


		//4. ����� ����Ѵ�.
		cout << "���� ������ ";
		cout << myscore << " : " << comscore << endl << endl;


		//5.  0~5 ������ ���� �Ѱ��� �����Ѵ�. (����ڰ� ���� ���)
		int comblock;

		comblock = rand() % 5 + 1;

		//6. ����ڰ� 1���� ���ڸ� �Է��Ѵ�. 
		int shoot;
		cout << "����ڰ� ������ ������ �Է��մϴ�: ";
		cin >> shoot;
		//7. ����� ����Ѵ�.
		if (shoot != comblock) {
			myscore++;
			cout << "���� �־����ϴ�" << endl;
		}
		else
			cout << " ���� ���� ���Ͽ����ϴ�." << endl;
		//8.����� ����Ѵ�.
		cout << "���� ������ ";
		cout << myscore << " : " << comscore<<endl<<endl;
	
		fiveloop++;
		if (fiveloop >= 5 && myscore != comscore)break;
	
	}
	//9. 5������ ��ȸ�� ������ ���� ����� ����ϰ� ������.


	cout << "���ڴ� �������ھ�" << myscore << " : " << comscore << "��";
	if (myscore > comscore)
		cout << " ������Դϴ�. ";
	else
		cout << " ��ǻ���Դϴ�.";

	//10. ���ºζ�� 1���� ��ȸ�� �� �ش�.


	return 0;
}
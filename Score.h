#pragma once
struct Score
{
	int computer = 0;
	int user = 0;

	int ComputerTurn(int kicker, int keeper);
	int UserTurn(int kicker, int keeper);
	int Final(int opportunity);


};






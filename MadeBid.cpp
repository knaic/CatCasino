#include "headings.h"
#include <iostream>
#include <Windows.h>

void MadeBid(USERSTRUCT& p, const unsigned short& random) {
INPUT_RETRY:
	DrawScreen(p);

	Tax(p);


	std::cout << "Current tax - " << p.Tax << std::endl;
	std::cout << "Your bid? \n";

	GetValidBid(p);
	UseValidItems(p);

	std::cout << "Enter a number from 1 to 5\n";

	int diff = GetValidInput(p);

	if (diff == 0) {
		unsigned int winAmount = p.bid * p.multiplier;
		std::cout << "You guessed it! You won - " << winAmount << "\n";
		p.money += winAmount;
		p.Tax = 200;
		Sleep(2000);
		return;
	}
	else if (diff <= 2) {
		unsigned PercentWin = p.bid * p.multiplier / 2;
		p.money += PercentWin;
		std::cout << "Close enough! You will only receive 50 percent of the winnings.";


		Sleep(2000);
	}
	else {
		unsigned int totalLoss = p.bid + p.Tax;
		p.money -= totalLoss;

		std::cout << "U lose. You Lost - " << totalLoss;
		Sleep(2000);
		return;
	}
}
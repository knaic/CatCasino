#include <iostream>
#include "headings.h"
#include <random>
#include <vector>
#include <string>
#include <Windows.h>

void MadeBid(USERSTRUCT& p, const unsigned short& random); \
void Tax(USERSTRUCT& p);

int main() {
	USERSTRUCT U;
	logo();
	history();

	std::random_device dfshdfsh;
	std::mt19937 gen(dfshdfsh());
	std::uniform_int_distribution<> distrib(1, 5);

	while (true) {
		U.random = distrib(gen);
		DrawScreen(U);

		int result = GetValidWin(U);
		if (result == 0) { break; };
		if (result == 2) { Win(U); break; };

		if (U.money <= 1000) {
			U.Tax = 5;
		}
		else if (U.money >= 1000 && U.money < 10000) {
			U.Tax = U.money * 0.10;
		}
		else {
			U.Tax = U.money * 0.20;
		}

		std::cout << "Place a bid or play for a multiplier\n 0 - bid\n 1 - multiplier\n";
		std::cout << " 2 - shop ";

		BasicGetValidInput(U);

		switch (U.input) { case 0: MadeBid(U, U.random); break; case 1: selectmultiplier(U); break; case 2: shop(U); break; }
	}

	return 0;
}



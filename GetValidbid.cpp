#include "headings.h"
#include <iostream>
#include <Windows.h>

void GetValidBid(USERSTRUCT& p) {
	while (true) {
		std::cin >> p.bid;


		if (std::cin.fail() || p.money < p.bid) {
			std::cout << "Please enter the correct value.\n";
			std::cin.clear();
			std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
			Sleep(2000);
			continue;
		}
		else {
			break;
		}
	}
}
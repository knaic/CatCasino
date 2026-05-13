#include "headings.h"
#include <iostream>
#include <Windows.h>

int GetValidInput(USERSTRUCT& p) {
	while (true) {
		std::cin >> p.input;

		int diff = std::abs((int)p.input - (int)p.random);

		if (std::cin.fail()) {
			std::cout << "Please enter the correct value.\n";
			std::cin.clear();
			std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
			Sleep(2000);
			continue;
		}
		else {
			return diff;
		}
	}
}
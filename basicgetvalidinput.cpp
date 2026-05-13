#include "headings.h"
#include <iostream>
#include <Windows.h>

void BasicGetValidInput(USERSTRUCT& p) {
	while (true) {
		std::cin >> p.input;

		if (std::cin.fail() || (p.input != 0 && p.input != 1 && p.input != 2)) {
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
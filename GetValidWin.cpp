#include "headings.h"
#include <iostream>

int GetValidWin(USERSTRUCT& p) {
	if (p.money >= 1000000) {
		return 2;
	}

	if (p.money <= 0) { 
		std::cout << "\033[31mBANKRUPT!\033[0m"; 
		return 0;
	}

	return 1;
}
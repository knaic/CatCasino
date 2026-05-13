#include "headings.h"
#include <iostream>

void UseValidItems(USERSTRUCT& p) {
	if (!p.Items.empty() && p.Items[0] == 0) {
		int fake = (std::rand() % 5) + 1;
		while (fake == p.random) fake = (std::rand() % 5) + 1;
		std::cout << "Vision: It looks like " << p.random << " or " << fake << "..." << std::endl;
	}
}
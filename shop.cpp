#include <iostream>
#include "headings.h"
#include <Windows.h>;


void shop(struct USERSTRUCT& p) {
	DrawScreen(p);
	std::cout << "Items : \n";
	std::cout << "1. Vision - \n \033[32m1000\033[0m ";


	while (true) {
	START_SHOP:
		std::cin >> p.input;

		if (std::cin.fail()) {
			std::cout << "Please enter the correct value.\n";
			std::cin.clear();
			std::cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n');
			Sleep(2000);
			continue;
		};

		if (p.input == 1) {
			if (p.BuyedItems[0] == true) {
				std::cout << "Already bought!\n";
				Sleep(1000);
				break;
			}
			else if (p.money >= 1000) {
				p.money -= 1000;
				p.BuyedItems[0] = true;
				p.Items.push_back(0);
				std::cout << "Success!\n";
				Sleep(1000);
				break;
			}
			else if (p.money < 1000) {
				std::cout << "not enough money\n";
				Sleep(2000);
			}
		}
		else {
			std::cout << "Unknown item! Try again.\n";
			Sleep(2000);
			continue;
		}
	}
}
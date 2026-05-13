	

#include "headings.h"
#include <vector>
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>



void selectmultiplier(struct USERSTRUCT& p) {
	unsigned short firstNumber = std::rand() % 7 + 1;
	unsigned short TwoNumber = std::rand() % 7 + 1;
	unsigned short ThreeNumber = std::rand() % 7 + 1;
	int total;
	std::string TotalNumbers = std::to_string(firstNumber) +
		std::to_string(TwoNumber) +
		std::to_string(ThreeNumber);


	std::string min = "435";

	if (p.money <= 1500) {
		std::cout << "U need minium 1500 money";

		Sleep(1000);

		return;
	}


	std::cout << firstNumber;
	Sleep(1000);
	std::cout << TwoNumber;
	Sleep(1000);
	std::cout << ThreeNumber << std::endl;
	Sleep(1000);

	if (TotalNumbers == "777") {
		Beep(1000, 1000);
		std::cout << "WHY ARE YOU VERY LUCKY? current multiplier - " << p.multiplier + 7;
		p.multiplier += 7;
	} else if (TotalNumbers >= min) {
		std::cout << "Well... you're lucky. current multiplier - " << p.multiplier + 1;
		p.multiplier += 1;
	}

	else {
		std::cout << "Well... you're out of luck. Current money - " << p.money / 2;
		p.money /= 2;
	}
	

	Sleep(1000);
}
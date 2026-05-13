#include <iostream>
#include "headings.h"



void DrawScreen(const USERSTRUCT& p) { // отрисовка базового экрана
	system("cls"); // отчистка экрана
	logo(); // вывод лого (logo.cpp)
	std::cout << "Your balance " << "\033[32m" << p.money << "\033[0m" << std::endl; // вывод баланса
}
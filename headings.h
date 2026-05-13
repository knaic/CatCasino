#pragma once
#include <vector>
#include <string>

struct USERSTRUCT { // Стуктура пользователя
	unsigned int bid = 0; // ставка
	unsigned int multiplier = 1; // множитель
	unsigned short random = 0; // рандомное число
	unsigned short input = 0; // ввод от пользователя

	std::vector<short> Items = {};
	std::vector<bool> BuyedItems = { false };
	float Tax = 200.0f;
	long money = 1000; // деньги
};

void logo();
void history();
void selectmultiplier(struct USERSTRUCT& p);
void shop(struct USERSTRUCT& p);
void DrawScreen(const USERSTRUCT& p);
void GetValidBid(USERSTRUCT& p);
void UseValidItems(USERSTRUCT& p);
int GetValidInput(USERSTRUCT& p);
int GetValidWin(USERSTRUCT& p);
void MadeBid(USERSTRUCT& p, const unsigned short& random);
void Tax(USERSTRUCT& p);
void BasicGetValidInput(USERSTRUCT& p);
void Win(USERSTRUCT& p);
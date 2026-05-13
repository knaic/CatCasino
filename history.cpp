#include "headings.h"
#include <iostream>
#include <Windows.h>
#include <vector>
#include <string>

struct Line {
    std::string text;
    int ms;
};

void history() {
    for (int x = 0; x < 3; x++) {
        system("cls");
        logo();
        std::cout << "*peep*";
        Beep(1000, 200);
        Sleep(1000);
    }

    std::vector<Line> dialogue = {
        {"gg: Yes. Am I listening?", 2000},
        {"thief: hi. We have your cat. We demand 1 million in money.", 2000},
        {"gg: WHAT??? NONONO", 2000},
        {"thief: We are waiting for money.", 1000},
        {"*number not available*", 2000},
        {"gg: I'm going to the casino. I NEED THIS MONEY", 2000}
    };

    for (int i = 0; i < dialogue.size(); i++) {
        system("cls");
        logo();
        std::cout << dialogue[i].text << std::endl;
        Sleep(dialogue[i].ms);
    }
}
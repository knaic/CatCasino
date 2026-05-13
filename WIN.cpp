#include "headings.h"
#include <iostream>
#include <Windows.h>
#include <vector>
#include <string>

struct Line {
    std::string text;
    int ms;
};


void Win(USERSTRUCT& p) {
    for (int x = 0; x < 3; x++) {
        system("cls");
        logo();
        std::cout << "*peep*";
        Beep(1000, 200);
        Sleep(1000);
    }

    std::vector<Line> dialogue = {
            {"thief: where is the money?", 4000},
            {"gg: I translated them for you, please return my cat", 4000},
            {"thief: Hahaha, thanks for the money, idiot. We didn't steal your cat, bb.", 5000},
            {"gg: WHAT?!?!?!?!", 2000},
            {"*silence*", 3000},
            {"*gg hears a sound from the kitchen*", 2000},
            {"cat: meow (translate: 'where is my food, human?')", 4000},
            {"gg: ...", 3000},
            {"gg: NOOOOOOOOOOOOOO", 5000},
            {"\n[BAD ENDING]: You lost 1,000,000. Your cat was home all along.", 5000},
    };

    for (int i = 0; i < dialogue.size(); i++) {
        system("cls");
        logo();
        std::cout << dialogue[i].text << std::endl;
        Sleep(dialogue[i].ms);
    }
}
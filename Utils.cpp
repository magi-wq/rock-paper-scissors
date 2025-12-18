#include "Utils.h"
#include <iostream>
#ifdef _WIN32
#include <windows.h>
#else
#include <cstdlib>
#endif
void Utils::clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
void Utils::printHeader() {
    std::cout << "=== КАМЕНЬ-НОЖНИЦЫ-БУМАГА ===\n\n";
}
std::string Utils::choiceToString(int choice) {
    switch(choice) {
        case 0: return "Камень";
        case 1: return "Бумага";
        case 2: return "Ножницы";
        default: return "Неизвестно";
    }
}
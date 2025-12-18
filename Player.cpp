#include "Player.h"
#include <iostream>
Player::Player(const std::string& playerName) : name(playerName), score(0) {}
std::string Player::getName() const { return name; }
int Player::getScore() const { return score; }
void Player::incrementScore() { score++; }
int Player::makeChoice() const {
    int choice;
    std::cout << name << ", введите выбор (0-камень, 1-бумага, 2-ножницы): ";
    std::cin >> choice;
    return choice;
}
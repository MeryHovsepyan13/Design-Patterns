#include "GameManager.hpp"
#include <iostream>

GameManager* GameManager::instance = nullptr;

GameManager& GameManager::getInstance() {
    if (!instance) {
        instance = new GameManager();
    }
    return *instance;
}

GameManager::GameManager() : score(0), level(1) {}

void GameManager::increaseScore(int points) {
    score += points;
}

void GameManager::nextLevel() {
    level++;
}

void GameManager::resetGame() {
    score = 0;
    level = 1;
}

void GameManager::displayGameState() const {
    std::cout << "Score: " << score << " | Level: " << level << std::endl;
}
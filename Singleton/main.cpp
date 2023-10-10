#include "GameManager.hpp"

int main() {
    GameManager& gameManager = GameManager::getInstance();

    gameManager.displayGameState();
    gameManager.increaseScore(100);
    gameManager.displayGameState();
    gameManager.nextLevel();
    gameManager.displayGameState();
    gameManager.resetGame();
    gameManager.displayGameState();

    return 0;
}
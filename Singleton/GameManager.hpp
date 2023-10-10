#pragma once

class GameManager {
public:   
    static GameManager& getInstance();

    void increaseScore(int points);
    void nextLevel();
    void resetGame();
    void displayGameState() const;

private:
    GameManager();

    GameManager(const GameManager&) = delete;
    GameManager& operator=(const GameManager&) = delete;

    static GameManager* instance;

    int score;
    int level;
};
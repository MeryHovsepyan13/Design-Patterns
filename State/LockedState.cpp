#include "LockedState.hpp"
#include "AudioPlayer.hpp"
#include "PlayingState.hpp"
#include "ReadyState.hpp"
#include <iostream>

void LockedState::clickLock() {
    std::cout << "Player is locked. ";
    if (player->isPlaying()) {
        std::cout << "Switching to Playing state.\n";
        player->changeState(new PlayingState(player));
    } else {
        std::cout << "Switching to Ready state.\n";
        player->changeState(new ReadyState(player));
    }
}

void LockedState::clickPlay() {
    std::cout << "Player is locked. Cannot play.\n";
}

void LockedState::clickNext() {
    std::cout << "Player is locked. Cannot go to the next song.\n";
}

void LockedState::clickPrevious() {
    std::cout << "Player is locked. Cannot go to the previous song.\n";
}

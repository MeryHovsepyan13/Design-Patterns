#include "ReadyState.hpp"
#include "AudioPlayer.hpp"
#include "LockedState.hpp"
#include "PlayingState.hpp"
#include <iostream>

void ReadyState::clickLock() {
    std::cout << "Player is ready. Locking the player.\n";
    player->changeState(new LockedState(player));
}

void ReadyState::clickPlay() {
    std::cout << "Player is ready. Starting playback.\n";
    player->startPlayback();
    player->changeState(new PlayingState(player));
}

void ReadyState::clickNext() {
    std::cout << "Player is ready. Going to the next song.\n";
    player->nextSong();
}

void ReadyState::clickPrevious() {
    std::cout << "Player is ready. Going to the previous song.\n";
    player->previousSong();
}

#include "PlayingState.hpp"
#include "AudioPlayer.hpp"
#include "LockedState.hpp"
#include "ReadyState.hpp"
#include <iostream>

void PlayingState::clickLock() {
    std::cout << "Player is playing. Locking the player.\n";
    player->changeState(new LockedState(player));
}

void PlayingState::clickPlay() {
    std::cout << "Player is playing. Stopping playback.\n";
    player->stopPlayback();
    player->changeState(new ReadyState(player));
}

void PlayingState::clickNext() {
    std::cout << "Player is playing. ";
    if (player->isDoubleClick()) {
        std::cout << "Going to the next song.\n";
        player->nextSong();
    } else {
        std::cout << "Fast forwarding by 5 seconds.\n";
        player->fastForward(5);
    }
}

void PlayingState::clickPrevious() {
    std::cout << "Player is playing. ";
    if (player->isDoubleClick()) {
        std::cout << "Going to the previous song.\n";
        player->previousSong();
    } else {
        std::cout << "Rewinding by 5 seconds.\n";
        player->rewind(5);
    }
}

#ifndef PLAYINGSTATE_HPP
#define PLAYINGSTATE_HPP

#include "State.hpp"

class PlayingState : public State {
public:
    using State::State;

    void clickLock() override;
    void clickPlay() override;
    void clickNext() override;
    void clickPrevious() override;
};

#endif

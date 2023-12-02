#ifndef LOCKEDSTATE_HPP
#define LOCKEDSTATE_HPP

#include "State.hpp"

class LockedState : public State {
public:
    using State::State;

    void clickLock() override;
    void clickPlay() override;
    void clickNext() override;
    void clickPrevious() override;
};

#endif 

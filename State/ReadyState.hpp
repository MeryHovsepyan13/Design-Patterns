#ifndef READYSTATE_HPP
#define READYSTATE_HPP

#include "State.hpp"

class ReadyState : public State {
public:
    using State::State;

    void clickLock() override;
    void clickPlay() override;
    void clickNext() override;
    void clickPrevious() override;
};

#endif 

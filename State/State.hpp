#ifndef STATE_HPP
#define STATE_HPP

class AudioPlayer;

class State {
protected:
    AudioPlayer* player;

public:
    State(AudioPlayer* player);
    virtual ~State() = default;

    virtual void clickLock() = 0;
    virtual void clickPlay() = 0;
    virtual void clickNext() = 0;
    virtual void clickPrevious() = 0;
};

#endif 

#ifndef AUDIOPLAYER_HPP
#define AUDIOPLAYER_HPP

class State;

class AudioPlayer {
private:
    State* state;

public:
    AudioPlayer();
    ~AudioPlayer();
    void changeState(State* newState);
    void clickLock();
    void clickPlay();
    void clickNext();
    void clickPrevious();
    void startPlayback();
    void stopPlayback();
    void nextSong();
    void previousSong();
    void fastForward(int time);
    void rewind(int time);
    bool isPlaying() const;
    bool isDoubleClick() const;
};

#endif 

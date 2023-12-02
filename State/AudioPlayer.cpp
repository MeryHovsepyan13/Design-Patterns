#include "AudioPlayer.hpp"
#include "State.hpp"
#include "LockedState.hpp"
#include "PlayingState.hpp"
#include "ReadyState.hpp"

AudioPlayer::AudioPlayer() {
    state = new ReadyState(this);
}

AudioPlayer::~AudioPlayer() {
    delete state;
}

void AudioPlayer::changeState(State* newState) {
    delete state;
    state = newState;
}

void AudioPlayer::clickLock() {
    state->clickLock();
}

void AudioPlayer::clickPlay() {
    state->clickPlay();
}

void AudioPlayer::clickNext() {
    state->clickNext();
}

void AudioPlayer::clickPrevious() {
    state->clickPrevious();
}

void AudioPlayer::startPlayback() {
}

void AudioPlayer::stopPlayback() {
}

void AudioPlayer::nextSong() {
}

void AudioPlayer::previousSong() {
}

void AudioPlayer::fastForward(int time) {
}

void AudioPlayer::rewind(int time) {
}

bool AudioPlayer::isPlaying() const {
    return true;
}

bool AudioPlayer::isDoubleClick() const {
    return false;
}

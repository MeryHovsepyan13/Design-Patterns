#include "AudioMixer.hpp"
#include <iostream>

std::string AudioMixer::fix(const std::string& video) {
    std::cout << "Fixing audio in the video" << std::endl;
    return "fixed_audio_" + video;
}

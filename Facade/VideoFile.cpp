#include "VideoFile.hpp"
#include <iostream>

VideoFile::VideoFile(const std::string& filename) : filename(filename) {}

std::string VideoFile::getFilename() const {
    return filename;
}

void VideoFile::save() {
    std::cout << "Saved video file: " << filename << std::endl;
}

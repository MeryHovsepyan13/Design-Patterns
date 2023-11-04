#include "MPEG4CompressionCodec.hpp"
#include <iostream>

std::string MPEG4CompressionCodec::compress(const VideoFile& video) {
    std::cout << "Compressed video using MPEG4 codec" << std::endl;
    return "mp4_compressed_" + video.getFilename();
}

#include "OggCompressionCodec.hpp"
#include <iostream>

std::string OggCompressionCodec::compress(const VideoFile& video) {
    std::cout << "Compressed video using Ogg codec" << std::endl;
    return "ogg_compressed_" + video.getFilename();
}

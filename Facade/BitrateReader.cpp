#include "BitrateReader.hpp"
#include "VideoFile.hpp"
#include "CompressionCodec.hpp"
#include "MPEG4CompressionCodec.hpp"
#include "OggCompressionCodec.hpp"
#include <iostream>


std::string BitrateReader::read(const VideoFile& video, CompressionCodec* sourceCodec) {
    std::cout << "Reading video bitrate" << std::endl;
    return "bitrate_" + video.getFilename();
}

std::string BitrateReader::convert(const std::string& buffer, CompressionCodec* destinationCodec) {
    std::cout << "Converting video bitrate" << std::endl;
    return destinationCodec->compress(VideoFile(buffer));
}

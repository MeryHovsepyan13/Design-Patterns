#ifndef BITRATEREADER_HPP
#define BITRATEREADER_HPP

#include "VideoFile.hpp"
#include "CompressionCodec.hpp"

class BitrateReader {
public:
    static std::string read(const VideoFile& video, CompressionCodec* sourceCodec);
    static std::string convert(const std::string& buffer, CompressionCodec* destinationCodec);
};

#endif

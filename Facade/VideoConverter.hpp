#ifndef VIDEOCONVERTER_HPP
#define VIDEOCONVERTER_HPP

#include "VideoFile.hpp"
#include "CompressionCodec.hpp"
#include "CodecFactory.hpp"
#include "BitrateReader.hpp"

class VideoConverter {
public:
    VideoFile convert(const std::string& filename, const std::string& format);
};

#endif

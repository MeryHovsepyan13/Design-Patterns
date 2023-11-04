#ifndef COMPRESSIONCODEC_HPP
#define COMPRESSIONCODEC_HPP

#include "VideoFile.hpp"

class CompressionCodec {
public:
    virtual std::string compress(const VideoFile& video) = 0;
};

#endif

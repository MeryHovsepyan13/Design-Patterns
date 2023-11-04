#ifndef OGGCOMPRESSIONCODEC_HPP
#define OGGCOMPRESSIONCODEC_HPP

#include "CompressionCodec.hpp"

class OggCompressionCodec : public CompressionCodec {
public:
    std::string compress(const VideoFile& video) override;
};

#endif

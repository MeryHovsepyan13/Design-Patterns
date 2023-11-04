#ifndef MPEG4COMPRESSIONCODEC_HPP
#define MPEG4COMPRESSIONCODEC_HPP

#include "CompressionCodec.hpp"

class MPEG4CompressionCodec : public CompressionCodec {
public:
    std::string compress(const VideoFile& video) override;
};

#endif

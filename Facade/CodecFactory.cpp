#include "CodecFactory.hpp"
#include "MPEG4CompressionCodec.hpp"
#include "OggCompressionCodec.hpp"

CompressionCodec* CodecFactory::extract(const std::string& format) {
    if (format == "mp4") {
        return new MPEG4CompressionCodec();
    } else if (format == "ogg") {
        return new OggCompressionCodec();
    }
    return new MPEG4CompressionCodec();
}

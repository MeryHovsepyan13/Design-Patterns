#include "VideoConverter.hpp"
#include "VideoFile.hpp"
#include "CompressionCodec.hpp"
#include "CodecFactory.hpp"
#include "BitrateReader.hpp"
#include "AudioMixer.hpp"

VideoFile VideoConverter::convert(const std::string& filename, const std::string& format) {
    VideoFile file(filename);
    CompressionCodec* sourceCodec = CodecFactory::extract(format);

    auto buffer = BitrateReader::read(file, sourceCodec);
    auto result = BitrateReader::convert(buffer, sourceCodec);

    delete sourceCodec;

    return VideoFile(result);
}

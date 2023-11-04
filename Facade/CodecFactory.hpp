#ifndef CODECFACTORY_HPP
#define CODECFACTORY_HPP

#include "CompressionCodec.hpp"

class CodecFactory {
public:
    static CompressionCodec* extract(const std::string& format);
};

#endif

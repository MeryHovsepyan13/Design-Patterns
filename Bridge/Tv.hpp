#pragma once
#include "Device.hpp"

class Tv : public Device {
public:
    bool isEnabled() override;
    void enable() override;
    void disable() override;
    int getVolume() override;
    void setVolume(int percent) override;
    int getChannel() override;
    void setChannel(int channel) override;
};

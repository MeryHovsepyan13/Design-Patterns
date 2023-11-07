#pragma once
#include "Device.hpp"

class RemoteControl {
protected:
    Device* device;

public:
    RemoteControl(Device* device);
    void togglePower();
    void volumeDown();
    void volumeUp();
    void channelDown();
    void channelUp();
};

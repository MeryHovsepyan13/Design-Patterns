#pragma once
#include "RemoteControl.hpp"

class AdvancedRemoteControl : public RemoteControl {
public:
    AdvancedRemoteControl(Device* device);
    void mute();
};

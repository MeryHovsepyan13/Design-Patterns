#include "AdvancedRemoteControl.hpp"

AdvancedRemoteControl::AdvancedRemoteControl(Device* device) : RemoteControl(device) {}

void AdvancedRemoteControl::mute() {
    device->setVolume(0);
}

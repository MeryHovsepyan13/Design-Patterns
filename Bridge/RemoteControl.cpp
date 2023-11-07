#include "RemoteControl.hpp"

RemoteControl::RemoteControl(Device* device) : device(device) {}

void RemoteControl::togglePower() {
    if (device->isEnabled()) {
        device->disable();
    } else {
        device->enable();
    }
}

void RemoteControl::volumeDown() {
    device->setVolume(device->getVolume() - 1);
}

void RemoteControl::volumeUp() {
    device->setVolume(device->getVolume() + 1);
}

void RemoteControl::channelDown() {
    device->setChannel(device->getChannel() - 1);
}

void RemoteControl::channelUp() {
    device->setChannel(device->getChannel() + 1);
}

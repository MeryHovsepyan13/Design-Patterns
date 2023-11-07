#include "Device.hpp"
#include "Tv.hpp"
#include "Radio.hpp"
#include "RemoteControl.hpp"
#include "AdvancedRemoteControl.hpp"

int main() {
    Device* tv = new Tv();
    RemoteControl* remote = new RemoteControl(tv);

    remote->togglePower();
    remote->volumeUp();
    remote->channelUp();

    Device* radio = new Radio();
    AdvancedRemoteControl* advancedRemote = new AdvancedRemoteControl(radio);

    advancedRemote->togglePower();
    advancedRemote->mute();
    advancedRemote->volumeUp();
    advancedRemote->channelUp();

    return 0;
}

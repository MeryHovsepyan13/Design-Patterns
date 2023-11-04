#include "Application.hpp"
#include "VideoConverter.hpp"

void Application::main() {
    VideoConverter converter;
    VideoFile mp4 = converter.convert("youtubevideo.ogg", "mp4");
    mp4.save();
}

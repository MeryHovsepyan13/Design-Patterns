#ifndef VIDEOFILE_HPP
#define VIDEOFILE_HPP

#include <string>

class VideoFile {
public:
    VideoFile(const std::string& filename);
    std::string getFilename() const;
    void save();

private:
    std::string filename;
};

#endif

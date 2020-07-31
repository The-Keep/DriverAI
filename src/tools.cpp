#include "tools.h"
#include <stdint.h>

namespace Tools
{
    const std::string read_string(std::ifstream *fs) {
        // Move stream to the end
        fs->seekg(0, fs->end);
        // Get the position of the end
        std::uint64_t size = fs->tellg();
        // Move stream back to beginning;
        fs->seekg(0);

        std::string stream_string;
        stream_string.resize(size);
        char *pointer = &stream_string[0];

        while (!fs->eof() && !fs->bad()) {
            fs->read(pointer++, 1);
        }

        return stream_string;
    }
} // namespace Tools
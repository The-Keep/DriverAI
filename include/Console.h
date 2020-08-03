#ifndef CONSOLE_H
#define CONSOLE_H

#include <iostream>

namespace Tools
{
    enum ColorCode {
        FG_RED = 31,
        FG_GREEN = 32,
        FG_BLUE = 34,
        FG_DEFAULT = 39,
        BG_RED = 41,
        BG_GREEN = 42,
        BG_BLUE = 44,
        BG_DEFAULT = 49
    };

    class Console
    {
      private:
        void* h_console;

      public:
        Console();
        void newLine();
        void setColor(std::uint8_t code);
        void writeLine(const std::string text, std::uint8_t color);
    };
} // namespace Tools

#endif
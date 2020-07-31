#include <fstream>
#include <iostream>
#include <stdint.h>

struct pixel {
    std::uint8_t R;
    std::uint8_t G;
    std::uint8_t B;
};

struct rect {
    std::uint8_t X;
    std::uint8_t Y;
    float width;
    float height;
};

enum IMGTYPE { PNG = 0, JPEG = 1 };

enum RESIZETYPE { BILINEAR = 0 };

class Bitmap
{
   private:
    pixel* pixels;
    std::uint16_t width;
    std::uint16_t height;

   public:
    Bitmap();
    Bitmap(std::string filepath);
    Bitmap(std::string filepath, IMGTYPE type);
    ~Bitmap();
    std::uint16_t getWidth();
    std::uint16_t getHeight();
    void crop(rect out_size);
    void resize(std::uint16_t out_width, std::uint16_t out_height, RESIZETYPE type);
    void clear();
    Bitmap* deep_copy();
};

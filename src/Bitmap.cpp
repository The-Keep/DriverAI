#include "Bitmap.h"

#include <stdio.h>
#include <stdlib.h>

using namespace std;

#pragma region PRIVATE FUNCTIONS

void _load_as_jpeg(ifstream* fs, pixel* out_buff, uint16_t* out_width, uint16_t* out_height);
void _load_as_png(ifstream* fs, pixel* out_buff, uint16_t* out_width, uint16_t* out_height);
void _bilinear_intrapolation(pixel* img, size_t width, size_t height);

#pragma endregion

Bitmap::Bitmap() { NULL; };

Bitmap::Bitmap(string filepath) { ifstream file(filepath); };

Bitmap::Bitmap(string filepath, IMGTYPE type) {
    // open file stream
    ifstream fs(filepath);

    switch (type) {
    case IMGTYPE::JPEG:
        // _load_as_jpeg(&fs, this->pixels, &this->width, &this->height);
        break;

    case IMGTYPE::PNG:
    default:
        // _load_as_png(&fs, this->pixels, &this->width, &this->height);
        break;
    }
    fs.close();
};

Bitmap::~Bitmap() { this->clear(); };

uint16_t Bitmap::getWidth() { return this->width; };

uint16_t Bitmap::getHeight() { return this->height; };

void Bitmap::crop(rect window_size) {
    pixel* cropped_img = (pixel*)malloc(sizeof(pixel) * window_size.width * window_size.height);
    pixel* iter = cropped_img;

    for (int r = window_size.X; r < window_size.X + window_size.width; r++) {
        for (int c = window_size.Y; c < window_size.Y + window_size.height; c++) {
            *iter = *(this->pixels + ((r * this->width) + c));
            iter++;
        }
    }

    free(this->pixels);
    this->pixels = cropped_img;
};

Bitmap* Bitmap::deep_copy() {
    Bitmap* out_img = new Bitmap();

    // allocate memory
    out_img->pixels = (pixel*)malloc(sizeof(pixel) * (this->width * this->height));

    out_img->width = this->width;
    out_img->height = this->height;

    for (int i = 0; i < this->height * this->width; i++) {
        *(out_img->pixels + i) = *(this->pixels + i);
    }

    return out_img;
};

void Bitmap::resize(uint16_t out_width, uint16_t out_height, RESIZETYPE type) {
    switch (type) {
    case RESIZETYPE::BILINEAR:
        break;

    default:
        break;
    }
};

void Bitmap::clear() { free(this->pixels); };

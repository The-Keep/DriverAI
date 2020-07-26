#include <cstdint>
#include <cstring>
#include <vector>

#ifdef __WIN32
// For WIN32 Application
#include <win32>
#elif __linux__
// For LINUX Distro
#include <X11/Xlib.h>
#include <X11/Xutil.h>
#endif

void ImageFromDisplay(std::vector<uint8_t> &Pixels, int &Width, int &Height, int &BitsPerPixel)
{
#ifdef __linux__
    Display *display = XOpenDisplay(nullptr);
    Window root = DefaultRootWindow(display);

    XWindowAttributes attributes = {0};
    XGetWindowAttributes(display, root, &attributes);

    Width = attributes.width;
    Height = attributes.height;

    XImage *img = XGetImage(display, root, 0, 0, Width, Height, AllPlanes, ZPixmap);
    BitsPerPixel = img->bits_per_pixel;
    Pixels.resize(Width * Height * 4);

    memcpy(&Pixels[0], img->data, Pixels.size());

    XDestroyImage(img);
    XCloseDisplay(display);
#endif
}
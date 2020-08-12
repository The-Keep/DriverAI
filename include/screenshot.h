#ifndef SCREENSHOT_H
#define SCREENSHOT_H
#include <iostream>
#include <stdio.h>
#include <windows.h>

bool HDCToFile(const char* FilePath, HDC Context, RECT Area);
bool HDCToFile(const char* FilePath, HDC Context, RECT Area, uint16_t BitsPerPixel);

#endif
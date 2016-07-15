/*
 Copyright (C) 2016 by Wojciech Jaśkowski, Michał Kempka, Grzegorz Runc, Jakub Toczek, Marek Wydmuch

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
*/

#ifndef __VIZ_SCREEN_H__
#define __VIZ_SCREEN_H__

#include <stddef.h>

extern unsigned int vizScreenWidth;
extern unsigned int vizScreenHeight;
extern size_t vizScreenPitch;
extern size_t vizScreenSize;
extern size_t vizScreenChannelSize;

#define SCREEN_SM_SIZE sizeof(BYTE) * screen->GetWidth() * screen->GetHeight() * 10

#define SCREEN_BUFFER_SM_ADDRESS 0
#define SCREEN_BUFFER_SM_SIZE 4
#define DEPTH_BUFFER_SM_ADDRESS 4
#define DEPTH_BUFFER_SM_SIZE 1
#define LABELS_BUFFER_SM_ADDRESS 5
#define LABELS_BUFFER_SM_SIZE 1
#define MAP_BUFFER_SM_ADDRESS 6
#define MAP_BUFFER_SM_SIZE 4

enum VIZScreenFormat {
    VIZ_SCREEN_CRCGCB           = 0,
    VIZ_SCREEN_RGB24            = 1,
    VIZ_SCREEN_RGBA32           = 2,
    VIZ_SCREEN_ARGB32           = 3,
    VIZ_SCREEN_CBCGCR           = 4,
    VIZ_SCREEN_BGR24            = 5,
    VIZ_SCREEN_BGRA32           = 6,
    VIZ_SCREEN_ABGR32           = 7,
    VIZ_SCREEN_GRAY8            = 8,
    VIZ_SCREEN_DOOM_256_COLORS8 = 9
};

void VIZ_ScreenInit();

void VIZ_ScreenFormatUpdate();

void VIZ_ScreenSetSize();

void VIZ_CopyBuffer(unsigned int startPosition);

void VIZ_ScreenUpdate();

void VIZ_ScreenLevelMapUpdate();

void VIZ_ScreenClose();

#endif

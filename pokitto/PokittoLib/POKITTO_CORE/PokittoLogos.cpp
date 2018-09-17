/**************************************************************************/
/*!
    @file     PokittoLogos.cpp
    @author   Jonne Valola

    @section LICENSE

    Software License Agreement (BSD License)

    Copyright (c) 2015, Jonne Valola
    All rights reserved.

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions are met:
    1. Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.
    2. Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.
    3. Neither the name of the copyright holders nor the
    names of its contributors may be used to endorse or promote products
    derived from this software without specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS ''AS IS'' AND ANY
    EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
    WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
    DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE FOR ANY
    DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
    (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
    LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
    ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
    (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
    SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
/**************************************************************************/


#include "PokittoLogos.h"

const uint8_t Pokitto_speaker[] = {
16,16,
0x00,0x00,0x01,0x00,0x03,0x00,0x05,0x04,0x09,0x12,0x71,0x4A,0x71,0x2A,0x71,0x2A,0x71,0x2A,0x71,0x2A,0x71,0x4A,0x09,0x12,0x05,0x04,0x03,0x00,0x01,0x00,0x00,0x00
};

const uint8_t Pokitto_headphones[] = {
16,16,
0x00,0x00,0x0F,0xF0,0x18,0x18,0x10,0x08,0x20,0x04,0x20,0x04,0x70,0x0E,0x70,0x0E,0x70,0x0E,0x70,0x0E,0x70,0x0E,0x20,0x04,0x00,0x04,0x00,0x08,0x00,0x04,0x00,0x08
};

const uint8_t Pokitto_volumebar[] = {
4,4,
0xE0,0xE0,0xE0,0xE0
};

const uint8_t Pokitto_logo[] = {
184,56,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x84,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xF8,0x00,0x00,0x00,0x00,0x7F,0xC0,0x0F,0xF8,0x00,0x00,0x01,0x72,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xF0,0x00,0x03,0xFC,0x00,0x7F,0xC0,0x1F,0xF0,0x00,0x00,0x01,0x4A,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xF0,0x00,0x07,0xFC,0x00,0x7F,0xC0,0x1F,0xF0,0x00,0x00,0x01,0x72,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xE0,0x00,0x07,0xFC,0x00,0xFF,0x80,0x3F,0xE0,0x00,0x00,0x01,0x4A,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xE0,0x00,0x0F,0xF8,0x00,0xFF,0x80,0x3F,0xE0,0x00,0x00,0x01,0x02,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xC0,0x00,0x0F,0xF8,0x01,0xFF,0x00,0x7F,0xC0,0x00,0x00,0x00,0x84,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xC0,0x00,0x1F,0xF0,0x01,0xFF,0x00,0x7F,0xC0,0x00,0x00,0x00,0x78,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xC0,0x00,0x1F,0xF0,0x03,0xFE,0x00,0xFF,0xC0,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x80,0x00,0x3F,0xE0,0x03,0xFE,0x00,0xFF,0x80,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0x80,0x00,0x00,0x00,0x07,0xFC,0x01,0xFF,0x80,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xFF,0x00,0x00,0x00,0x00,0x07,0xFC,0x01,0xFF,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xFF,0x00,0x00,0x00,0x00,0x0F,0xFC,0x03,0xFF,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x0F,0xFF,0xE0,0x01,0xFF,0xFC,0x03,0xFF,0xFF,0xFC,0xFF,0x9F,0xEF,0xFF,0xFB,0xFF,0xFF,0x0F,0xFF,0xE0,0x00,
0x00,0x00,0xCF,0xFF,0xF0,0x09,0xFF,0xFE,0x03,0xFF,0xFF,0xFC,0xFF,0x9F,0xEF,0xFF,0xFB,0xFF,0xFE,0x27,0xFF,0xF0,0x00,
0x00,0x01,0xCF,0xFF,0xF8,0x1D,0xFF,0xFF,0x03,0xFF,0xFF,0xF9,0xFF,0x3F,0xF7,0xFF,0xFD,0xFF,0xFE,0x67,0xFF,0xF8,0x00,
0x00,0x01,0xEF,0xFF,0xFC,0x1D,0xFF,0xFF,0x03,0xFF,0xFF,0xF9,0xFF,0x3F,0xF7,0xFF,0xFD,0xFF,0xFC,0xF7,0xFF,0xFC,0x00,
0x00,0x03,0xE7,0xFF,0xFC,0x3C,0xFF,0xFF,0x8B,0xFF,0xFF,0xF3,0xFE,0x3F,0xF3,0xFF,0xFC,0xFF,0xFC,0xF3,0xFF,0xFC,0x00,
0x00,0x03,0xE7,0xFF,0xFC,0x3E,0xFF,0xFF,0x89,0xFF,0xFF,0xF3,0xFE,0x7F,0xFB,0xFF,0xFE,0xFF,0xF9,0xF3,0xFF,0xFC,0x00,
0x00,0x07,0xF7,0xFF,0xFC,0x7E,0xFF,0xFF,0x99,0xFF,0xFF,0xF3,0xFE,0x7F,0xF9,0xFF,0xFE,0x7F,0xF9,0xFB,0xFF,0xFC,0x00,
0x00,0x07,0xF3,0xFF,0xFC,0x7E,0x7F,0xFF,0x9D,0xFF,0xFF,0xE7,0xFC,0x7F,0xFC,0x7F,0xFF,0x1F,0xF3,0xF9,0xFF,0xFC,0x00,
0x00,0x0F,0xF0,0x07,0xFC,0xFE,0x00,0xFF,0x3D,0xFE,0x00,0x07,0xFC,0x00,0xFF,0x00,0x3F,0xC0,0x03,0xF8,0x03,0xF8,0x00,
0x00,0x0F,0xF0,0x07,0xF8,0xFE,0x00,0xFF,0x3C,0xFE,0x00,0x0F,0xF8,0x00,0xFF,0x80,0x3F,0xE0,0x07,0xF8,0x07,0xF8,0x00,
0x00,0x0F,0xF0,0x0F,0xF9,0xFE,0x01,0xFE,0x7C,0xFE,0x00,0x0F,0xF8,0x01,0xFF,0x00,0x7F,0xE0,0x07,0xF8,0x07,0xF8,0x00,
0x00,0x1F,0xE0,0x0F,0xF1,0xFC,0x01,0xFE,0x7E,0xFF,0x00,0x1F,0xF0,0x01,0xFF,0x00,0x7F,0xC0,0x0F,0xF0,0x0F,0xF0,0x00,
0x00,0x1F,0xE0,0x1F,0xF3,0xFC,0x03,0xFC,0xFE,0x7F,0x00,0x1F,0xF0,0x03,0xFE,0x00,0xFF,0xC0,0x0F,0xF0,0x0F,0xF0,0x00,
0x00,0x3F,0xC0,0x1F,0xE3,0xF8,0x03,0xFC,0xFE,0x7F,0x80,0x3F,0xE0,0x03,0xFE,0x00,0xFF,0x80,0x1F,0xE0,0x0F,0xE0,0x00,
0x00,0x3F,0xC0,0x3F,0xE7,0xF8,0x07,0xF8,0xFF,0x3F,0x80,0x3F,0xE0,0x07,0xFE,0x00,0xFF,0x80,0x1F,0xE0,0x1F,0xE0,0x00,
0x00,0x7F,0x80,0x3F,0xC7,0xF0,0x07,0xF9,0xFF,0x3F,0xC0,0x7F,0xC0,0x07,0xFC,0x01,0xFF,0x00,0x1F,0xC0,0x1F,0xC0,0x00,
0x00,0x7F,0x80,0x7F,0xC7,0xF0,0x0F,0xF1,0xFF,0x1F,0xE0,0x7F,0xC0,0x0F,0xFC,0x01,0xFF,0x00,0x3F,0xC0,0x3F,0xC0,0x00,
0x00,0x7F,0x80,0x7F,0x8F,0xF0,0x0F,0xF3,0xFE,0x1F,0xF0,0xFF,0x80,0x0F,0xF8,0x03,0xFE,0x00,0x3F,0x80,0x3F,0x80,0x00,
0x00,0xFF,0x80,0x7F,0x8F,0xF0,0x0F,0xE3,0xFE,0x0F,0xF8,0xFF,0x80,0x0F,0xF8,0x03,0xFE,0x00,0x3F,0xC0,0x3F,0x80,0x00,
0x00,0xFF,0xFE,0x7F,0x1F,0xFF,0xEF,0xE7,0xFC,0x0F,0xF9,0xFF,0x00,0x1F,0xF0,0x07,0xFC,0x00,0x7F,0xFF,0x3F,0x80,0x00,
0x01,0xFF,0xFF,0x7E,0x1F,0xFF,0xE7,0xC7,0xFC,0x07,0xF9,0xFF,0x00,0x1F,0xF0,0x07,0xFC,0x00,0x7F,0xFF,0xBF,0x00,0x00,
0x01,0xFF,0xFF,0x3E,0x1F,0xFF,0xE7,0xCF,0xF8,0x07,0xF9,0xFF,0x00,0x3F,0xE0,0x0F,0xF8,0x00,0x7F,0xFF,0x9E,0x00,0x00,
0x01,0xFF,0xFF,0x3C,0x1F,0xFF,0xF7,0x87,0xF8,0x03,0xF3,0xFE,0x00,0x3F,0xE0,0x0F,0xF8,0x00,0x7F,0xFF,0x9E,0x00,0x00,
0x03,0xFF,0xFF,0xB8,0x0F,0xFF,0xF3,0x07,0xF0,0x01,0xF3,0xFE,0x00,0x7F,0xC0,0x1F,0xF0,0x00,0x3F,0xFF,0xDC,0x00,0x00,
0x03,0xFF,0xFF,0x98,0x0F,0xFF,0xF3,0x03,0xF0,0x00,0xE7,0xFC,0x00,0x7F,0xC0,0x1F,0xF0,0x00,0x3F,0xFF,0xCC,0x00,0x00,
0x07,0xFF,0xFF,0x90,0x07,0xFF,0xFA,0x03,0xF0,0x00,0xE7,0xFC,0x00,0xFF,0x80,0x3F,0xF0,0x00,0x1F,0xFF,0xC8,0x00,0x00,
0x07,0xFF,0xFF,0x80,0x03,0xFF,0xF8,0x00,0xE0,0x00,0x47,0xF8,0x00,0xFF,0x80,0x3F,0xE0,0x00,0x03,0xFF,0xC0,0x00,0x00,
0x07,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x0F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x0F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x0F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x1F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x1F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x1F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
};



/*
 * (C) Copyright 2014 Aurélien Rodot. All rights reserved.
 *
 * This file is part of the Gamebuino Library (http://gamebuino.com)
 *
 * The Gamebuino Library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 */

#ifndef FONT3X5_C
#define FONT3X5_C

#include <stdint.h>
#include "PokittoFonts.h"

#define PROGMEM

const uint8_t font3x5[] PROGMEM = {
	3,5,0,0, //width and height, start char and only caps
    3, 0x3F, 0x21, 0x3F, // 0
    3,0x12, 0x08, 0x12, // 1
    3,0x0A, 0x10, 0x0A, // 2
    3,0x0E, 0x1C, 0x0E, // 3
    3,0x0C, 0x1E, 0x0C, // 4
    3,0x14, 0x1A, 0x14, // 5
    3,0x16, 0x1F, 0x16, // 6
    3,0x1E, 0x13, 0x1E, // 7
    3,0x1E, 0x1B, 0x1E, // 8
    3,0x1E, 0x1F, 0x1E, // 9
    3,0x3F, 0x21, 0x3F, // 10
    3,0x3A, 0x2F, 0x3A, // 11
    3,0x17, 0x3D, 0x17, // 12
    3,0x3F, 0x21, 0x3F, // 13
    3,0x18, 0x1F, 0x02, // 14
    3,0x04, 0x0A, 0x04, // 15
    3,0x1F, 0x0E, 0x04, // 16
    3,0x04, 0x0E, 0x1F, // 17
    3,0x0A, 0x1F, 0x0A, // 18
    3,0x0E, 0x0E, 0x1F, // 19
    3,0x04, 0x11, 0x0E, // 20
    3,0x2E, 0x25, 0x2E, // 21
    3,0x2F, 0x2A, 0x2E, // 22
    3,0x26, 0x29, 0x29, // 23
    3,0x02, 0x1F, 0x02, // 24
    3,0x08, 0x1F, 0x08, // 25
    3,0x15, 0x0E, 0x04, // 26
    3,0x04, 0x0E, 0x15, // 27
    3,0x0E, 0x15, 0x15, // 28
    3,0x1B, 0x15, 0x1B, // 29
    3,0x04, 0x06, 0x04, // 30
    3,0x04, 0x0C, 0x04, // 31
    3,0x00, 0x00, 0x00, // 32
    3,0x00, 0x17, 0x00, // 33
    3,0x03, 0x00, 0x03, // 34
    3,0x1F, 0x0A, 0x1F, // 35
    3,0x16, 0x37, 0x1A, // 36
    3,0x19, 0x04, 0x13, // 37
    3,0x0A, 0x15, 0x3A, // 38
    3,0x00, 0x03, 0x00, // 39
    3,0x00, 0x0E, 0x11, // 40
    3,0x11, 0x0E, 0x00, // 41
    3,0x0A, 0x04, 0x0A, // 42
    3,0x04, 0x0E, 0x04, // 43
    3,0x00, 0x30, 0x00, // 44
    3,0x04, 0x04, 0x04, // 45
    3,0x00, 0x10, 0x00, // 46
    3,0x18, 0x04, 0x03, // 47
    3,0x1F, 0x11, 0x1F, // 48
    3,0x12, 0x1F, 0x10, // 49
    3,0x1D, 0x15, 0x17, // 50
    3,0x11, 0x15, 0x1F, // 51
    3,0x07, 0x04, 0x1F, // 52
    3,0x17, 0x15, 0x1D, // 53
    3,0x1F, 0x15, 0x1D, // 54
    3,0x01, 0x01, 0x1F, // 55
    3,0x1F, 0x15, 0x1F, // 56
    3,0x17, 0x15, 0x1F, // 57
    3,0x00, 0x0A, 0x00, // 58
    3,0x00, 0x32, 0x00, // 59
    3,0x04, 0x0A, 0x11, // 60
    3,0x0A, 0x0A, 0x0A, // 61
    3,0x11, 0x0A, 0x04, // 62
    3,0x01, 0x15, 0x02, // 63
    3,0x0E, 0x11, 0x17, // 64
    3,0x1E, 0x05, 0x1E, // 65
    3,0x1F, 0x15, 0x0A, // 66
    3,0x0E, 0x11, 0x0A, // 67
    3,0x1F, 0x11, 0x0E, // 68
    3,0x1F, 0x15, 0x11, // 69
    3,0x1F, 0x05, 0x01, // 70
    3,0x0E, 0x11, 0x1D, // 71
    3,0x1F, 0x04, 0x1F, // 72
    3,0x11, 0x1F, 0x11, // 73
    3,0x08, 0x10, 0x0F, // 74
    3,0x1F, 0x04, 0x1B, // 75
    3,0x1F, 0x10, 0x10, // 76
    3,0x1F, 0x06, 0x1F, // 77
    3,0x1E, 0x04, 0x0F, // 78
    3,0x0E, 0x11, 0x0E, // 79
    3,0x1F, 0x09, 0x06, // 80
    3,0x0E, 0x11, 0x2E, // 81
    3,0x1F, 0x05, 0x1A, // 82
    3,0x12, 0x15, 0x09, // 83
    3,0x01, 0x1F, 0x01, // 84
    3,0x1F, 0x10, 0x1F, // 85
    3,0x0F, 0x18, 0x0F, // 86
    3,0x1F, 0x0C, 0x1F, // 87
    3,0x1B, 0x04, 0x1B, // 88
    3,0x03, 0x1C, 0x03, // 89
    3,0x19, 0x15, 0x13, // 90
    3,0x00, 0x1F, 0x11, // 91
    3,0x03, 0x04, 0x18, // 92
    3,0x11, 0x1F, 0x00, // 93
    3,0x02, 0x01, 0x02, // 94
    3,0x20, 0x20, 0x20, // 95
    3,0x00, 0x01, 0x02, // 96
    3,0x0C, 0x12, 0x1E, // 97
    3,0x1F, 0x12, 0x0C, // 98
    3,0x0C, 0x12, 0x12, // 99
    3,0x0C, 0x12, 0x1F, // 100
    3,0x0C, 0x1A, 0x14, // 101
    3,0x04, 0x1E, 0x05, // 102
    3,0x24, 0x2A, 0x1E, // 103
    3,0x1F, 0x02, 0x1C, // 104
    3,0x14, 0x1D, 0x10, // 105
    3,0x20, 0x20, 0x1D, // 106
    3,0x1F, 0x08, 0x14, // 107
    3,0x11, 0x1F, 0x10, // 108
    3,0x1E, 0x04, 0x1E, // 109
    3,0x1E, 0x02, 0x1C, // 110
    3,0x0C, 0x12, 0x0C, // 111
    3,0x3E, 0x0A, 0x04, // 112
    3,0x0C, 0x12, 0x3E, // 113
    3,0x1E, 0x04, 0x02, // 114
    3,0x14, 0x16, 0x0A, // 115
    3,0x02, 0x0F, 0x12, // 116
    3,0x0E, 0x10, 0x1E, // 117
    3,0x0E, 0x10, 0x0E, // 118
    3,0x1E, 0x08, 0x1E, // 119
    3,0x12, 0x0C, 0x12, // 120
    3,0x26, 0x28, 0x1E, // 121
    3,0x32, 0x2A, 0x26, // 122
    3,0x04, 0x1E, 0x21, // 123
    3,0x00, 0x1F, 0x00, // 124
    3,0x21, 0x1E, 0x04, // 125
    3,0x01, 0x02, 0x01, // 126
    3,0x3F, 0x21, 0x3F // 127
};

#endif


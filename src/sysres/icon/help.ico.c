///////////////////////////////////////////////////////////////////////////////
//
//                          IMPORTANT NOTICE
//
// The following open source license statement does not apply to any
// entity in the Exception List published by FMSoft.
//
// For more information, please visit:
//
// https://www.fmsoft.cn/exception-list
//
//////////////////////////////////////////////////////////////////////////////
/*
 *   This file is part of MiniGUI, a mature cross-platform windowing
 *   and Graphics User Interface (GUI) support system for embedded systems
 *   and smart IoT devices.
 *
 *   Copyright (C) 2002~2018, Beijing FMSoft Technologies Co., Ltd.
 *   Copyright (C) 1998~2002, WEI Yongming
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 *   Or,
 *
 *   As this program is a library, any link to this program must follow
 *   GNU General Public License version 3 (GPLv3). If you cannot accept
 *   GPLv3, you need to be licensed from FMSoft.
 *
 *   If you have got a commercial license of this program, please use it
 *   under the terms and conditions of the commercial license.
 *
 *   For more information about the commercial license, please refer to
 *   <http://www.minigui.com/blog/minigui-licensing-policy/>.
 */

#include "common.h"

#ifdef _MGINCORE_RES

//data of "help.ico"

const unsigned char _mgir_ico_help_data[]={
    0x00,0x00,0x01,0x00,0x02,0x00,0x20,0x20,    0x00,0x00,0x01,0x00,0x08,0x00,0xA8,0x08,
    0x00,0x00,0x26,0x00,0x00,0x00,0x10,0x10,    0x00,0x00,0x01,0x00,0x08,0x00,0x68,0x05,
    0x00,0x00,0xCE,0x08,0x00,0x00,0x28,0x00,    0x00,0x00,0x20,0x00,0x00,0x00,0x40,0x00,
    0x00,0x00,0x01,0x00,0x08,0x00,0x00,0x00,    0x00,0x00,0x80,0x04,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x80,    0x00,0x00,0x00,0x80,0x80,0x00,0x80,0x00,
    0x00,0x00,0x80,0x00,0x80,0x00,0x80,0x80,    0x00,0x00,0x80,0x80,0x80,0x00,0xC0,0xC0,
    0xC0,0x00,0x00,0x00,0xFF,0x00,0x00,0xFF,    0x00,0x00,0x00,0xFF,0xFF,0x00,0xFF,0x00,
    0x00,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xFF,    0x00,0x00,0xFF,0xFF,0xFF,0x00,0x09,0x09,
    0x09,0x00,0x12,0x12,0x12,0x00,0x1F,0x1F,    0x1F,0x00,0x2C,0x2C,0x2C,0x00,0x39,0x39,
    0x39,0x00,0x45,0x45,0x45,0x00,0x52,0x52,    0x52,0x00,0x5F,0x5F,0x5F,0x00,0x6C,0x6C,
    0x6C,0x00,0x78,0x78,0x78,0x00,0x85,0x85,    0x85,0x00,0x92,0x92,0x92,0x00,0x9F,0x9F,
    0x9F,0x00,0xAB,0xAB,0xAB,0x00,0xB8,0xB8,    0xB8,0x00,0xC5,0xC5,0xC5,0x00,0xD2,0xD2,
    0xD2,0x00,0xDE,0xDE,0xDE,0x00,0xEB,0xEB,    0xEB,0x00,0xF8,0xF8,0xF8,0x00,0xF0,0xFB,
    0xFF,0x00,0xA4,0xA0,0xA0,0x00,0xC0,0xDC,    0xC0,0x00,0xF0,0xCA,0xA6,0x00,0x00,0x00,
    0x3E,0x00,0x00,0x00,0x5D,0x00,0x00,0x00,    0x7C,0x00,0x00,0x00,0x9B,0x00,0x00,0x00,
    0xBA,0x00,0x00,0x00,0xD9,0x00,0x00,0x00,    0xF0,0x00,0x24,0x24,0xFF,0x00,0x48,0x48,
    0xFF,0x00,0x6C,0x6C,0xFF,0x00,0x90,0x90,    0xFF,0x00,0xB4,0xB4,0xFF,0x00,0x00,0x14,
    0x3E,0x00,0x00,0x1E,0x5D,0x00,0x00,0x28,    0x7C,0x00,0x00,0x32,0x9B,0x00,0x00,0x3C,
    0xBA,0x00,0x00,0x46,0xD9,0x00,0x00,0x55,    0xF0,0x00,0x24,0x6D,0xFF,0x00,0x48,0x85,
    0xFF,0x00,0x6C,0x9D,0xFF,0x00,0x90,0xB5,    0xFF,0x00,0xB4,0xCD,0xFF,0x00,0x00,0x2A,
    0x3E,0x00,0x00,0x3F,0x5D,0x00,0x00,0x54,    0x7C,0x00,0x00,0x69,0x9B,0x00,0x00,0x7E,
    0xBA,0x00,0x00,0x93,0xD9,0x00,0x00,0xAA,    0xF0,0x00,0x24,0xB6,0xFF,0x00,0x48,0xC2,
    0xFF,0x00,0x6C,0xCE,0xFF,0x00,0x90,0xDA,    0xFF,0x00,0xB4,0xE6,0xFF,0x00,0x00,0x3E,
    0x3E,0x00,0x00,0x5D,0x5D,0x00,0x00,0x7C,    0x7C,0x00,0x00,0x9B,0x9B,0x00,0x00,0xBA,
    0xBA,0x00,0x00,0xD9,0xD9,0x00,0x00,0xF0,    0xF0,0x00,0x24,0xFF,0xFF,0x00,0x48,0xFF,
    0xFF,0x00,0x6C,0xFF,0xFF,0x00,0x90,0xFF,    0xFF,0x00,0xB4,0xFF,0xFF,0x00,0x00,0x3E,
    0x2A,0x00,0x00,0x5D,0x3F,0x00,0x00,0x7C,    0x54,0x00,0x00,0x9B,0x69,0x00,0x00,0xBA,
    0x7E,0x00,0x00,0xD9,0x93,0x00,0x00,0xF0,    0xAA,0x00,0x24,0xFF,0xB6,0x00,0x48,0xFF,
    0xC2,0x00,0x6C,0xFF,0xCE,0x00,0x90,0xFF,    0xDA,0x00,0xB4,0xFF,0xE6,0x00,0x00,0x3E,
    0x14,0x00,0x00,0x5D,0x1E,0x00,0x00,0x7C,    0x28,0x00,0x00,0x9B,0x32,0x00,0x00,0xBA,
    0x3C,0x00,0x00,0xD9,0x46,0x00,0x00,0xF0,    0x55,0x00,0x24,0xFF,0x6D,0x00,0x48,0xFF,
    0x85,0x00,0x6C,0xFF,0x9D,0x00,0x90,0xFF,    0xB5,0x00,0xB4,0xFF,0xCD,0x00,0x00,0x3E,
    0x00,0x00,0x00,0x5D,0x00,0x00,0x00,0x7C,    0x00,0x00,0x00,0x9B,0x00,0x00,0x00,0xBA,
    0x00,0x00,0x00,0xD9,0x00,0x00,0x00,0xF0,    0x00,0x00,0x24,0xFF,0x24,0x00,0x48,0xFF,
    0x48,0x00,0x6C,0xFF,0x6C,0x00,0x90,0xFF,    0x90,0x00,0xB4,0xFF,0xB4,0x00,0x14,0x3E,
    0x00,0x00,0x1E,0x5D,0x00,0x00,0x28,0x7C,    0x00,0x00,0x32,0x9B,0x00,0x00,0x3C,0xBA,
    0x00,0x00,0x46,0xD9,0x00,0x00,0x55,0xF0,    0x00,0x00,0x6D,0xFF,0x24,0x00,0x85,0xFF,
    0x48,0x00,0x9D,0xFF,0x6C,0x00,0xB5,0xFF,    0x90,0x00,0xCD,0xFF,0xB4,0x00,0x2A,0x3E,
    0x00,0x00,0x3F,0x5D,0x00,0x00,0x54,0x7C,    0x00,0x00,0x69,0x9B,0x00,0x00,0x7E,0xBA,
    0x00,0x00,0x93,0xD9,0x00,0x00,0xAA,0xF0,    0x00,0x00,0xB6,0xFF,0x24,0x00,0xC2,0xFF,
    0x48,0x00,0xCE,0xFF,0x6C,0x00,0xDA,0xFF,    0x90,0x00,0xE6,0xFF,0xB4,0x00,0x3E,0x3E,
    0x00,0x00,0x5D,0x5D,0x00,0x00,0x7C,0x7C,    0x00,0x00,0x9B,0x9B,0x00,0x00,0xBA,0xBA,
    0x00,0x00,0xD9,0xD9,0x00,0x00,0xF0,0xF0,    0x00,0x00,0xFF,0xFF,0x24,0x00,0xFF,0xFF,
    0x48,0x00,0xFF,0xFF,0x6C,0x00,0xFF,0xFF,    0x90,0x00,0xFF,0xFF,0xB4,0x00,0x3E,0x2A,
    0x00,0x00,0x5D,0x3F,0x00,0x00,0x7C,0x54,    0x00,0x00,0x9B,0x69,0x00,0x00,0xBA,0x7E,
    0x00,0x00,0xD9,0x93,0x00,0x00,0xF0,0xAA,    0x00,0x00,0xFF,0xB6,0x24,0x00,0xFF,0xC2,
    0x48,0x00,0xFF,0xCE,0x6C,0x00,0xFF,0xDA,    0x90,0x00,0xFF,0xE6,0xB4,0x00,0x3E,0x14,
    0x00,0x00,0x5D,0x1E,0x00,0x00,0x7C,0x28,    0x00,0x00,0x9B,0x32,0x00,0x00,0xBA,0x3C,
    0x00,0x00,0xD9,0x46,0x00,0x00,0xF0,0x55,    0x00,0x00,0xFF,0x6D,0x24,0x00,0xFF,0x85,
    0x48,0x00,0xFF,0x9D,0x6C,0x00,0xFF,0xB5,    0x90,0x00,0xFF,0xCD,0xB4,0x00,0x3E,0x00,
    0x00,0x00,0x5D,0x00,0x00,0x00,0x7C,0x00,    0x00,0x00,0x9B,0x00,0x00,0x00,0xBA,0x00,
    0x00,0x00,0xD9,0x00,0x00,0x00,0xF0,0x00,    0x00,0x00,0xFF,0x24,0x24,0x00,0xFF,0x48,
    0x48,0x00,0xFF,0x6C,0x6C,0x00,0xFF,0x90,    0x90,0x00,0xFF,0xB4,0xB4,0x00,0x3E,0x00,
    0x14,0x00,0x5D,0x00,0x1E,0x00,0x7C,0x00,    0x28,0x00,0x9B,0x00,0x32,0x00,0xBA,0x00,
    0x3C,0x00,0xD9,0x00,0x46,0x00,0xF0,0x00,    0x55,0x00,0xFF,0x24,0x6D,0x00,0xFF,0x48,
    0x85,0x00,0xFF,0x6C,0x9D,0x00,0xFF,0x90,    0xB5,0x00,0xFF,0xB4,0xCD,0x00,0x3E,0x00,
    0x2A,0x00,0x5D,0x00,0x3F,0x00,0x7C,0x00,    0x54,0x00,0x9B,0x00,0x69,0x00,0xBA,0x00,
    0x7E,0x00,0xD9,0x00,0x93,0x00,0xF0,0x00,    0xAA,0x00,0xFF,0x24,0xB6,0x00,0xFF,0x48,
    0xC2,0x00,0xFF,0x6C,0xCE,0x00,0xFF,0x90,    0xDA,0x00,0xFF,0xB4,0xE6,0x00,0x3E,0x00,
    0x3E,0x00,0x5D,0x00,0x5D,0x00,0x7C,0x00,    0x7C,0x00,0x9B,0x00,0x9B,0x00,0xBA,0x00,
    0xBA,0x00,0xD9,0x00,0xD9,0x00,0xF0,0x00,    0xF0,0x00,0xFF,0x24,0xFF,0x00,0xFF,0x48,
    0xFF,0x00,0xFF,0x6C,0xFF,0x00,0xFF,0x90,    0xFF,0x00,0xFF,0xB4,0xFF,0x00,0x2A,0x00,
    0x3E,0x00,0x3F,0x00,0x5D,0x00,0x54,0x00,    0x7C,0x00,0x69,0x00,0x9B,0x00,0x7E,0x00,
    0xBA,0x00,0x93,0x00,0xD9,0x00,0xAA,0x00,    0xF0,0x00,0xB6,0x24,0xFF,0x00,0xC2,0x48,
    0xFF,0x00,0xCE,0x6C,0xFF,0x00,0xDA,0x90,    0xFF,0x00,0xE6,0xB4,0xFF,0x00,0x14,0x00,
    0x3E,0x00,0x1E,0x00,0x5D,0x00,0x28,0x00,    0x7C,0x00,0x32,0x00,0x9B,0x00,0x3C,0x00,
    0xBA,0x00,0x46,0x00,0xD9,0x00,0x55,0x00,    0xF0,0x00,0x6D,0x24,0xFF,0x00,0x85,0x48,
    0xFF,0x00,0x9D,0x6C,0xFF,0x00,0xB5,0x90,    0xFF,0x00,0xCD,0xB4,0xFF,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x07,0x07,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x07,0x07,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,
    0x00,0x07,0x07,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x0F,
    0x00,0x07,0x07,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x07,0x00,0x0F,0x0F,0x0F,
    0x00,0x07,0x07,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x07,0x07,0x07,0x07,0x00,0x0F,0x0F,0x0F,
    0x00,0x07,0x07,0x07,0x07,0x07,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,    0x07,0x00,0x00,0x00,0x08,0x0F,0x0F,0x0F,
    0x00,0x07,0x07,0x07,0x07,0x07,0x07,0x07,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x00,    0x00,0x08,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
    0x08,0x00,0x00,0x00,0x07,0x07,0x07,0x07,    0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x0F,    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
    0x0F,0x0F,0x0F,0x08,0x00,0x00,0x07,0x07,    0x07,0x07,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x08,0x0F,0x0F,0x0F,    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x08,0x00,0x07,    0x07,0x07,0x07,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x0F,0x0F,0x0F,0x0F,0x0F,    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x00,    0x07,0x07,0x07,0x07,0x00,0x00,0x00,0x00,
    0x00,0x00,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,    0x0F,0x0F,0x0F,0x08,0x0C,0x0C,0x08,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,    0x00,0x07,0x07,0x07,0x07,0x00,0x00,0x00,
    0x07,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,    0x0F,0x0F,0x0F,0x0C,0x0C,0x0C,0x0C,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,    0x0F,0x00,0x07,0x07,0x07,0x00,0x00,0x07,
    0x08,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,    0x0F,0x0F,0x0F,0x0C,0x0C,0x0C,0x0C,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,    0x0F,0x08,0x00,0x07,0x07,0x07,0x00,0x07,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,    0x0F,0x0F,0x0F,0x08,0x0C,0x0C,0x08,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,    0x0F,0x0F,0x00,0x07,0x07,0x07,0x07,0x08,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,    0x0F,0x0F,0x08,0x00,0x07,0x07,0x07,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,    0x0F,0x0F,0x0F,0x0F,0x0C,0x0C,0x0F,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,    0x0F,0x0F,0x0F,0x00,0x07,0x07,0x07,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,    0x0F,0x0F,0x0F,0x0F,0x0C,0x0C,0x08,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,    0x0F,0x0F,0x0F,0x00,0x07,0x07,0x07,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,    0x0F,0x0F,0x0F,0x0F,0x0C,0x0C,0x0C,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,    0x0F,0x0F,0x0F,0x00,0x07,0x07,0x07,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,    0x0F,0x0F,0x0F,0x0F,0x08,0x0C,0x0C,0x0C,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,    0x0F,0x0F,0x0F,0x00,0x07,0x07,0x07,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,    0x08,0x0C,0x0C,0x08,0x0F,0x0C,0x0C,0x0C,
    0x0C,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,    0x0F,0x0F,0x0F,0x00,0x07,0x00,0x07,0x08,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,    0x0C,0x0C,0x0C,0x0C,0x0F,0x08,0x0C,0x0C,
    0x0C,0x0C,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,    0x0F,0x0F,0x08,0x00,0x07,0x00,0x00,0x07,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,    0x0C,0x0C,0x0C,0x0C,0x0F,0x0F,0x0C,0x0C,
    0x0C,0x0C,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,    0x0F,0x0F,0x00,0x07,0x00,0x00,0x00,0x07,
    0x08,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,    0x0C,0x0C,0x0F,0x0F,0x0F,0x0F,0x0C,0x0C,
    0x0C,0x0C,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,    0x0F,0x08,0x00,0x00,0x00,0x00,0x00,0x00,
    0x07,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,    0x08,0x0C,0x08,0x0F,0x0F,0x0C,0x0C,0x0C,
    0x0C,0x08,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,    0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x07,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,    0x0F,0x08,0x0C,0x0C,0x0C,0x0C,0x0C,0x0C,
    0x08,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x07,0x0F,0x0F,0x0F,0x0F,0x0F,    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x07,0x08,0x0F,0x0F,0x0F,    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x0F,0x08,0x07,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x07,0x07,0x08,0x0F,    0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
    0x0F,0x0F,0x0F,0x08,0x07,0x07,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x07,    0x07,0x08,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
    0x08,0x07,0x07,0x07,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x07,0x07,0x07,0x07,0x07,0x07,0x07,
    0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,
    0xE7,0xFF,0xFF,0xFF,0xC7,0xFF,0xFF,0xFF,    0x87,0xFF,0xFF,0xFF,0x07,0xFF,0xFF,0xFE,
    0x07,0xFF,0xFF,0xF8,0x07,0xFF,0xFF,0xC0,    0x00,0xFF,0xFF,0x00,0x00,0x3F,0xFE,0x00,
    0x00,0x1F,0xFC,0x00,0x00,0x0F,0xF8,0x00,    0x00,0x07,0xF0,0x00,0x00,0x03,0xE0,0x00,
    0x00,0x01,0xC0,0x00,0x00,0x01,0x80,0x00,    0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,    0x00,0x01,0x80,0x00,0x00,0x03,0x80,0x00,
    0x00,0x07,0xC0,0x00,0x00,0x0F,0xE0,0x00,    0x00,0x1F,0xF0,0x00,0x00,0x3F,0xF8,0x00,
    0x00,0x7F,0xFC,0x00,0x00,0xFF,0xFF,0x00,    0x03,0xFF,0xFF,0xE0,0x1F,0xFF,0x28,0x00,
    0x00,0x00,0x10,0x00,0x00,0x00,0x20,0x00,    0x00,0x00,0x01,0x00,0x08,0x00,0x00,0x00,
    0x00,0x00,0x40,0x01,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x80,
    0x00,0x00,0x00,0x80,0x80,0x00,0x80,0x00,    0x00,0x00,0x80,0x00,0x80,0x00,0x80,0x80,
    0x00,0x00,0x80,0x80,0x80,0x00,0xC0,0xC0,    0xC0,0x00,0x00,0x00,0xFF,0x00,0x00,0xFF,
    0x00,0x00,0x00,0xFF,0xFF,0x00,0xFF,0x00,    0x00,0x00,0xFF,0x00,0xFF,0x00,0xFF,0xFF,
    0x00,0x00,0xFF,0xFF,0xFF,0x00,0x09,0x09,    0x09,0x00,0x12,0x12,0x12,0x00,0x1F,0x1F,
    0x1F,0x00,0x2C,0x2C,0x2C,0x00,0x39,0x39,    0x39,0x00,0x45,0x45,0x45,0x00,0x52,0x52,
    0x52,0x00,0x5F,0x5F,0x5F,0x00,0x6C,0x6C,    0x6C,0x00,0x78,0x78,0x78,0x00,0x85,0x85,
    0x85,0x00,0x92,0x92,0x92,0x00,0x9F,0x9F,    0x9F,0x00,0xAB,0xAB,0xAB,0x00,0xB8,0xB8,
    0xB8,0x00,0xC5,0xC5,0xC5,0x00,0xD2,0xD2,    0xD2,0x00,0xDE,0xDE,0xDE,0x00,0xEB,0xEB,
    0xEB,0x00,0xF8,0xF8,0xF8,0x00,0xF0,0xFB,    0xFF,0x00,0xA4,0xA0,0xA0,0x00,0xC0,0xDC,
    0xC0,0x00,0xF0,0xCA,0xA6,0x00,0x00,0x00,    0x3E,0x00,0x00,0x00,0x5D,0x00,0x00,0x00,
    0x7C,0x00,0x00,0x00,0x9B,0x00,0x00,0x00,    0xBA,0x00,0x00,0x00,0xD9,0x00,0x00,0x00,
    0xF0,0x00,0x24,0x24,0xFF,0x00,0x48,0x48,    0xFF,0x00,0x6C,0x6C,0xFF,0x00,0x90,0x90,
    0xFF,0x00,0xB4,0xB4,0xFF,0x00,0x00,0x14,    0x3E,0x00,0x00,0x1E,0x5D,0x00,0x00,0x28,
    0x7C,0x00,0x00,0x32,0x9B,0x00,0x00,0x3C,    0xBA,0x00,0x00,0x46,0xD9,0x00,0x00,0x55,
    0xF0,0x00,0x24,0x6D,0xFF,0x00,0x48,0x85,    0xFF,0x00,0x6C,0x9D,0xFF,0x00,0x90,0xB5,
    0xFF,0x00,0xB4,0xCD,0xFF,0x00,0x00,0x2A,    0x3E,0x00,0x00,0x3F,0x5D,0x00,0x00,0x54,
    0x7C,0x00,0x00,0x69,0x9B,0x00,0x00,0x7E,    0xBA,0x00,0x00,0x93,0xD9,0x00,0x00,0xAA,
    0xF0,0x00,0x24,0xB6,0xFF,0x00,0x48,0xC2,    0xFF,0x00,0x6C,0xCE,0xFF,0x00,0x90,0xDA,
    0xFF,0x00,0xB4,0xE6,0xFF,0x00,0x00,0x3E,    0x3E,0x00,0x00,0x5D,0x5D,0x00,0x00,0x7C,
    0x7C,0x00,0x00,0x9B,0x9B,0x00,0x00,0xBA,    0xBA,0x00,0x00,0xD9,0xD9,0x00,0x00,0xF0,
    0xF0,0x00,0x24,0xFF,0xFF,0x00,0x48,0xFF,    0xFF,0x00,0x6C,0xFF,0xFF,0x00,0x90,0xFF,
    0xFF,0x00,0xB4,0xFF,0xFF,0x00,0x00,0x3E,    0x2A,0x00,0x00,0x5D,0x3F,0x00,0x00,0x7C,
    0x54,0x00,0x00,0x9B,0x69,0x00,0x00,0xBA,    0x7E,0x00,0x00,0xD9,0x93,0x00,0x00,0xF0,
    0xAA,0x00,0x24,0xFF,0xB6,0x00,0x48,0xFF,    0xC2,0x00,0x6C,0xFF,0xCE,0x00,0x90,0xFF,
    0xDA,0x00,0xB4,0xFF,0xE6,0x00,0x00,0x3E,    0x14,0x00,0x00,0x5D,0x1E,0x00,0x00,0x7C,
    0x28,0x00,0x00,0x9B,0x32,0x00,0x00,0xBA,    0x3C,0x00,0x00,0xD9,0x46,0x00,0x00,0xF0,
    0x55,0x00,0x24,0xFF,0x6D,0x00,0x48,0xFF,    0x85,0x00,0x6C,0xFF,0x9D,0x00,0x90,0xFF,
    0xB5,0x00,0xB4,0xFF,0xCD,0x00,0x00,0x3E,    0x00,0x00,0x00,0x5D,0x00,0x00,0x00,0x7C,
    0x00,0x00,0x00,0x9B,0x00,0x00,0x00,0xBA,    0x00,0x00,0x00,0xD9,0x00,0x00,0x00,0xF0,
    0x00,0x00,0x24,0xFF,0x24,0x00,0x48,0xFF,    0x48,0x00,0x6C,0xFF,0x6C,0x00,0x90,0xFF,
    0x90,0x00,0xB4,0xFF,0xB4,0x00,0x14,0x3E,    0x00,0x00,0x1E,0x5D,0x00,0x00,0x28,0x7C,
    0x00,0x00,0x32,0x9B,0x00,0x00,0x3C,0xBA,    0x00,0x00,0x46,0xD9,0x00,0x00,0x55,0xF0,
    0x00,0x00,0x6D,0xFF,0x24,0x00,0x85,0xFF,    0x48,0x00,0x9D,0xFF,0x6C,0x00,0xB5,0xFF,
    0x90,0x00,0xCD,0xFF,0xB4,0x00,0x2A,0x3E,    0x00,0x00,0x3F,0x5D,0x00,0x00,0x54,0x7C,
    0x00,0x00,0x69,0x9B,0x00,0x00,0x7E,0xBA,    0x00,0x00,0x93,0xD9,0x00,0x00,0xAA,0xF0,
    0x00,0x00,0xB6,0xFF,0x24,0x00,0xC2,0xFF,    0x48,0x00,0xCE,0xFF,0x6C,0x00,0xDA,0xFF,
    0x90,0x00,0xE6,0xFF,0xB4,0x00,0x3E,0x3E,    0x00,0x00,0x5D,0x5D,0x00,0x00,0x7C,0x7C,
    0x00,0x00,0x9B,0x9B,0x00,0x00,0xBA,0xBA,    0x00,0x00,0xD9,0xD9,0x00,0x00,0xF0,0xF0,
    0x00,0x00,0xFF,0xFF,0x24,0x00,0xFF,0xFF,    0x48,0x00,0xFF,0xFF,0x6C,0x00,0xFF,0xFF,
    0x90,0x00,0xFF,0xFF,0xB4,0x00,0x3E,0x2A,    0x00,0x00,0x5D,0x3F,0x00,0x00,0x7C,0x54,
    0x00,0x00,0x9B,0x69,0x00,0x00,0xBA,0x7E,    0x00,0x00,0xD9,0x93,0x00,0x00,0xF0,0xAA,
    0x00,0x00,0xFF,0xB6,0x24,0x00,0xFF,0xC2,    0x48,0x00,0xFF,0xCE,0x6C,0x00,0xFF,0xDA,
    0x90,0x00,0xFF,0xE6,0xB4,0x00,0x3E,0x14,    0x00,0x00,0x5D,0x1E,0x00,0x00,0x7C,0x28,
    0x00,0x00,0x9B,0x32,0x00,0x00,0xBA,0x3C,    0x00,0x00,0xD9,0x46,0x00,0x00,0xF0,0x55,
    0x00,0x00,0xFF,0x6D,0x24,0x00,0xFF,0x85,    0x48,0x00,0xFF,0x9D,0x6C,0x00,0xFF,0xB5,
    0x90,0x00,0xFF,0xCD,0xB4,0x00,0x3E,0x00,    0x00,0x00,0x5D,0x00,0x00,0x00,0x7C,0x00,
    0x00,0x00,0x9B,0x00,0x00,0x00,0xBA,0x00,    0x00,0x00,0xD9,0x00,0x00,0x00,0xF0,0x00,
    0x00,0x00,0xFF,0x24,0x24,0x00,0xFF,0x48,    0x48,0x00,0xFF,0x6C,0x6C,0x00,0xFF,0x90,
    0x90,0x00,0xFF,0xB4,0xB4,0x00,0x3E,0x00,    0x14,0x00,0x5D,0x00,0x1E,0x00,0x7C,0x00,
    0x28,0x00,0x9B,0x00,0x32,0x00,0xBA,0x00,    0x3C,0x00,0xD9,0x00,0x46,0x00,0xF0,0x00,
    0x55,0x00,0xFF,0x24,0x6D,0x00,0xFF,0x48,    0x85,0x00,0xFF,0x6C,0x9D,0x00,0xFF,0x90,
    0xB5,0x00,0xFF,0xB4,0xCD,0x00,0x3E,0x00,    0x2A,0x00,0x5D,0x00,0x3F,0x00,0x7C,0x00,
    0x54,0x00,0x9B,0x00,0x69,0x00,0xBA,0x00,    0x7E,0x00,0xD9,0x00,0x93,0x00,0xF0,0x00,
    0xAA,0x00,0xFF,0x24,0xB6,0x00,0xFF,0x48,    0xC2,0x00,0xFF,0x6C,0xCE,0x00,0xFF,0x90,
    0xDA,0x00,0xFF,0xB4,0xE6,0x00,0x3E,0x00,    0x3E,0x00,0x5D,0x00,0x5D,0x00,0x7C,0x00,
    0x7C,0x00,0x9B,0x00,0x9B,0x00,0xBA,0x00,    0xBA,0x00,0xD9,0x00,0xD9,0x00,0xF0,0x00,
    0xF0,0x00,0xFF,0x24,0xFF,0x00,0xFF,0x48,    0xFF,0x00,0xFF,0x6C,0xFF,0x00,0xFF,0x90,
    0xFF,0x00,0xFF,0xB4,0xFF,0x00,0x2A,0x00,    0x3E,0x00,0x3F,0x00,0x5D,0x00,0x54,0x00,
    0x7C,0x00,0x69,0x00,0x9B,0x00,0x7E,0x00,    0xBA,0x00,0x93,0x00,0xD9,0x00,0xAA,0x00,
    0xF0,0x00,0xB6,0x24,0xFF,0x00,0xC2,0x48,    0xFF,0x00,0xCE,0x6C,0xFF,0x00,0xDA,0x90,
    0xFF,0x00,0xE6,0xB4,0xFF,0x00,0x14,0x00,    0x3E,0x00,0x1E,0x00,0x5D,0x00,0x28,0x00,
    0x7C,0x00,0x32,0x00,0x9B,0x00,0x3C,0x00,    0xBA,0x00,0x46,0x00,0xD9,0x00,0x55,0x00,
    0xF0,0x00,0x6D,0x24,0xFF,0x00,0x85,0x48,    0xFF,0x00,0x9D,0x6C,0xFF,0x00,0xB5,0x90,
    0xFF,0x00,0xCD,0xB4,0xFF,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x0F,
    0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x07,0x00,0x00,0x0F,0x0F,
    0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x08,0x0F,0x0F,0x0F,
    0x00,0x07,0x07,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x08,0x0F,0x0F,0x0F,0x0F,0x0F,
    0x00,0x00,0x07,0x07,0x00,0x00,0x00,0x00,    0x07,0x08,0x0F,0x0F,0x0F,0x08,0x0F,0x0F,
    0x0F,0x08,0x00,0x07,0x07,0x00,0x00,0x07,    0x0F,0x0F,0x0F,0x0F,0x08,0x0C,0x08,0x0F,
    0x0F,0x0F,0x0F,0x00,0x07,0x00,0x00,0x07,    0x0F,0x0F,0x0F,0x0F,0x0F,0x08,0x0F,0x0F,
    0x0F,0x0F,0x0F,0x00,0x07,0x07,0x07,0x0F,    0x0F,0x0F,0x0F,0x0F,0x0F,0x0C,0x0F,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x00,0x07,0x07,0x0F,    0x0F,0x0F,0x0F,0x0F,0x0F,0x0C,0x0C,0x0F,
    0x0F,0x0F,0x0F,0x0F,0x00,0x07,0x07,0x0F,    0x0F,0x0F,0x0F,0x0F,0x0F,0x08,0x0C,0x0C,
    0x0F,0x0F,0x0F,0x0F,0x00,0x07,0x07,0x0F,    0x0F,0x0F,0x0F,0x0C,0x0C,0x0F,0x0C,0x0C,
    0x0F,0x0F,0x0F,0x0F,0x00,0x00,0x00,0x07,    0x0F,0x0F,0x0F,0x08,0x0C,0x0C,0x0C,0x08,
    0x0F,0x0F,0x0F,0x00,0x00,0x00,0x00,0x07,    0x08,0x0F,0x0F,0x0F,0x08,0x0C,0x08,0x0F,
    0x0F,0x0F,0x0F,0x00,0x00,0x00,0x00,0x00,    0x07,0x07,0x08,0x0F,0x0F,0x0F,0x0F,0x0F,
    0x0F,0x07,0x07,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x07,0x07,0x07,0x07,0x07,0x07,
    0x07,0x00,0x00,0x00,0x00,0x00,0xFF,0x8F,    0x00,0x00,0xFE,0x0F,0x00,0x00,0xF8,0x0F,
    0x00,0x00,0xF0,0x07,0x00,0x00,0xE0,0x03,    0x00,0x00,0xC0,0x01,0x00,0x00,0x80,0x01,
    0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x01,0x00,0x00,0x80,0x03,    0x00,0x00,0x80,0x03,0x00,0x00,0xC0,0x07,
    0x00,0x00,0xF0,0x1F,0x00,0x00
};
#endif //_MGINCORE_RES


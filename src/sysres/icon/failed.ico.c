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

//data of "failed.ico"

const unsigned char _mgir_ico_failed_data[]={
    0x00,0x00,0x01,0x00,0x02,0x00,0x20,0x20,    0x00,0x00,0x01,0x00,0x08,0x00,0xA8,0x08,
    0x00,0x00,0x26,0x00,0x00,0x00,0x10,0x10,    0x00,0x00,0x01,0x00,0x08,0x00,0x68,0x05,
    0x00,0x00,0xCE,0x08,0x00,0x00,0x28,0x00,    0x00,0x00,0x20,0x00,0x00,0x00,0x40,0x00,
    0x00,0x00,0x01,0x00,0x08,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x61,0x60,
    0x79,0x00,0xD6,0xD6,0xA6,0x00,0xC1,0xC1,    0x9B,0x00,0xCB,0xCB,0xA5,0x00,0xBD,0xBD,
    0x9B,0x00,0xCB,0xCB,0xAB,0x00,0xC1,0xC1,    0xA5,0x00,0xE0,0xE0,0xC1,0x00,0xC5,0xC5,
    0xAA,0x00,0xD6,0xD6,0xBB,0x00,0xE8,0xE8,    0xCB,0x00,0xF5,0xF5,0xDA,0x00,0xE0,0xE0,
    0xC8,0x00,0xDD,0xDD,0xC5,0x00,0xEC,0xEC,    0xD4,0x00,0xF8,0xF8,0xE8,0x00,0xFF,0xFF,
    0xF3,0x00,0xFF,0xFF,0xF5,0x00,0xFF,0xFF,    0xF6,0x00,0xFF,0xFF,0xF9,0x00,0xFF,0xFF,
    0xFA,0x00,0xFF,0xFF,0xFD,0x00,0x00,0x00,    0x00,0x00,0x01,0x02,0x0F,0x00,0x00,0x00,
    0xF6,0x00,0x00,0x00,0xF1,0x00,0x00,0x00,    0xEC,0x00,0x00,0x00,0xEB,0x00,0x00,0x00,
    0xE9,0x00,0x00,0x00,0xE5,0x00,0x00,0x00,    0xE0,0x00,0x00,0x00,0xDD,0x00,0x00,0x00,
    0xD6,0x00,0x00,0x00,0xD4,0x00,0x00,0x00,    0xD2,0x00,0x00,0x00,0xD1,0x00,0x00,0x00,
    0xCB,0x00,0x00,0x00,0xC9,0x00,0x00,0x00,    0xC6,0x00,0x00,0x00,0xC5,0x00,0x00,0x00,
    0xC2,0x00,0x00,0x00,0xBD,0x00,0x00,0x00,    0xBA,0x00,0x00,0x00,0xB9,0x00,0x00,0x00,
    0xB7,0x00,0x00,0x00,0xB5,0x00,0x00,0x00,    0xB3,0x00,0x00,0x00,0xB1,0x00,0x00,0x00,
    0xAF,0x00,0x00,0x00,0xAC,0x00,0x00,0x00,    0xA7,0x00,0x00,0x00,0xA5,0x00,0x00,0x00,
    0xA2,0x00,0x00,0x00,0xA1,0x00,0x00,0x00,    0x9F,0x00,0x00,0x00,0x9D,0x00,0x00,0x00,
    0x9A,0x00,0x00,0x00,0x98,0x00,0x00,0x00,    0x97,0x00,0x00,0x00,0x95,0x00,0x00,0x00,
    0x93,0x00,0x00,0x00,0x90,0x00,0x00,0x00,    0x8F,0x00,0x00,0x00,0x8C,0x00,0x00,0x00,
    0x8B,0x00,0x00,0x00,0x89,0x00,0x00,0x00,    0x86,0x00,0x00,0x00,0x85,0x00,0x00,0x00,
    0x82,0x00,0x00,0x00,0x80,0x00,0x00,0x00,    0x7F,0x00,0x01,0x01,0xCE,0x00,0x01,0x01,
    0xC1,0x00,0x01,0x01,0xAA,0x00,0x01,0x01,    0xA9,0x00,0x02,0x02,0xDA,0x00,0x02,0x02,
    0xB8,0x00,0x02,0x02,0xB0,0x00,0x02,0x02,    0xAD,0x00,0x01,0x01,0x78,0x00,0x01,0x01,
    0x74,0x00,0x01,0x01,0x6D,0x00,0x01,0x01,    0x5D,0x00,0x03,0x03,0xD5,0x00,0x03,0x03,
    0xD2,0x00,0x03,0x03,0xCB,0x00,0x03,0x03,    0xC1,0x00,0x02,0x02,0xA6,0x00,0x02,0x02,
    0xA5,0x00,0x02,0x02,0x9E,0x00,0x02,0x02,    0x9B,0x00,0x02,0x02,0x94,0x00,0x02,0x02,
    0x93,0x00,0x02,0x02,0x91,0x00,0x02,0x02,    0x8C,0x00,0x02,0x02,0x89,0x00,0x01,0x01,
    0x55,0x00,0x01,0x01,0x4A,0x00,0x03,0x03,    0xBE,0x00,0x03,0x03,0xBB,0x00,0x03,0x03,
    0xB6,0x00,0x03,0x03,0xB2,0x00,0x03,0x03,    0xA3,0x00,0x03,0x03,0xA1,0x00,0x01,0x01,
    0x38,0x00,0x05,0x05,0xF3,0x00,0x05,0x05,    0xDB,0x00,0x04,0x04,0xBE,0x00,0x04,0x04,
    0xBB,0x00,0x06,0x06,0xF5,0x00,0x06,0x06,    0xE8,0x00,0x05,0x05,0xCA,0x00,0x05,0x05,
    0xC8,0x00,0x05,0x05,0xC5,0x00,0x05,0x05,    0xC3,0x00,0x05,0x05,0xB9,0x00,0x04,0x04,
    0xA3,0x00,0x07,0x07,0xFD,0x00,0x06,0x06,    0xD0,0x00,0x06,0x06,0xCE,0x00,0x06,0x06,
    0xC9,0x00,0x05,0x05,0xB3,0x00,0x05,0x05,    0xA9,0x00,0x05,0x05,0xA6,0x00,0x07,0x07,
    0xD4,0x00,0x06,0x06,0xB6,0x00,0x06,0x06,    0xAE,0x00,0x08,0x08,0xCF,0x00,0x07,0x07,
    0xBB,0x00,0x07,0x07,0xB8,0x00,0x09,0x09,    0xD4,0x00,0x08,0x08,0xC6,0x00,0x08,0x08,
    0xC2,0x00,0x06,0x06,0x90,0x00,0x0A,0x0A,    0xD9,0x00,0x08,0x08,0xB5,0x00,0x0C,0x0C,
    0xFE,0x00,0x0B,0x0B,0xE1,0x00,0x0A,0x0A,    0xCA,0x00,0x0B,0x0B,0xD2,0x00,0x0A,0x0A,
    0xBC,0x00,0x0E,0x0E,0xF3,0x00,0x0D,0x0D,    0xDC,0x00,0x0D,0x0D,0xDA,0x00,0x0C,0x0C,
    0xC2,0x00,0x10,0x10,0xF6,0x00,0x0F,0x0F,    0xE3,0x00,0x0D,0x0D,0xCE,0x00,0x0E,0x0E,
    0xD0,0x00,0x12,0x12,0xFF,0x00,0x10,0x10,    0xD2,0x00,0x0F,0x0F,0xC7,0x00,0x13,0x13,
    0xEB,0x00,0x12,0x12,0xD6,0x00,0x11,0x11,    0xC1,0x00,0x15,0x15,0xE2,0x00,0x13,0x13,
    0xCF,0x00,0x18,0x18,0xFE,0x00,0x16,0x16,    0xDC,0x00,0x15,0x15,0xD5,0x00,0x19,0x19,
    0xE9,0x00,0x1B,0x1B,0xF3,0x00,0x1D,0x1D,    0xFF,0x00,0x19,0x19,0xD9,0x00,0x19,0x19,
    0xD6,0x00,0x1C,0x1C,0xE4,0x00,0x12,0x12,    0x92,0x00,0x21,0x21,0xFE,0x00,0x20,0x20,
    0xF8,0x00,0x20,0x20,0xF6,0x00,0x21,0x21,    0xEC,0x00,0x24,0x24,0xFF,0x00,0x26,0x26,
    0xFA,0x00,0x27,0x27,0xFF,0x00,0x1F,0x1F,    0xCB,0x00,0x25,0x25,0xEB,0x00,0x1F,0x1F,
    0xC1,0x00,0x2B,0x2B,0xFE,0x00,0x2C,0x2C,    0xFA,0x00,0x2E,0x2E,0xFF,0x00,0x2D,0x2D,
    0xF6,0x00,0x28,0x28,0xD2,0x00,0x31,0x31,    0xFF,0x00,0x33,0x33,0xFF,0x00,0x36,0x36,
    0xFF,0x00,0x38,0x38,0xFF,0x00,0x29,0x29,    0xBA,0x00,0x34,0x34,0xE7,0x00,0x27,0x27,
    0xAE,0x00,0x3B,0x3B,0xFF,0x00,0x3B,0x3B,    0xF8,0x00,0x3F,0x3F,0xFE,0x00,0x3D,0x3D,
    0xF4,0x00,0x42,0x42,0xFF,0x00,0x46,0x46,    0xFF,0x00,0x3B,0x3B,0xD7,0x00,0x3A,0x3A,
    0xCC,0x00,0x31,0x31,0xAC,0x00,0x49,0x49,    0xFF,0x00,0x4B,0x4B,0xFF,0x00,0x4D,0x4D,
    0xFF,0x00,0x4C,0x4C,0xFB,0x00,0x1F,0x1F,    0x67,0x00,0x4F,0x4F,0xFF,0x00,0x41,0x41,
    0xCC,0x00,0x46,0x46,0xD9,0x00,0x3A,0x3A,    0xB3,0x00,0x53,0x53,0xFE,0x00,0x56,0x56,
    0xFF,0x00,0x4E,0x4E,0xE5,0x00,0x5A,0x5A,    0xFE,0x00,0x46,0x48,0xC5,0x00,0x5D,0x5D,
    0xFF,0x00,0x53,0x53,0xDB,0x00,0x4D,0x4D,    0xCA,0x00,0x61,0x61,0xFB,0x00,0x5F,0x5F,
    0xF7,0x00,0x63,0x63,0xFF,0x00,0x48,0x48,    0xBA,0x00,0x64,0x64,0xFF,0x00,0x64,0x64,
    0xFC,0x00,0x66,0x66,0xFF,0x00,0x68,0x68,    0xFF,0x00,0x6A,0x6A,0xFB,0x00,0x61,0x61,
    0xE5,0x00,0x6D,0x6D,0xFF,0x00,0x72,0x72,    0xFF,0x00,0x60,0x60,0xD5,0x00,0x59,0x59,
    0xC5,0x00,0x75,0x75,0xFF,0x00,0x6E,0x6E,    0xF0,0x00,0x79,0x79,0xFF,0x00,0x7E,0x7E,
    0xFF,0x00,0x81,0x81,0xFF,0x00,0x7F,0x80,    0xFB,0x00,0x4E,0x4E,0x97,0x00,0x8C,0x8C,
    0xFF,0x00,0x5F,0x5F,0xA8,0x00,0x93,0x93,    0xFF,0x00,0x72,0x72,0xBF,0x00,0x9A,0x9A,
    0xFF,0x00,0xA2,0xA2,0xFF,0x00,0x17,0x17,    0x24,0x00,0xA5,0xA5,0xFF,0x00,0x8C,0x8C,
    0xD2,0x00,0x6B,0x6B,0x95,0x00,0x76,0x76,    0x9B,0x00,0x85,0x85,0xAE,0x00,0x57,0x57,
    0x71,0x00,0x2C,0x2C,0x37,0x00,0x6B,0x6B,    0x82,0x00,0x76,0x76,0x8B,0x00,0x5F,0x5F,
    0x6F,0x00,0x4E,0x4E,0x51,0x00,0xFF,0xFF,    0xFF,0x00,0x00,0x00,0x00,0x00,0x16,0x16,
    0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,    0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,
    0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,    0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,
    0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,    0x16,0x16,0x52,0x51,0x50,0x50,0x51,0x52,
    0x61,0x16,0x16,0x16,0x16,0x16,0x16,0x16,    0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,
    0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x50,    0x42,0x41,0x43,0x44,0x44,0x45,0x45,0x45,
    0x44,0x44,0x51,0x68,0x16,0x16,0x16,0x16,    0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,
    0x16,0x16,0x16,0x16,0x16,0x4F,0x5D,0x40,    0x43,0x43,0x43,0x43,0x42,0x42,0x43,0x44,
    0x45,0x46,0x44,0x43,0x50,0x68,0x16,0x16,    0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,
    0x16,0x16,0x16,0x16,0x3C,0x3E,0x41,0x41,    0x3F,0x3F,0x3E,0x3D,0x3D,0x3D,0x3E,0x40,
    0x40,0x42,0x44,0x46,0x44,0x44,0x61,0x16,    0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,
    0x16,0x16,0x16,0x59,0x3E,0x3F,0x3E,0x3C,    0x3B,0x39,0x38,0x39,0x38,0x38,0x39,0x3A,
    0x3B,0x3E,0x40,0x42,0x44,0x46,0x41,0x52,    0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,
    0x16,0x16,0x58,0x5D,0x3D,0x3B,0x3C,0x3A,    0x37,0x34,0x34,0x34,0x34,0x34,0x35,0x36,
    0x38,0x3A,0x3F,0x40,0x40,0x43,0x46,0x40,    0x60,0x16,0x16,0x16,0x16,0x16,0x16,0x16,
    0x16,0x57,0x5B,0x3B,0x38,0x39,0xDA,0xE4,    0x37,0x32,0x4A,0x49,0x49,0x4A,0x4A,0x33,
    0x34,0x38,0xE4,0xCE,0x40,0x40,0x42,0x44,    0x40,0x68,0x16,0x16,0x16,0x16,0x16,0x16,
    0xBC,0x59,0x38,0x35,0x35,0xBC,0x14,0xFE,    0xD6,0x33,0x30,0x30,0x30,0x4D,0x30,0x31,
    0x33,0xDA,0xFE,0xFE,0xBC,0x3E,0x3D,0x41,    0x40,0x45,0x17,0x16,0x16,0x16,0x16,0x16,
    0x65,0x59,0x33,0x49,0xC5,0x09,0x10,0xFE,    0xFE,0xCC,0x31,0x2E,0x2E,0x2E,0x2E,0x31,
    0xDA,0x0E,0xFE,0xFE,0xFE,0xC5,0x3B,0x3C,    0x40,0x5C,0x60,0x16,0x16,0x16,0x16,0xBA,
    0x66,0x58,0x31,0x2E,0xFB,0x03,0x15,0xFE,    0xFE,0xFE,0xD6,0x30,0x2D,0x2C,0x2E,0xDA,
    0x0B,0x13,0xFE,0xFE,0x0B,0xF7,0x34,0x37,    0x5B,0x5D,0x5E,0x17,0x16,0x16,0x16,0x74,
    0x7B,0x4E,0x2E,0x29,0x2F,0xFC,0x08,0xFE,    0xFE,0xFE,0xFE,0xCC,0x2F,0x2E,0xD6,0x0B,
    0x12,0xFE,0xFE,0x0A,0xF6,0x4A,0x31,0x33,    0x5A,0x5C,0x5A,0x68,0x16,0x16,0x16,0x7B,
    0x7E,0x64,0x63,0x48,0x47,0x2B,0xF8,0x06,    0xFE,0xFE,0xFE,0xFE,0xC4,0xD5,0x14,0x11,
    0xFE,0xFE,0x0C,0xF5,0x2E,0x2B,0x2F,0x49,    0x34,0x38,0x59,0x51,0x16,0x16,0xE3,0x7E,
    0x7D,0x6C,0x72,0x70,0x55,0x22,0x2A,0x00,    0x08,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,
    0xFE,0x0A,0xF6,0x2C,0x28,0x29,0x4C,0x65,    0x49,0x59,0x59,0x5F,0xF2,0x16,0xC4,0x87,
    0x80,0x71,0x78,0x77,0x76,0x47,0x21,0x29,    0xFA,0x09,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,
    0x0B,0xF7,0x29,0x27,0x27,0x56,0x62,0x4C,    0x4D,0x57,0x67,0x59,0xF2,0x16,0xB0,0x8C,
    0x84,0x8A,0x7F,0x82,0x7C,0x54,0x23,0x21,    0x28,0xF7,0x0F,0xFE,0x15,0x15,0xFE,0x13,
    0xF4,0x28,0x25,0x26,0x26,0x71,0x71,0x62,    0x64,0x4E,0x66,0x7E,0xF2,0x16,0x9A,0x90,
    0x8A,0x8B,0x86,0x8E,0x86,0x53,0x22,0x22,    0x21,0xD3,0x0F,0xFE,0xFE,0xFE,0xFE,0x12,
    0xC4,0x26,0x24,0x25,0x55,0x6F,0x6F,0x71,    0x6B,0x65,0x7A,0x73,0xF2,0x16,0xAE,0x97,
    0x94,0x8F,0x92,0x92,0x89,0x4B,0x20,0x21,    0xCC,0x0E,0x14,0xFE,0xFE,0xFE,0xFE,0x15,
    0x13,0xCD,0x26,0x24,0x47,0x76,0x7F,0x78,    0x72,0x7D,0x7E,0x81,0xF2,0x16,0xC3,0x9C,
    0x99,0x9B,0x98,0x98,0x92,0x1E,0x1F,0xCC,    0x0E,0x12,0xFE,0xFE,0x11,0x10,0xFE,0xFE,
    0xFE,0xFE,0xCD,0x24,0x22,0x7C,0x82,0x7F,    0x83,0x80,0x87,0x79,0xF9,0x16,0xE0,0x9F,
    0x9B,0xA0,0xA1,0xA1,0x8D,0x1B,0xCD,0x0E,    0x11,0xFE,0xFE,0x0E,0xF7,0xF7,0x0D,0x15,
    0xFE,0xFE,0xFE,0xD1,0x22,0x6A,0x8F,0x8B,    0x8A,0x8C,0x8C,0x7B,0xFD,0x16,0x16,0xA4,
    0xA5,0xA1,0xA7,0xA2,0x75,0xD1,0x0A,0x10,    0xFE,0xFE,0x0A,0xF6,0x20,0x21,0xFB,0x05,
    0xFE,0xFE,0xFE,0xFE,0xD1,0x1D,0x89,0x8F,    0x93,0x90,0x97,0x85,0x16,0x16,0x16,0x9E,
    0xAA,0xAC,0xAD,0xAB,0xE3,0x07,0x11,0xFE,    0xFE,0x07,0xF6,0x1F,0x1C,0x1C,0x23,0x00,
    0x06,0xFE,0xFE,0xFE,0x14,0xD5,0x6E,0x92,    0x96,0x97,0x93,0xCA,0x16,0x16,0x16,0xBB,
    0xAF,0xB3,0xB6,0xB3,0xF6,0x09,0xFE,0xFE,    0x07,0xF5,0x1E,0x1C,0x1D,0x1D,0x1A,0x21,
    0xF8,0x04,0xFE,0x15,0x01,0xEF,0x91,0x9B,    0x9F,0x9C,0x90,0xFC,0x16,0x16,0x16,0x16,
    0xAA,0xB6,0xBD,0xBF,0xBE,0xF6,0x09,0x09,    0xF5,0x19,0x18,0x1C,0x1D,0x1C,0x1C,0x18,
    0x1F,0xF8,0x04,0x02,0xED,0x9D,0x9D,0xA5,    0xA3,0x9E,0xA6,0x16,0x16,0x16,0x16,0x16,
    0xC0,0xB3,0xBF,0xC7,0xCB,0xC9,0xFA,0xFA,    0xAC,0x95,0x88,0x75,0x69,0x69,0x6D,0x88,
    0x88,0xA1,0xFC,0xEB,0xAB,0xAD,0xAC,0xAA,    0xA5,0x96,0xFB,0x16,0x16,0x16,0x16,0x16,
    0x16,0xA8,0xBD,0xC8,0xD4,0xDD,0xDC,0xD8,    0xD0,0xC1,0xB6,0xA7,0x9D,0x9D,0xA2,0xAB,
    0xB6,0xB8,0xC0,0xB9,0xB8,0xB7,0xB2,0xAF,    0xA0,0xEB,0x16,0x16,0x16,0x16,0x16,0x16,
    0x16,0x16,0xB1,0xC2,0xD4,0xE1,0xE7,0xE9,    0xE9,0xE5,0xDD,0xD0,0xC6,0xC2,0xC6,0xC8,
    0xCF,0xD0,0xCB,0xC6,0xBF,0xB9,0xB4,0xA9,    0xBA,0x16,0x16,0x16,0x16,0x16,0x16,0x16,
    0x16,0x16,0x16,0xB3,0xC8,0xDD,0xE8,0xEC,    0xEE,0xEE,0xEE,0xEC,0xE8,0xE7,0xE2,0xE2,
    0xE1,0xDB,0xD2,0xCB,0xC1,0xB8,0xAD,0xB5,    0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,
    0x16,0x16,0x16,0x16,0xB1,0xC8,0xDE,0xE8,    0xEE,0xF1,0xF3,0xF3,0xF1,0xF0,0xEC,0xE9,
    0xE5,0xDE,0xD2,0xC7,0xBD,0xAD,0xCD,0x16,    0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,
    0x16,0x16,0x16,0x16,0x16,0xBF,0xC2,0xD9,    0xE7,0xEC,0xF0,0xF3,0xF1,0xF0,0xEC,0xE8,
    0xE1,0xD4,0xC7,0xB9,0xAA,0xF4,0x16,0x16,    0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,
    0x16,0x16,0x16,0x16,0x16,0x16,0x16,0xBF,    0xC2,0xDB,0xE5,0xE9,0xE9,0xE8,0xE2,0xD9,
    0xCF,0xBF,0xB2,0xE6,0x16,0x16,0x16,0x16,    0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,
    0x16,0x16,0x16,0x16,0x16,0x16,0x16,0x16,    0x16,0x16,0xDF,0xD2,0xCF,0xCB,0xCF,0xD7,
    0xEA,0x16,0x16,0x16,0x16,0x16,0x16,0x16,    0x16,0x16,0x16,0x16,0x16,0x16,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xF0,0x1F,0xFF,0xFF,0x80,    0x03,0xFF,0xFE,0x00,0x00,0xFF,0xFC,0x00,
    0x00,0x7F,0xF8,0x00,0x00,0x3F,0xF0,0x00,    0x00,0x1F,0xE0,0x00,0x00,0x0F,0xC0,0x00,
    0x00,0x07,0xC0,0x00,0x00,0x07,0x80,0x00,    0x00,0x03,0x80,0x00,0x00,0x03,0x80,0x00,
    0x00,0x03,0x00,0x00,0x00,0x01,0x00,0x00,    0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,
    0x00,0x01,0x00,0x00,0x00,0x01,0x00,0x00,    0x00,0x01,0x00,0x00,0x00,0x01,0x80,0x00,
    0x00,0x03,0x80,0x00,0x00,0x03,0x80,0x00,    0x00,0x03,0xC0,0x00,0x00,0x07,0xC0,0x00,
    0x00,0x07,0xE0,0x00,0x00,0x0F,0xF0,0x00,    0x00,0x1F,0xF8,0x00,0x00,0x3F,0xFC,0x00,
    0x00,0x7F,0xFE,0x00,0x00,0xFF,0xFF,0x80,    0x03,0xFF,0xFF,0xF0,0x1F,0xFF,0x28,0x00,
    0x00,0x00,0x10,0x00,0x00,0x00,0x20,0x00,    0x00,0x00,0x01,0x00,0x08,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0xFD,0xFD,    0xEE,0x00,0xFF,0xFF,0xF1,0x00,0xE6,0xE6,
    0xD9,0x00,0xE3,0xE3,0xD6,0x00,0xDE,0xDE,    0xD2,0x00,0xFF,0xFF,0xF7,0x00,0xFD,0xFD,
    0xF5,0x00,0xF2,0xF2,0xED,0x00,0xFF,0xFF,    0xFC,0x00,0xFF,0xFF,0xFD,0x00,0xEA,0xEA,
    0xE8,0x00,0xFF,0xFF,0xFE,0x00,0xEE,0xEF,    0xED,0x00,0x00,0x00,0x00,0x00,0xE8,0xE9,
    0xF4,0x00,0x00,0x00,0xEC,0x00,0x00,0x00,    0xEA,0x00,0x00,0x00,0xE8,0x00,0x00,0x00,
    0xD6,0x00,0x00,0x00,0xCA,0x00,0x00,0x00,    0xC8,0x00,0x00,0x00,0xC2,0x00,0x00,0x00,
    0xBE,0x00,0x00,0x00,0xB3,0x00,0x00,0x00,    0xAE,0x00,0x00,0x00,0xAC,0x00,0x00,0x00,
    0xAB,0x00,0x00,0x00,0xA9,0x00,0x00,0x00,    0xA0,0x00,0x00,0x00,0x9F,0x00,0x00,0x00,
    0x9D,0x00,0x00,0x00,0x9B,0x00,0x00,0x00,    0x9A,0x00,0x00,0x00,0x97,0x00,0x00,0x00,
    0x96,0x00,0x00,0x00,0x8F,0x00,0x00,0x00,    0x8E,0x00,0x00,0x00,0x8C,0x00,0x00,0x00,
    0x88,0x00,0x00,0x00,0x84,0x00,0x00,0x00,    0x81,0x00,0x00,0x00,0x65,0x00,0x00,0x00,
    0x62,0x00,0x00,0x00,0x60,0x00,0x00,0x00,    0x4F,0x00,0x01,0x01,0xC3,0x00,0x01,0x01,
    0xAB,0x00,0x01,0x01,0xA3,0x00,0x03,0x03,    0xD7,0x00,0x03,0x03,0xCB,0x00,0x02,0x02,
    0xA0,0x00,0x02,0x02,0x87,0x00,0x01,0x01,    0x54,0x00,0x01,0x01,0x52,0x00,0x03,0x03,
    0xB9,0x00,0x03,0x03,0xB8,0x00,0x03,0x03,    0xAC,0x00,0x05,0x05,0xD1,0x00,0x06,0x06,
    0xC5,0x00,0x07,0x07,0xC8,0x00,0x06,0x06,    0xB8,0x00,0x06,0x06,0xB1,0x00,0x08,0x08,
    0xDB,0x00,0x08,0x08,0xBB,0x00,0x07,0x07,    0xB1,0x00,0x0B,0x0B,0xF1,0x00,0x0B,0x0B,
    0xDC,0x00,0x0A,0x0A,0xCF,0x00,0x08,0x08,    0x9E,0x00,0x05,0x05,0x63,0x00,0x0A,0x0A,
    0xC3,0x00,0x0D,0x0D,0xD8,0x00,0x0C,0x0C,    0xC9,0x00,0x0F,0x0F,0xCA,0x00,0x14,0x14,
    0xD8,0x00,0x18,0x18,0xED,0x00,0x17,0x17,    0xEA,0x00,0x22,0x22,0xFB,0x00,0x1F,0x1F,
    0xE9,0x00,0x18,0x18,0xB1,0x00,0x10,0x10,    0x6F,0x00,0x25,0x25,0xFD,0x00,0x12,0x12,
    0x79,0x00,0x29,0x29,0xFF,0x00,0x26,0x26,    0xE5,0x00,0x31,0x31,0xFB,0x00,0x32,0x32,
    0xFF,0x00,0x13,0x14,0x5D,0x00,0x38,0x38,    0xFF,0x00,0x38,0x38,0xFC,0x00,0x27,0x27,
    0xA5,0x00,0x29,0x29,0xAC,0x00,0x28,0x28,    0xA3,0x00,0x3E,0x3E,0xFB,0x00,0x21,0x21,
    0x7F,0x00,0x3F,0x3F,0xE9,0x00,0x42,0x42,    0xEB,0x00,0x49,0x49,0xFD,0x00,0x3C,0x3D,
    0xCE,0x00,0x43,0x43,0xDB,0x00,0x51,0x51,    0xFF,0x00,0x53,0x53,0xFF,0x00,0x51,0x51,
    0xF3,0x00,0x4D,0x4D,0xE1,0x00,0x52,0x52,    0xED,0x00,0x57,0x57,0xF9,0x00,0x4B,0x4B,
    0xD3,0x00,0x46,0x46,0xC0,0x00,0x48,0x48,    0xB8,0x00,0x58,0x58,0xDB,0x00,0x67,0x67,
    0xFF,0x00,0x2C,0x2C,0x6C,0x00,0x69,0x69,    0xFE,0x00,0x61,0x61,0xE5,0x00,0x6E,0x6E,
    0xFF,0x00,0x63,0x63,0xE5,0x00,0x68,0x68,    0xEF,0x00,0x53,0x53,0xB6,0x00,0x52,0x52,
    0xB4,0x00,0x4C,0x4C,0xA7,0x00,0x51,0x51,    0xB0,0x00,0x76,0x76,0xFF,0x00,0x64,0x64,
    0xD4,0x00,0x68,0x68,0xD0,0x00,0x5E,0x5E,    0xB7,0x00,0x84,0x84,0xFF,0x00,0x87,0x87,
    0xFF,0x00,0x91,0x91,0xFF,0x00,0x92,0x92,    0xFF,0x00,0x93,0x93,0xFF,0x00,0x75,0x75,
    0xC9,0x00,0x73,0x73,0xC5,0x00,0x77,0x77,    0xCA,0x00,0x75,0x75,0xB9,0x00,0x9E,0x9E,
    0xE6,0x00,0x99,0x99,0xD4,0x00,0xB7,0xB7,    0xE3,0x00,0xBA,0xBA,0xD4,0x00,0xB3,0xB3,
    0xC2,0x00,0xDC,0xDC,0xE5,0x00,0xE4,0xE4,    0xEA,0x00,0xE7,0xE7,0xEC,0x00,0xAD,0xAD,
    0xB0,0x00,0xFC,0xFC,0xFF,0x00,0xFE,0xFE,    0xFF,0x00,0xFF,0xFF,0xFF,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
    0x00,0x00,0x00,0x00,0x00,0x00,0x0D,0x0D,    0x0D,0x0D,0x0D,0x0D,0x0D,0x0D,0x0D,0x0D,
    0x0D,0x0D,0x0D,0x0D,0x0D,0x0D,0x0D,0x0D,    0x0D,0x0D,0x0D,0x6F,0x45,0x29,0x2B,0x2C,
    0x0D,0x0D,0x0D,0x0D,0x0D,0x0D,0x0D,0x0D,    0x0D,0x5B,0x27,0x24,0x24,0x23,0x25,0x26,
    0x28,0x34,0x0D,0x0D,0x0D,0x0D,0x0D,0x0D,    0x5B,0x22,0x21,0x1F,0x1D,0x1C,0x1E,0x21,
    0x23,0x26,0x2A,0x0D,0x0D,0x0D,0x0D,0x5B,    0x2F,0x44,0x87,0x7B,0x19,0x18,0x1B,0x6C,
    0x88,0x5A,0x25,0x35,0x0D,0x0D,0x0D,0x5B,    0x1A,0x5C,0x04,0x90,0x7A,0x17,0x6B,0x8D,
    0x05,0x7C,0x20,0x33,0x0D,0x0D,0x6A,0x40,    0x36,0x15,0x77,0x02,0x8F,0x86,0x0E,0x01,
    0x85,0x3D,0x2E,0x32,0x57,0x0D,0x6A,0x3F,    0x3B,0x39,0x14,0x75,0x07,0x91,0x08,0x82,
    0x16,0x2D,0x37,0x38,0x50,0x0D,0x6A,0x48,    0x47,0x42,0x12,0x62,0x0C,0x91,0x09,0x6D,
    0x13,0x31,0x3A,0x3C,0x52,0x0D,0x6A,0x4A,    0x4C,0x41,0x63,0x8C,0x06,0x89,0x0A,0x90,
    0x73,0x30,0x43,0x46,0x5E,0x0D,0x6A,0x54,    0x4D,0x5F,0x8B,0x00,0x83,0x30,0x78,0x03,
    0x0B,0x71,0x3E,0x49,0x52,0x0D,0x0D,0x55,    0x56,0x68,0x8A,0x84,0x10,0x0F,0x11,0x76,
    0x8E,0x67,0x4B,0x4F,0x0D,0x0D,0x0D,0x55,    0x5D,0x65,0x74,0x69,0x58,0x51,0x53,0x59,
    0x60,0x56,0x4E,0x55,0x0D,0x0D,0x0D,0x0D,    0x55,0x61,0x72,0x7F,0x81,0x7D,0x79,0x6E,
    0x64,0x55,0x55,0x0D,0x0D,0x0D,0x0D,0x0D,    0x0D,0x55,0x55,0x70,0x7E,0x80,0x79,0x65,
    0x66,0x55,0x0D,0x0D,0x0D,0x0D,0x0D,0x0D,    0x0D,0x0D,0x0D,0x55,0x55,0x55,0x55,0x55,
    0x0D,0x0D,0x0D,0x0D,0x0D,0x0D,0xFF,0xFF,    0xBC,0x59,0xF8,0x3F,0x35,0xBC,0xE0,0x0F,
    0xD6,0x33,0xC0,0x07,0x30,0x4D,0x80,0x03,    0x33,0xDA,0x80,0x03,0xBC,0x3E,0x00,0x01,
    0x40,0x45,0x00,0x01,0x16,0x16,0x00,0x01,    0x65,0x59,0x00,0x01,0xC5,0x09,0x00,0x01,
    0xFE,0xCC,0x80,0x03,0x2E,0x2E,0x80,0x03,    0xDA,0x0E,0xC0,0x07,0xFE,0xC5,0xE0,0x0F,
    0x40,0x5C,0xF8,0x3F,0x16,0x16
};
#endif //_MGINCORE_RES


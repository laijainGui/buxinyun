/*****************************************************************
>file name : jpeg_qt_huffman.h
>author : lichao
>create time : Fri 09 Jun 2017 02:07:57 PM HKT
*****************************************************************/
#ifndef _JPEG_QT_HUFFMAN_H_
#define _JPEG_QT_HUFFMAN_H_
#include "jpeg_encoder.h"

qtfilehead_t const qtfilehead[] = {
    //20
    {
        {
            0x0019, 0x001a, 0x001f, 0x0015, 0x0011, 0x000d, 0x000e, 0x0018,
            0x0018, 0x0011, 0x0010, 0x000d, 0x000b, 0x0006, 0x0009, 0x0013,
            0x0016, 0x0011, 0x000e, 0x000b, 0x0007, 0x0006, 0x0008, 0x0014,
            0x0018, 0x000e, 0x000c, 0x000a, 0x0006, 0x0005, 0x0008, 0x0014,
            0x0016, 0x000d, 0x0008, 0x0006, 0x0006, 0x0005, 0x0007, 0x0013,
            0x0015, 0x000a, 0x0007, 0x0006, 0x0006, 0x0006, 0x0009, 0x0014,
            0x000f, 0x0008, 0x0007, 0x0007, 0x0007, 0x0009, 0x000d, 0x001b,
            0x0014, 0x000b, 0x000b, 0x000c, 0x000e, 0x0012, 0x001a, 0x0036,
        },

        {
            0x0017, 0x0010, 0x000d, 0x0007, 0x0004, 0x0005, 0x0007, 0x000e,
            0x0010, 0x000a, 0x0008, 0x0003, 0x0002, 0x0003, 0x0005, 0x000a,
            0x000d, 0x0008, 0x0004, 0x0002, 0x0003, 0x0004, 0x0005, 0x000b,
            0x0007, 0x0003, 0x0002, 0x0002, 0x0003, 0x0004, 0x0006, 0x000c,
            0x0004, 0x0002, 0x0003, 0x0003, 0x0004, 0x0005, 0x0007, 0x000e,
            0x0005, 0x0003, 0x0004, 0x0004, 0x0005, 0x0006, 0x0009, 0x0013,
            0x0007, 0x0005, 0x0005, 0x0006, 0x0007, 0x0009, 0x000e, 0x001b,
            0x000e, 0x000a, 0x000b, 0x000c, 0x000e, 0x0013, 0x001b, 0x0036,
        },

        {
            0xFF, 0xDB, 0x00, 0x43, 0x00,
            0x28, 0x1c, 0x1e, 0x23, 0x1e, 0x19, 0x28, 0x23, 0x21, 0x23, 0x2d, 0x2b, 0x28, 0x30, 0x3c, 0x64,
            0x41, 0x3c, 0x37, 0x37, 0x3c, 0x7b, 0x58, 0x5d, 0x49, 0x64, 0x91, 0x80, 0x99, 0x96, 0x8f, 0x80,
            0x8c, 0x8a, 0xa0, 0xb4, 0xe6, 0xc3, 0xa0, 0xaa, 0xda, 0xad, 0x8a, 0x8c, 0xc8, 0xff, 0xcb, 0xda,
            0xee, 0xf5, 0xff, 0xff, 0xff, 0x9b, 0xc1, 0xff, 0xff, 0xff, 0xfa, 0xff, 0xe6, 0xfd, 0xff, 0xf8,
            0xFF, 0xDB, 0x00, 0x43, 0x01,
            0x2b, 0x2d, 0x2d, 0x3c, 0x35, 0x3c, 0x76, 0x41, 0x41, 0x76, 0xf8, 0xa5, 0x8c, 0xa5, 0xf8, 0xf8,
            0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8,
            0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8,
            0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8, 0xf8,
        },

    },

    //25
    {

        {
            0x0020, 0x0021, 0x0027, 0x001b, 0x0015, 0x0010, 0x0012, 0x001e,
            0x001e, 0x0016, 0x0014, 0x0010, 0x000e, 0x0008, 0x000b, 0x0018,
            0x001b, 0x0015, 0x0012, 0x000d, 0x0009, 0x0008, 0x000a, 0x0019,
            0x001f, 0x0012, 0x000f, 0x000c, 0x0008, 0x0006, 0x000a, 0x0019,
            0x001c, 0x0010, 0x000a, 0x0007, 0x0007, 0x0005, 0x0009, 0x0018,
            0x001b, 0x000d, 0x0009, 0x0008, 0x0008, 0x0007, 0x000a, 0x0019,
            0x0013, 0x000a, 0x0009, 0x0009, 0x0009, 0x0009, 0x000e, 0x0021,
            0x0019, 0x000e, 0x000e, 0x0010, 0x0010, 0x0017, 0x0021, 0x0043,
        },

        {
            0x001e, 0x0014, 0x0010, 0x0009, 0x0005, 0x0006, 0x0009, 0x0012,
            0x0014, 0x000c, 0x000a, 0x0004, 0x0003, 0x0004, 0x0006, 0x000d,
            0x0010, 0x000a, 0x0005, 0x0003, 0x0003, 0x0005, 0x0007, 0x000e,
            0x0009, 0x0004, 0x0003, 0x0003, 0x0004, 0x0005, 0x0008, 0x000f,
            0x0005, 0x0003, 0x0003, 0x0004, 0x0005, 0x0006, 0x0009, 0x0012,
            0x0006, 0x0004, 0x0005, 0x0005, 0x0006, 0x0008, 0x000c, 0x0017,
            0x0009, 0x0006, 0x0007, 0x0008, 0x0009, 0x000c, 0x0011, 0x0022,
            0x0012, 0x000d, 0x000e, 0x000f, 0x0012, 0x0017, 0x0022, 0x0043,
        },

        {
            0xFF, 0xDB, 0x00, 0x43, 0x00,
            0x20, 0x16, 0x18, 0x1c, 0x18, 0x14, 0x20, 0x1c, 0x1a, 0x1c, 0x24, 0x22, 0x20, 0x26, 0x30, 0x50,
            0x34, 0x30, 0x2c, 0x2c, 0x30, 0x62, 0x46, 0x4a, 0x3a, 0x50, 0x74, 0x66, 0x7a, 0x78, 0x72, 0x66,
            0x70, 0x6e, 0x80, 0x90, 0xb8, 0x9c, 0x80, 0x88, 0xae, 0x8a, 0x6e, 0x70, 0xa0, 0xda, 0xa2, 0xae,
            0xbe, 0xc4, 0xce, 0xd0, 0xce, 0x7c, 0x9a, 0xe2, 0xf2, 0xe0, 0xc8, 0xf0, 0xb8, 0xca, 0xce, 0xc6,
            0xFF, 0xDB, 0x00, 0x43, 0x01,
            0x22, 0x24, 0x24, 0x30, 0x2a, 0x30, 0x5e, 0x34, 0x34, 0x5e, 0xc6, 0x84, 0x70, 0x84, 0xc6, 0xc6,
            0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6,
            0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6,
            0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6,
        },

    },

    //30
    {

        {
            0x0025, 0x0029, 0x002e, 0x0020, 0x0019, 0x0013, 0x0016, 0x0024,
            0x0024, 0x001a, 0x0018, 0x0013, 0x0011, 0x0009, 0x000d, 0x001d,
            0x0022, 0x0019, 0x0016, 0x0010, 0x000b, 0x000a, 0x000c, 0x001e,
            0x0025, 0x0016, 0x0012, 0x000f, 0x000a, 0x0007, 0x000c, 0x001e,
            0x0022, 0x0013, 0x000c, 0x0009, 0x0009, 0x0007, 0x000b, 0x001c,
            0x0020, 0x0010, 0x000a, 0x000a, 0x0009, 0x0009, 0x000c, 0x001e,
            0x0017, 0x000c, 0x000b, 0x000b, 0x000b, 0x000b, 0x0011, 0x0028,
            0x001e, 0x0011, 0x0011, 0x0013, 0x0013, 0x001c, 0x0028, 0x0052,
        },

        {
            0x0024, 0x0018, 0x0013, 0x000b, 0x0006, 0x0007, 0x000b, 0x0016,
            0x0018, 0x000f, 0x000d, 0x0005, 0x0004, 0x0005, 0x0008, 0x0010,
            0x0013, 0x000d, 0x0006, 0x0004, 0x0004, 0x0006, 0x0008, 0x0011,
            0x000b, 0x0005, 0x0004, 0x0004, 0x0005, 0x0006, 0x0009, 0x0013,
            0x0006, 0x0004, 0x0004, 0x0005, 0x0006, 0x0007, 0x000b, 0x0016,
            0x0007, 0x0005, 0x0006, 0x0006, 0x0007, 0x000a, 0x000e, 0x001c,
            0x000b, 0x0008, 0x0008, 0x0009, 0x000b, 0x000e, 0x0015, 0x0029,
            0x0016, 0x0010, 0x0011, 0x0013, 0x0016, 0x001c, 0x0029, 0x0052,
        },

        {
            0xFF, 0xDB, 0x00, 0x43, 0x00,
            0x1b, 0x12, 0x14, 0x17, 0x14, 0x11, 0x1b, 0x17, 0x16, 0x17, 0x1e, 0x1c, 0x1b, 0x20, 0x28, 0x42,
            0x2b, 0x28, 0x25, 0x25, 0x28, 0x51, 0x3a, 0x3d, 0x30, 0x42, 0x60, 0x55, 0x65, 0x64, 0x5f, 0x55,
            0x5d, 0x5b, 0x6a, 0x78, 0x99, 0x81, 0x6a, 0x71, 0x90, 0x73, 0x5b, 0x5d, 0x85, 0xb5, 0x86, 0x90,
            0x9e, 0xa3, 0xab, 0xad, 0xab, 0x67, 0x80, 0xbc, 0xc9, 0xba, 0xa6, 0xc7, 0x99, 0xa8, 0xab, 0xa4,
            0xFF, 0xDB, 0x00, 0x43, 0x01,
            0x1c, 0x1e, 0x1e, 0x28, 0x23, 0x28, 0x4e, 0x2b, 0x2b, 0x4e, 0xa4, 0x6e, 0x5d, 0x6e, 0xa4, 0xa4,
            0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4,
            0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4,
            0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4, 0xa4,
        },

    },
    //35
    {

        {
            0x002c, 0x002e, 0x0037, 0x0025, 0x001e, 0x0016, 0x001a, 0x002a,
            0x002b, 0x001f, 0x001c, 0x0017, 0x0013, 0x000b, 0x0010, 0x0022,
            0x0027, 0x001f, 0x001a, 0x0013, 0x000d, 0x000c, 0x000e, 0x0023,
            0x002b, 0x001a, 0x0015, 0x0012, 0x000c, 0x0008, 0x000e, 0x0023,
            0x0027, 0x0017, 0x000e, 0x000a, 0x000a, 0x0008, 0x000c, 0x0022,
            0x0026, 0x0012, 0x000c, 0x000c, 0x000b, 0x000b, 0x000f, 0x0024,
            0x001b, 0x000e, 0x000d, 0x000c, 0x000c, 0x000e, 0x0014, 0x002f,
            0x0024, 0x0014, 0x0015, 0x0016, 0x0017, 0x0021, 0x002e, 0x005f,
        },

        {
            0x002a, 0x001c, 0x0017, 0x000c, 0x0007, 0x0009, 0x000d, 0x001a,
            0x001c, 0x0011, 0x000f, 0x0006, 0x0005, 0x0006, 0x0009, 0x0012,
            0x0017, 0x000f, 0x0007, 0x0004, 0x0005, 0x0007, 0x000a, 0x0014,
            0x000c, 0x0006, 0x0004, 0x0005, 0x0006, 0x0007, 0x000b, 0x0016,
            0x0007, 0x0005, 0x0005, 0x0006, 0x0007, 0x0009, 0x000d, 0x001a,
            0x0009, 0x0006, 0x0007, 0x0007, 0x0009, 0x000b, 0x0011, 0x0021,
            0x000d, 0x0009, 0x000a, 0x000b, 0x000d, 0x0011, 0x0018, 0x0030,
            0x001a, 0x0012, 0x0014, 0x0016, 0x001a, 0x0021, 0x0030, 0x005f,
        },

        {
            0xFF, 0xDB, 0x00, 0x43, 0x00,
            0x17, 0x10, 0x11, 0x14, 0x11, 0x0e, 0x17, 0x14, 0x12, 0x14, 0x1a, 0x18, 0x17, 0x1b, 0x22, 0x39,
            0x25, 0x22, 0x1f, 0x1f, 0x22, 0x46, 0x32, 0x35, 0x29, 0x39, 0x52, 0x48, 0x57, 0x55, 0x51, 0x48,
            0x50, 0x4e, 0x5b, 0x66, 0x83, 0x6f, 0x5b, 0x61, 0x7c, 0x62, 0x4e, 0x50, 0x72, 0x9b, 0x73, 0x7c,
            0x87, 0x8b, 0x92, 0x94, 0x92, 0x58, 0x6d, 0xa0, 0xac, 0x9f, 0x8e, 0xaa, 0x83, 0x8f, 0x92, 0x8d,
            0xFF, 0xDB, 0x00, 0x43, 0x01,
            0x18, 0x1a, 0x1a, 0x22, 0x1e, 0x22, 0x43, 0x25, 0x25, 0x43, 0x8d, 0x5e, 0x50, 0x5e, 0x8d, 0x8d,
            0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d,
            0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d,
            0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d, 0x8d,
        },

    },
    //40
    {

        {
            0x0033, 0x0034, 0x003c, 0x002b, 0x0022, 0x001a, 0x001d, 0x0030,
            0x0031, 0x0023, 0x001f, 0x001a, 0x0016, 0x000c, 0x0012, 0x0026,
            0x002b, 0x0023, 0x001d, 0x0016, 0x000f, 0x000e, 0x0010, 0x0028,
            0x0030, 0x001d, 0x0017, 0x0014, 0x000d, 0x000a, 0x0010, 0x0028,
            0x002c, 0x001a, 0x0011, 0x000c, 0x000c, 0x0009, 0x000e, 0x0026,
            0x002b, 0x0015, 0x000e, 0x000d, 0x000c, 0x000c, 0x0011, 0x0029,
            0x001f, 0x0011, 0x000e, 0x000e, 0x000e, 0x000f, 0x0017, 0x0036,
            0x0029, 0x0017, 0x0017, 0x0019, 0x001a, 0x0025, 0x0035, 0x006c,
        },

        {
            0x0030, 0x0020, 0x001a, 0x000e, 0x0008, 0x000a, 0x000f, 0x001d,
            0x0020, 0x0014, 0x0011, 0x0007, 0x0005, 0x0007, 0x000b, 0x0015,
            0x001a, 0x0011, 0x0008, 0x0005, 0x0006, 0x0008, 0x000b, 0x0016,
            0x000e, 0x0007, 0x0005, 0x0005, 0x0007, 0x0008, 0x000c, 0x0019,
            0x0008, 0x0005, 0x0006, 0x0007, 0x0008, 0x000a, 0x000f, 0x001d,
            0x000a, 0x0007, 0x0008, 0x0008, 0x000a, 0x000d, 0x0013, 0x0026,
            0x000f, 0x000b, 0x000b, 0x000c, 0x000f, 0x0013, 0x001c, 0x0037,
            0x001d, 0x0015, 0x0016, 0x0019, 0x001d, 0x0026, 0x0037, 0x006c,
        },

        {
            0xFF, 0xDB, 0x00, 0x43, 0x00,
            0x14, 0x0e, 0x0f, 0x12, 0x0f, 0x0d, 0x14, 0x12, 0x10, 0x12, 0x17, 0x15, 0x14, 0x18, 0x1e, 0x32,
            0x21, 0x1e, 0x1c, 0x1c, 0x1e, 0x3d, 0x2c, 0x2e, 0x24, 0x32, 0x49, 0x40, 0x4c, 0x4b, 0x47, 0x40,
            0x46, 0x45, 0x50, 0x5a, 0x73, 0x62, 0x50, 0x55, 0x6d, 0x56, 0x45, 0x46, 0x64, 0x88, 0x65, 0x6d,
            0x77, 0x7b, 0x81, 0x82, 0x81, 0x4e, 0x60, 0x8d, 0x97, 0x8c, 0x7d, 0x96, 0x73, 0x7e, 0x81, 0x7c,
            0xFF, 0xDB, 0x00, 0x43, 0x01,
            0x15, 0x17, 0x17, 0x1e, 0x1a, 0x1e, 0x3b, 0x21, 0x21, 0x3b, 0x7c, 0x53, 0x46, 0x53, 0x7c, 0x7c,
            0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c,
            0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c,
            0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c, 0x7c,
        },
    },
    //45
    {

        {
            0x0038, 0x003d, 0x0047, 0x0030, 0x0025, 0x001d, 0x0021, 0x0036,
            0x0038, 0x0028, 0x0023, 0x001d, 0x0019, 0x000e, 0x0014, 0x002b,
            0x0030, 0x0028, 0x0021, 0x0018, 0x0011, 0x000f, 0x0012, 0x002d,
            0x0036, 0x0021, 0x001b, 0x0017, 0x000f, 0x000b, 0x0012, 0x002d,
            0x0033, 0x001e, 0x0013, 0x000e, 0x000d, 0x000a, 0x0010, 0x002b,
            0x0030, 0x0018, 0x0010, 0x000f, 0x000e, 0x000e, 0x0013, 0x002e,
            0x0023, 0x0013, 0x0010, 0x0010, 0x0010, 0x0011, 0x001a, 0x003d,
            0x002e, 0x001a, 0x001b, 0x001c, 0x001d, 0x002a, 0x003c, 0x007a,
        },

        {
            0x0035, 0x0024, 0x001d, 0x0010, 0x0009, 0x000b, 0x0011, 0x0021,
            0x0024, 0x0017, 0x0013, 0x0008, 0x0006, 0x0008, 0x000c, 0x0018,
            0x001d, 0x0013, 0x0009, 0x0006, 0x0007, 0x0009, 0x000d, 0x0019,
            0x0010, 0x0008, 0x0006, 0x0006, 0x0007, 0x000a, 0x000e, 0x001c,
            0x0009, 0x0006, 0x0007, 0x0007, 0x0009, 0x000b, 0x0011, 0x0021,
            0x000b, 0x0008, 0x0009, 0x000a, 0x000b, 0x000f, 0x0015, 0x002a,
            0x0011, 0x000c, 0x000d, 0x000e, 0x0011, 0x0015, 0x001f, 0x003e,
            0x0021, 0x0018, 0x0019, 0x001c, 0x0021, 0x002a, 0x003e, 0x007a,
        },

        {
            0xFF, 0xDB, 0x00, 0x43, 0x00,
            0x12, 0x0c, 0x0d, 0x10, 0x0d, 0x0b, 0x12, 0x10, 0x0e, 0x10, 0x14, 0x13, 0x12, 0x15, 0x1b, 0x2c,
            0x1d, 0x1b, 0x18, 0x18, 0x1b, 0x36, 0x27, 0x29, 0x20, 0x2c, 0x40, 0x39, 0x44, 0x43, 0x3f, 0x39,
            0x3e, 0x3d, 0x47, 0x50, 0x66, 0x57, 0x47, 0x4b, 0x61, 0x4d, 0x3d, 0x3e, 0x59, 0x79, 0x5a, 0x61,
            0x69, 0x6d, 0x72, 0x73, 0x72, 0x45, 0x55, 0x7d, 0x86, 0x7c, 0x6f, 0x85, 0x66, 0x70, 0x72, 0x6e,
            0xFF, 0xDB, 0x00, 0x43, 0x01,
            0x13, 0x14, 0x14, 0x1b, 0x17, 0x1b, 0x34, 0x1d, 0x1d, 0x34, 0x6e, 0x49, 0x3e, 0x49, 0x6e, 0x6e,
            0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e,
            0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e,
            0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e, 0x6e,
        },

    },

    {
        //50

        {
            0x0040, 0x0043, 0x004e, 0x0036, 0x002a, 0x0020, 0x0025, 0x003c,
            0x003d, 0x002c, 0x0028, 0x0021, 0x001c, 0x0010, 0x0016, 0x0030,
            0x0037, 0x002b, 0x0025, 0x001b, 0x0013, 0x0011, 0x0014, 0x0032,
            0x003e, 0x0024, 0x001e, 0x0019, 0x0011, 0x000c, 0x0014, 0x0032,
            0x0038, 0x0021, 0x0015, 0x000f, 0x000f, 0x000b, 0x0012, 0x0030,
            0x0036, 0x001a, 0x0012, 0x0011, 0x0010, 0x000f, 0x0015, 0x0033,
            0x0026, 0x0015, 0x0012, 0x0012, 0x0012, 0x0013, 0x001d, 0x0043,
            0x0033, 0x001d, 0x001d, 0x0020, 0x0021, 0x002f, 0x0042, 0x0087,
        },

        {
            0x003c, 0x0029, 0x0020, 0x0012, 0x000a, 0x000d, 0x0013, 0x0025,
            0x0029, 0x0019, 0x0015, 0x0009, 0x0007, 0x0009, 0x000d, 0x001b,
            0x0020, 0x0015, 0x000a, 0x0006, 0x0007, 0x000a, 0x000e, 0x001c,
            0x0012, 0x0009, 0x0006, 0x0007, 0x0008, 0x000b, 0x0010, 0x001f,
            0x000a, 0x0007, 0x0007, 0x0008, 0x000a, 0x000d, 0x0013, 0x0025,
            0x000d, 0x0009, 0x000a, 0x000b, 0x000d, 0x0010, 0x0018, 0x002f,
            0x0013, 0x000d, 0x000e, 0x0010, 0x0013, 0x0018, 0x0023, 0x0045,
            0x0025, 0x001b, 0x001c, 0x001f, 0x0025, 0x002f, 0x0045, 0x0087,
        },

        {
            0xFF, 0xDB, 0x00, 0x43, 0x00,
            0x10, 0x0b, 0x0c, 0x0e, 0x0c, 0x0a, 0x10, 0x0e, 0x0d, 0x0e, 0x12, 0x11, 0x10, 0x13, 0x18, 0x28,
            0x1a, 0x18, 0x16, 0x16, 0x18, 0x31, 0x23, 0x25, 0x1d, 0x28, 0x3a, 0x33, 0x3d, 0x3c, 0x39, 0x33,
            0x38, 0x37, 0x40, 0x48, 0x5c, 0x4e, 0x40, 0x44, 0x57, 0x45, 0x37, 0x38, 0x50, 0x6d, 0x51, 0x57,
            0x5f, 0x62, 0x67, 0x68, 0x67, 0x3e, 0x4d, 0x71, 0x79, 0x70, 0x64, 0x78, 0x5c, 0x65, 0x67, 0x63,
            0xFF, 0xDB, 0x00, 0x43, 0x01,
            0x11, 0x12, 0x12, 0x18, 0x15, 0x18, 0x2f, 0x1a, 0x1a, 0x2f, 0x63, 0x42, 0x38, 0x42, 0x63, 0x63,
            0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63,
            0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63,
            0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63,
        },
    },

//55
    {

        {
            0x0049, 0x0049, 0x0057, 0x003e, 0x002e, 0x0024, 0x0029, 0x0043,
            0x0043, 0x0030, 0x002b, 0x0024, 0x0020, 0x0012, 0x0019, 0x0035,
            0x003c, 0x002f, 0x002a, 0x001e, 0x0015, 0x0013, 0x0017, 0x0038,
            0x0042, 0x0029, 0x0021, 0x001c, 0x0012, 0x000e, 0x0016, 0x0038,
            0x0040, 0x0024, 0x0017, 0x0011, 0x0010, 0x000d, 0x0014, 0x0035,
            0x003b, 0x001d, 0x0013, 0x0013, 0x0011, 0x0011, 0x0017, 0x0038,
            0x002b, 0x0017, 0x0014, 0x0014, 0x0014, 0x0016, 0x0020, 0x004b,
            0x0039, 0x0020, 0x0021, 0x0023, 0x0024, 0x0034, 0x0049, 0x0097,
        },

        {
            0x0044, 0x002e, 0x0023, 0x0014, 0x000b, 0x000e, 0x0015, 0x0029,
            0x002e, 0x001c, 0x0018, 0x000a, 0x0008, 0x000a, 0x000f, 0x001e,
            0x0023, 0x0018, 0x000b, 0x0007, 0x0008, 0x000b, 0x0010, 0x001f,
            0x0014, 0x000a, 0x0007, 0x0008, 0x0009, 0x000c, 0x0012, 0x0023,
            0x000b, 0x0008, 0x0008, 0x0009, 0x000b, 0x000e, 0x0015, 0x0029,
            0x000e, 0x000a, 0x000b, 0x000c, 0x000e, 0x0012, 0x001b, 0x0035,
            0x0015, 0x000f, 0x0010, 0x0012, 0x0015, 0x001b, 0x0027, 0x004d,
            0x0029, 0x001e, 0x001f, 0x0023, 0x0029, 0x0035, 0x004d, 0x0097,
        },

        {
            0xFF, 0xDB, 0x00, 0x43, 0x00,
            0x0e, 0x0a, 0x0b, 0x0d, 0x0b, 0x09, 0x0e, 0x0d, 0x0c, 0x0d, 0x10, 0x0f, 0x0e, 0x11, 0x16, 0x24,
            0x17, 0x16, 0x14, 0x14, 0x16, 0x2c, 0x20, 0x21, 0x1a, 0x24, 0x34, 0x2e, 0x37, 0x36, 0x33, 0x2e,
            0x32, 0x32, 0x3a, 0x41, 0x53, 0x46, 0x3a, 0x3d, 0x4e, 0x3e, 0x32, 0x32, 0x48, 0x62, 0x49, 0x4e,
            0x56, 0x58, 0x5d, 0x5e, 0x5d, 0x38, 0x45, 0x66, 0x6d, 0x65, 0x5a, 0x6c, 0x53, 0x5b, 0x5d, 0x59,
            0xFF, 0xDB, 0x00, 0x43, 0x01,
            0x0f, 0x10, 0x10, 0x16, 0x13, 0x16, 0x2a, 0x17, 0x17, 0x2a, 0x59, 0x3b, 0x32, 0x3b, 0x59, 0x59,
            0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59,
            0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59,
            0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59, 0x59,
        },

    },
//60
    {

        {
            0x004e, 0x0052, 0x0061, 0x0042, 0x0035, 0x0028, 0x002e, 0x004b,
            0x0049, 0x0035, 0x0033, 0x0029, 0x0023, 0x0014, 0x001c, 0x003c,
            0x0047, 0x0038, 0x002e, 0x0023, 0x0018, 0x0015, 0x001a, 0x003f,
            0x004f, 0x002c, 0x0025, 0x0020, 0x0015, 0x000f, 0x0019, 0x003f,
            0x0049, 0x0029, 0x001a, 0x0013, 0x0012, 0x000e, 0x0017, 0x003b,
            0x0044, 0x0021, 0x0016, 0x0015, 0x0014, 0x0013, 0x001a, 0x003f,
            0x0030, 0x001a, 0x0017, 0x0016, 0x0017, 0x0018, 0x0024, 0x0054,
            0x003f, 0x0024, 0x0025, 0x0028, 0x0029, 0x003b, 0x0053, 0x00aa,
        },

        {
            0x0049, 0x0034, 0x0029, 0x0016, 0x000c, 0x0010, 0x0017, 0x002e,
            0x0034, 0x001f, 0x001a, 0x000b, 0x0009, 0x000b, 0x0011, 0x0021,
            0x0029, 0x001a, 0x000d, 0x0008, 0x0009, 0x000c, 0x0012, 0x0023,
            0x0016, 0x000b, 0x0008, 0x0009, 0x000b, 0x000e, 0x0014, 0x0027,
            0x000c, 0x0009, 0x0009, 0x000b, 0x000c, 0x0010, 0x0017, 0x002e,
            0x0010, 0x000b, 0x000c, 0x000e, 0x0010, 0x0014, 0x001e, 0x003b,
            0x0017, 0x0011, 0x0012, 0x0014, 0x0017, 0x001e, 0x002c, 0x0056,
            0x002e, 0x0021, 0x0023, 0x0027, 0x002e, 0x003b, 0x0056, 0x00aa,
        },

        {
            0xFF, 0xDB, 0x00, 0x43, 0x00,
            0x0d, 0x09, 0x0a, 0x0b, 0x0a, 0x08, 0x0d, 0x0b, 0x0a, 0x0b, 0x0e, 0x0e, 0x0d, 0x0f, 0x13, 0x20,
            0x15, 0x13, 0x12, 0x12, 0x13, 0x27, 0x1c, 0x1e, 0x17, 0x20, 0x2e, 0x29, 0x31, 0x30, 0x2e, 0x29,
            0x2d, 0x2c, 0x33, 0x3a, 0x4a, 0x3e, 0x33, 0x36, 0x46, 0x37, 0x2c, 0x2d, 0x40, 0x57, 0x41, 0x46,
            0x4c, 0x4e, 0x52, 0x53, 0x52, 0x32, 0x3e, 0x5a, 0x61, 0x5a, 0x50, 0x60, 0x4a, 0x51, 0x52, 0x4f,
            0xFF, 0xDB, 0x00, 0x43, 0x01,
            0x0e, 0x0e, 0x0e, 0x13, 0x11, 0x13, 0x26, 0x15, 0x15, 0x26, 0x4f, 0x35, 0x2d, 0x35, 0x4f, 0x4f,
            0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f,
            0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f,
            0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f, 0x4f,
        },

    },

//65
    {

        {
            0x005d, 0x005c, 0x006f, 0x004f, 0x003c, 0x002e, 0x0034, 0x0056,
            0x005c, 0x0042, 0x0038, 0x0030, 0x0029, 0x0016, 0x0020, 0x0044,
            0x004e, 0x003e, 0x0036, 0x0027, 0x001b, 0x0018, 0x001e, 0x0048,
            0x0057, 0x0034, 0x002c, 0x0025, 0x0018, 0x0012, 0x001c, 0x0049,
            0x004e, 0x0031, 0x001e, 0x0016, 0x0015, 0x0011, 0x001a, 0x0044,
            0x004c, 0x0025, 0x0019, 0x0018, 0x0016, 0x0016, 0x001e, 0x0049,
            0x0037, 0x001e, 0x001a, 0x001a, 0x001a, 0x001c, 0x0029, 0x0060,
            0x004a, 0x0029, 0x002a, 0x002d, 0x002f, 0x0043, 0x005f, 0x00c2,
        },

        {
            0x0055, 0x0038, 0x002e, 0x001a, 0x000e, 0x0012, 0x001b, 0x0035,
            0x0038, 0x0023, 0x001f, 0x000d, 0x000a, 0x000d, 0x0013, 0x0026,
            0x002e, 0x001f, 0x000f, 0x0009, 0x000b, 0x000e, 0x0014, 0x0029,
            0x001a, 0x000d, 0x0009, 0x000a, 0x000c, 0x0010, 0x0017, 0x002d,
            0x000e, 0x000a, 0x000b, 0x000c, 0x000e, 0x0012, 0x001b, 0x0035,
            0x0012, 0x000d, 0x000e, 0x0010, 0x0012, 0x0018, 0x0022, 0x0044,
            0x001b, 0x0013, 0x0014, 0x0017, 0x001b, 0x0022, 0x0032, 0x0063,
            0x0035, 0x0026, 0x0029, 0x002d, 0x0035, 0x0044, 0x0063, 0x00c2,
        },

        {
            0xFF, 0xDB, 0x00, 0x43, 0x00,
            0x0b, 0x08, 0x08, 0x0a, 0x08, 0x07, 0x0b, 0x0a, 0x09, 0x0a, 0x0d, 0x0c, 0x0b, 0x0d, 0x11, 0x1c,
            0x12, 0x11, 0x0f, 0x0f, 0x11, 0x22, 0x19, 0x1a, 0x14, 0x1c, 0x29, 0x24, 0x2b, 0x2a, 0x28, 0x24,
            0x27, 0x27, 0x2d, 0x32, 0x40, 0x37, 0x2d, 0x30, 0x3d, 0x30, 0x27, 0x27, 0x38, 0x4c, 0x39, 0x3d,
            0x43, 0x45, 0x48, 0x49, 0x48, 0x2b, 0x36, 0x4f, 0x55, 0x4e, 0x46, 0x54, 0x40, 0x47, 0x48, 0x45,
            0xFF, 0xDB, 0x00, 0x43, 0x01,
            0x0c, 0x0d, 0x0d, 0x11, 0x0f, 0x11, 0x21, 0x12, 0x12, 0x21, 0x45, 0x2e, 0x27, 0x2e, 0x45, 0x45,
            0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45,
            0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45,
            0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45, 0x45,
        },

    },
    {
        //70


        {
            0x0066, 0x0069, 0x0082, 0x0057, 0x0049, 0x0036, 0x003d, 0x0064,
            0x0069, 0x004c, 0x0046, 0x0039, 0x002e, 0x001a, 0x0025, 0x0051,
            0x0061, 0x0046, 0x003b, 0x002f, 0x0020, 0x001d, 0x0023, 0x0053,
            0x006c, 0x003e, 0x0033, 0x002b, 0x001c, 0x0015, 0x0021, 0x0055,
            0x005d, 0x0038, 0x0023, 0x0019, 0x0018, 0x0014, 0x001e, 0x0050,
            0x005d, 0x002c, 0x001e, 0x001d, 0x001a, 0x001a, 0x0023, 0x0055,
            0x0041, 0x0023, 0x001e, 0x001e, 0x001e, 0x0020, 0x0030, 0x0070,
            0x0056, 0x0030, 0x0031, 0x0035, 0x0037, 0x004e, 0x006e, 0x00e4,
        },

        {
            0x0066, 0x0043, 0x0037, 0x001f, 0x0011, 0x0016, 0x0020, 0x003e,
            0x0043, 0x0028, 0x0023, 0x000f, 0x000c, 0x000f, 0x0017, 0x002d,
            0x0037, 0x0023, 0x0011, 0x000b, 0x000d, 0x0010, 0x0018, 0x0030,
            0x001f, 0x000f, 0x000b, 0x000c, 0x000e, 0x0012, 0x001b, 0x0035,
            0x0011, 0x000c, 0x000d, 0x000e, 0x0011, 0x0016, 0x0020, 0x003e,
            0x0016, 0x000f, 0x0010, 0x0012, 0x0016, 0x001c, 0x0028, 0x0050,
            0x0020, 0x0017, 0x0018, 0x001b, 0x0020, 0x0028, 0x003b, 0x0074,
            0x003e, 0x002d, 0x0030, 0x0035, 0x003e, 0x0050, 0x0074, 0x00e4,
        },

        {
            0xFF, 0xDB, 0x00, 0x43, 0x00,
            0x0a, 0x07, 0x07, 0x08, 0x07, 0x06, 0x0a, 0x08, 0x08, 0x08, 0x0b, 0x0a, 0x0a, 0x0b, 0x0e, 0x18,
            0x10, 0x0e, 0x0d, 0x0d, 0x0e, 0x1d, 0x15, 0x16, 0x11, 0x18, 0x23, 0x1f, 0x25, 0x24, 0x22, 0x1f,
            0x22, 0x21, 0x26, 0x2b, 0x37, 0x2f, 0x26, 0x29, 0x34, 0x29, 0x21, 0x22, 0x30, 0x41, 0x31, 0x34,
            0x39, 0x3b, 0x3e, 0x3e, 0x3e, 0x25, 0x2e, 0x44, 0x49, 0x43, 0x3c, 0x48, 0x37, 0x3d, 0x3e, 0x3b,
            0xFF, 0xDB, 0x00, 0x43, 0x01,
            0x0a, 0x0b, 0x0b, 0x0e, 0x0d, 0x0e, 0x1c, 0x10, 0x10, 0x1c, 0x3b, 0x28, 0x22, 0x28, 0x3b, 0x3b,
            0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b,
            0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b,
            0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b, 0x3b,
        },
    },
    //75
    {



        {
            0x0080, 0x007b, 0x009c, 0x006c, 0x0055, 0x0041, 0x0048, 0x0077,
            0x007b, 0x0058, 0x0050, 0x003e, 0x0038, 0x0020, 0x002d, 0x005f,
            0x006f, 0x0050, 0x004a, 0x0037, 0x0027, 0x0022, 0x0029, 0x0065,
            0x007c, 0x0045, 0x003c, 0x0031, 0x0021, 0x0019, 0x0028, 0x0065,
            0x0071, 0x0043, 0x0029, 0x001f, 0x001e, 0x0017, 0x0024, 0x005f,
            0x006c, 0x0034, 0x0023, 0x0022, 0x001f, 0x001f, 0x002a, 0x0066,
            0x004b, 0x002a, 0x0025, 0x0024, 0x0024, 0x0027, 0x003a, 0x0086,
            0x0067, 0x003a, 0x003b, 0x0040, 0x0042, 0x005e, 0x0083, 0x010d,
        },

        {
            0x0071, 0x0052, 0x0041, 0x0024, 0x0014, 0x001a, 0x0025, 0x004a,
            0x0052, 0x0030, 0x002b, 0x0013, 0x000e, 0x0012, 0x001b, 0x0035,
            0x0041, 0x002b, 0x0015, 0x000d, 0x000f, 0x0013, 0x001c, 0x0038,
            0x0024, 0x0013, 0x000d, 0x000e, 0x0011, 0x0016, 0x0020, 0x003f,
            0x0014, 0x000e, 0x000f, 0x0011, 0x0014, 0x001a, 0x0025, 0x004a,
            0x001a, 0x0012, 0x0013, 0x0016, 0x001a, 0x0021, 0x0030, 0x005e,
            0x0025, 0x001b, 0x001c, 0x0020, 0x0025, 0x0030, 0x0045, 0x0089,
            0x004a, 0x0035, 0x0038, 0x003f, 0x004a, 0x005e, 0x0089, 0x010d,
        },

        {
            0xFF, 0xDB, 0x00, 0x43, 0x00,
            0x08, 0x06, 0x06, 0x07, 0x06, 0x05, 0x08, 0x07, 0x07, 0x07, 0x09, 0x09, 0x08, 0x0a, 0x0c, 0x14,
            0x0d, 0x0c, 0x0b, 0x0b, 0x0c, 0x19, 0x12, 0x13, 0x0f, 0x14, 0x1d, 0x1a, 0x1f, 0x1e, 0x1d, 0x1a,
            0x1c, 0x1c, 0x20, 0x24, 0x2e, 0x27, 0x20, 0x22, 0x2c, 0x23, 0x1c, 0x1c, 0x28, 0x37, 0x29, 0x2c,
            0x30, 0x31, 0x34, 0x34, 0x34, 0x1f, 0x27, 0x39, 0x3d, 0x38, 0x32, 0x3c, 0x2e, 0x33, 0x34, 0x32,
            0xFF, 0xDB, 0x00, 0x43, 0x01,
            0x09, 0x09, 0x09, 0x0c, 0x0b, 0x0c, 0x18, 0x0d, 0x0d, 0x18, 0x32, 0x21, 0x1c, 0x21, 0x32, 0x32,
            0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32,
            0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32,
            0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32, 0x32,
        },

    },
    //80
    {

        {
            0x00aa, 0x00b8, 0x00c3, 0x0091, 0x0066, 0x0051, 0x005e, 0x009a,
            0x0093, 0x006a, 0x005e, 0x004e, 0x0049, 0x0028, 0x0038, 0x0079,
            0x0082, 0x0071, 0x0063, 0x0042, 0x0030, 0x002b, 0x0033, 0x0081,
            0x0091, 0x0059, 0x004a, 0x003d, 0x002b, 0x001f, 0x0032, 0x007e,
            0x0092, 0x0052, 0x0034, 0x0027, 0x0025, 0x001d, 0x002e, 0x0077,
            0x0082, 0x0043, 0x002d, 0x002a, 0x0028, 0x0027, 0x0035, 0x007f,
            0x005e, 0x0034, 0x002e, 0x002d, 0x002e, 0x0032, 0x0048, 0x00ab,
            0x007f, 0x0048, 0x004a, 0x0050, 0x0052, 0x0076, 0x00a7, 0x0150,
        },

        {
            0x0092, 0x0069, 0x004e, 0x002d, 0x0019, 0x0020, 0x002f, 0x005c,
            0x0069, 0x0042, 0x0038, 0x0018, 0x0012, 0x0017, 0x0022, 0x0042,
            0x004e, 0x0038, 0x001b, 0x0010, 0x0013, 0x0018, 0x0024, 0x0047,
            0x002d, 0x0018, 0x0010, 0x0012, 0x0015, 0x001b, 0x0028, 0x004e,
            0x0019, 0x0012, 0x0013, 0x0015, 0x0019, 0x0020, 0x002f, 0x005c,
            0x0020, 0x0017, 0x0018, 0x001b, 0x0020, 0x0029, 0x003c, 0x0076,
            0x002f, 0x0022, 0x0024, 0x0028, 0x002f, 0x003c, 0x0057, 0x00ab,
            0x005c, 0x0042, 0x0047, 0x004e, 0x005c, 0x0076, 0x00ab, 0x0150,
        },

        {
            0xFF, 0xDB, 0x00, 0x43, 0x00,
            0x06, 0x04, 0x05, 0x06, 0x05, 0x04, 0x06, 0x06, 0x05, 0x06, 0x07, 0x07, 0x06, 0x08, 0x0a, 0x10,
            0x0a, 0x0a, 0x09, 0x09, 0x0a, 0x14, 0x0e, 0x0f, 0x0c, 0x10, 0x17, 0x14, 0x18, 0x18, 0x17, 0x14,
            0x16, 0x16, 0x1a, 0x1d, 0x25, 0x1f, 0x1a, 0x1b, 0x23, 0x1c, 0x16, 0x16, 0x20, 0x2c, 0x20, 0x23,
            0x26, 0x27, 0x29, 0x2a, 0x29, 0x19, 0x1f, 0x2d, 0x30, 0x2d, 0x28, 0x30, 0x25, 0x28, 0x29, 0x28,
            0xFF, 0xDB, 0x00, 0x43, 0x01,
            0x07, 0x07, 0x07, 0x0a, 0x08, 0x0a, 0x13, 0x0a, 0x0a, 0x13, 0x28, 0x1a, 0x16, 0x1a, 0x28, 0x28,
            0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28,
            0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28,
            0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28, 0x28,
        },

    },


    //85
    {


        {
            0x00cc, 0x00f6, 0x0105, 0x00ae, 0x0092, 0x006c, 0x007e, 0x00ce,
            0x00b8, 0x0085, 0x008d, 0x0068, 0x005c, 0x0037, 0x004b, 0x009d,
            0x00c3, 0x008d, 0x0077, 0x005f, 0x0041, 0x003a, 0x0044, 0x00a7,
            0x00d9, 0x007d, 0x005f, 0x0052, 0x003a, 0x002a, 0x0043, 0x00a6,
            0x00cc, 0x0069, 0x0047, 0x0033, 0x0033, 0x0027, 0x003d, 0x00a1,
            0x00ba, 0x0055, 0x003a, 0x003a, 0x0036, 0x0035, 0x0046, 0x00a8,
            0x007e, 0x0047, 0x003e, 0x003d, 0x003d, 0x0042, 0x0061, 0x00e4,
            0x00a8, 0x005f, 0x0061, 0x006c, 0x006d, 0x009d, 0x00dd, 0x01c0,
        },

        {
            0x00cc, 0x0093, 0x006f, 0x003e, 0x0022, 0x002b, 0x003f, 0x007b,
            0x0093, 0x0058, 0x0046, 0x001f, 0x0018, 0x001f, 0x002d, 0x0059,
            0x006f, 0x0046, 0x0023, 0x0016, 0x001a, 0x0021, 0x0030, 0x005e,
            0x003e, 0x001f, 0x0016, 0x0018, 0x001d, 0x0024, 0x0035, 0x0069,
            0x0022, 0x0018, 0x001a, 0x001d, 0x0022, 0x002b, 0x003f, 0x007b,
            0x002b, 0x001f, 0x0021, 0x0024, 0x002b, 0x0037, 0x0050, 0x009d,
            0x003f, 0x002d, 0x0030, 0x0035, 0x003f, 0x0050, 0x0074, 0x00e4,
            0x007b, 0x0059, 0x005e, 0x0069, 0x007b, 0x009d, 0x00e4, 0x01c0,
        },

        {
            0xFF, 0xDB, 0x00, 0x43, 0x00,
            0x05, 0x03, 0x04, 0x04, 0x04, 0x03, 0x05, 0x04, 0x04, 0x04, 0x05, 0x05, 0x05, 0x06, 0x07, 0x0c,
            0x08, 0x07, 0x07, 0x07, 0x07, 0x0f, 0x0b, 0x0b, 0x09, 0x0c, 0x11, 0x0f, 0x12, 0x12, 0x11, 0x0f,
            0x11, 0x11, 0x13, 0x16, 0x1c, 0x17, 0x13, 0x14, 0x1a, 0x15, 0x11, 0x11, 0x18, 0x21, 0x18, 0x1a,
            0x1d, 0x1d, 0x1f, 0x1f, 0x1f, 0x13, 0x17, 0x22, 0x24, 0x22, 0x1e, 0x24, 0x1c, 0x1e, 0x1f, 0x1e,
            0xFF, 0xDB, 0x00, 0x43, 0x01,
            0x05, 0x05, 0x05, 0x07, 0x06, 0x07, 0x0e, 0x08, 0x08, 0x0e, 0x1e, 0x14, 0x11, 0x14, 0x1e, 0x1e,
            0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e,
            0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e,
            0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e, 0x1e,
        },

    }

};

#if 1  //bigedian
static const u32 STD_DC_Y_HT[12] __attribute__((aligned(32))) = {
    0x20000, 0x30002, 0x30003, 0x30004, 0x30005, 0x30006, 0x4000e, 0x5001e, 0x6003e, 0x7007e, 0x800fe, 0x901fe
};

static const u32 STD_AC_Y_HT[162] __attribute__((aligned(32))) = {
    0x4000a, 0x20000, 0x20001, 0x30004, 0x4000b, 0x5001a, 0x70078, 0x800f8, 0xa03f6, 0x10ff82, 0x10ff83, 0x4000c,
    0x5001b, 0x70079, 0x901f6, 0xb07f6, 0x10ff84, 0x10ff85, 0x10ff86, 0x10ff87, 0x10ff88, 0x5001c, 0x800f9, 0xa03f7,
    0xc0ff4, 0x10ff89, 0x10ff8a, 0x10ff8b, 0x10ff8c, 0x10ff8d, 0x10ff8e, 0x6003a, 0x901f7, 0xc0ff5, 0x10ff8f, 0x10ff90,
    0x10ff91, 0x10ff92, 0x10ff93, 0x10ff94, 0x10ff95, 0x6003b, 0xa03f8, 0x10ff96, 0x10ff97, 0x10ff98, 0x10ff99, 0x10ff9a,
    0x10ff9b, 0x10ff9c, 0x10ff9d, 0x7007a, 0xb07f7, 0x10ff9e, 0x10ff9f, 0x10ffa0, 0x10ffa1, 0x10ffa2, 0x10ffa3, 0x10ffa4,
    0x10ffa5, 0x7007b, 0xc0ff6, 0x10ffa6, 0x10ffa7, 0x10ffa8, 0x10ffa9, 0x10ffaa, 0x10ffab, 0x10ffac, 0x10ffad, 0x800fa,
    0xc0ff7, 0x10ffae, 0x10ffaf, 0x10ffb0, 0x10ffb1, 0x10ffb2, 0x10ffb3, 0x10ffb4, 0x10ffb5, 0x901f8, 0xf7fc0, 0x10ffb6,
    0x10ffb7, 0x10ffb8, 0x10ffb9, 0x10ffba, 0x10ffbb, 0x10ffbc, 0x10ffbd, 0x901f9, 0x10ffbe, 0x10ffbf, 0x10ffc0, 0x10ffc1,
    0x10ffc2, 0x10ffc3, 0x10ffc4, 0x10ffc5, 0x10ffc6, 0x901fa, 0x10ffc7, 0x10ffc8, 0x10ffc9, 0x10ffca, 0x10ffcb, 0x10ffcc,
    0x10ffcd, 0x10ffce, 0x10ffcf, 0xa03f9, 0x10ffd0, 0x10ffd1, 0x10ffd2, 0x10ffd3, 0x10ffd4, 0x10ffd5, 0x10ffd6, 0x10ffd7,
    0x10ffd8, 0xa03fa, 0x10ffd9, 0x10ffda, 0x10ffdb, 0x10ffdc, 0x10ffdd, 0x10ffde, 0x10ffdf, 0x10ffe0, 0x10ffe1, 0xb07f8,
    0x10ffe2, 0x10ffe3, 0x10ffe4, 0x10ffe5, 0x10ffe6, 0x10ffe7, 0x10ffe8, 0x10ffe9, 0x10ffea, 0x10ffeb, 0x10ffec, 0x10ffed,
    0x10ffee, 0x10ffef, 0x10fff0, 0x10fff1, 0x10fff2, 0x10fff3, 0x10fff4, 0xb07f9, 0x10fff5, 0x10fff6, 0x10fff7, 0x10fff8,
    0x10fff9, 0x10fffa, 0x10fffb, 0x10fffc, 0x10fffd, 0x10fffe
};

static const u32 STD_DC_UV_HT[12] __attribute__((aligned(32))) = {
    0x20000, 0x20001, 0x20002, 0x30006, 0x4000e, 0x5001e, 0x6003e, 0x7007e, 0x800fe, 0x901fe, 0xa03fe, 0xb07fe
};

static const u32 STD_AC_UV_HT[162] __attribute__((aligned(32))) = {
    0x20000, 0x20001, 0x30004, 0x4000a, 0x50018, 0x50019, 0x60038, 0x70078, 0x901f4, 0xa03f6, 0xc0ff4, 0x4000b, 0x60039,
    0x800f6, 0x901f5, 0xb07f6, 0xc0ff5, 0x10ff88, 0x10ff89, 0x10ff8a, 0x10ff8b, 0x5001a, 0x800f7, 0xa03f7, 0xc0ff6, 0xf7fc2,
    0x10ff8c, 0x10ff8d, 0x10ff8e, 0x10ff8f, 0x10ff90, 0x5001b, 0x800f8, 0xa03f8, 0xc0ff7, 0x10ff91, 0x10ff92, 0x10ff93, 0x10ff94,
    0x10ff95, 0x10ff96, 0x6003a, 0x901f6, 0x10ff97, 0x10ff98, 0x10ff99, 0x10ff9a, 0x10ff9b, 0x10ff9c, 0x10ff9d, 0x10ff9e, 0x6003b,
    0xa03f9, 0x10ff9f, 0x10ffa0, 0x10ffa1, 0x10ffa2, 0x10ffa3, 0x10ffa4, 0x10ffa5, 0x10ffa6, 0x70079, 0xb07f7, 0x10ffa7, 0x10ffa8,
    0x10ffa9, 0x10ffaa, 0x10ffab, 0x10ffac, 0x10ffad, 0x10ffae, 0x7007a, 0xb07f8, 0x10ffaf, 0x10ffb0, 0x10ffb1, 0x10ffb2, 0x10ffb3,
    0x10ffb4, 0x10ffb5, 0x10ffb6, 0x800f9, 0x10ffb7, 0x10ffb8, 0x10ffb9, 0x10ffba, 0x10ffbb, 0x10ffbc, 0x10ffbd, 0x10ffbe, 0x10ffbf,
    0x901f7, 0x10ffc0, 0x10ffc1, 0x10ffc2, 0x10ffc3, 0x10ffc4, 0x10ffc5, 0x10ffc6, 0x10ffc7, 0x10ffc8, 0x901f8, 0x10ffc9, 0x10ffca,
    0x10ffcb, 0x10ffcc, 0x10ffcd, 0x10ffce, 0x10ffcf, 0x10ffd0, 0x10ffd1, 0x901f9, 0x10ffd2, 0x10ffd3, 0x10ffd4, 0x10ffd5, 0x10ffd6,
    0x10ffd7, 0x10ffd8, 0x10ffd9, 0x10ffda, 0x901fa, 0x10ffdb, 0x10ffdc, 0x10ffdd, 0x10ffde, 0x10ffdf, 0x10ffe0, 0x10ffe1, 0x10ffe2,
    0x10ffe3, 0xb07f9, 0x10ffe4, 0x10ffe5, 0x10ffe6, 0x10ffe7, 0x10ffe8, 0x10ffe9, 0x10ffea, 0x10ffeb, 0x10ffec, 0xe3fe0, 0x10ffed,
    0x10ffee, 0x10ffef, 0x10fff0, 0x10fff1, 0x10fff2, 0x10fff3, 0x10fff4, 0x10fff5, 0xa03fa, 0xf7fc3, 0x10fff6, 0x10fff7, 0x10fff8,
    0x10fff9, 0x10fffa, 0x10fffb, 0x10fffc, 0x10fffd, 0x10fffe
};
#else

#endif

#endif

/* Flash OS Routines (Automagically Generated)
 * Copyright (c) 2009-2015 ARM Limited
 */
#include "flash_blob.h"

static const uint32_t flash_code[] = {
    0xE00ABE00, 0x062D780D, 0x24084068, 0xD3000040, 0x1E644058, 0x1C49D1FA, 0x2A001E52, 0x4770D1F2,
    0x8F4FF3BF, 0x03404770, 0x28080EC0, 0x08C0D301, 0x47701D00, 0x49474848, 0x49486041, 0x21006041,
    0x68C16001, 0x431122F0, 0x694060C1, 0xD4060680, 0x49434844, 0x21066001, 0x49436041, 0x20006081,
    0x483D4770, 0x05426901, 0x61014311, 0x47702000, 0x4839B510, 0x24046901, 0x61014321, 0x03A26901,
    0x61014311, 0x4A374939, 0x6011E000, 0x03DB68C3, 0x6901D4FB, 0x610143A1, 0xBD102000, 0xF7FFB530,
    0x492DFFC2, 0x23F068CA, 0x60CA431A, 0x610C2402, 0x0700690A, 0x43020E40, 0x6908610A, 0x431003E2,
    0x482A6108, 0xE0004A27, 0x68CD6010, 0xD4FB03ED, 0x43A06908, 0x68C86108, 0x0F000600, 0x68C8D003,
    0x60C84318, 0xBD302001, 0x4C1BB5F0, 0x08891CC9, 0x008968E5, 0x431D23F0, 0x230060E5, 0x27016123,
    0x4D1A06FF, 0x6923E021, 0x43334E19, 0x03066123, 0x19F60B36, 0x60336813, 0x8F4FF3BF, 0xE0004E11,
    0x68E36035, 0xD4FB03DB, 0x085B6923, 0x6123005B, 0x061B68E3, 0xD0050F1B, 0x21F068E0, 0x60E04308,
    0xBDF02001, 0x1F091D00, 0x29001D12, 0x2000D1DB, 0x0000BDF0, 0x45670123, 0x40023C00, 0xCDEF89AB,
    0x00005555, 0x40003000, 0x00000FFF, 0x0000AAAA, 0x00000201, 0x00000000
};

const program_target_t flash_algo = {
    0x20000035,  // Init
    0x20000063,  // UnInit
    0x20000071,  // EraseChip
    0x2000009D,  // EraseSector
    0x200000E9,  // ProgramPage

    // BKPT : start of blob + 1
    // RSB  : address to access global/static data
    // RSP  : stack pointer
    {
        0x20000001,
        0x20000C00,
        0x20001000
    },

    0x20000400,  // mem buffer location
    0x20000000,  // location to write prog_blob in target RAM
    sizeof(flash_code),  // prog_blob size
    flash_code,  // address of prog_blob
    0x00000400,  // ram_to_flash_bytes_to_be_written
};
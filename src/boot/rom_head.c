#include "genesis.h"

/* Console Name (16) */
/* Copyright Information (16) */
/* Domestic Name (48) */
/* Overseas Name (48) */
/* Serial Number (2, 12) */
/* Checksum (2) */
/* I/O Support (16) */
/* ROM Start Address (4) */
/* ROM End Address (4) */
/* Start of Backup RAM (4) */
/* End of Backup RAM (4) */
/* "RA" for save ram (2) */
/* 0xF820 for save ram on odd bytes (2) */
/* SRAM start address - normally 0x200001 (4) */
/* SRAM end address - start + 2*sram_size (4) */
/* Modem Support (12) */
/* Memo (40) */
/* Country Support (16) */

__attribute__((externally_visible))
const ROMHeader rom_header = {
#if (ENABLE_BANK_SWITCH != 0)
    "SEGA SSF        ",
#else
    "SEGA MEGA DRIVE ",
#endif
    "(C)SGDK 2020    ",
    "SAMPLE PROGRAM                                  ",
    "SAMPLE PROGRAM                                  ",
    "GM 00000000-00",
    0x0000,
    "JD              ",
    0x00000000,
#if (ENABLE_BANK_SWITCH != 0)
    0x003FFFFF,
#else
    0x000FFFFF, /* ROM End Address (4) */
#endif
    0x00FF0000,
    0x00FFFFFF,
    "RA",
    0xF820,
    0x00200000,
    0x002001FF,
    "            ",
    "DEMONSTRATION PROGRAM                   ",
    "JUE             "};

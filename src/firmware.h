/*
* Copyright (c) 2018 Reisyukaku, naehrwert
*
* This program is free software; you can redistribute it and/or modify it
* under the terms and conditions of the GNU General Public License,
* version 2, as published by the Free Software Foundation.
*
* This program is distributed in the hope it will be useful, but WITHOUT
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
* FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
* more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#pragma once

#include "hwinit/types.h"

#define UWU0_MAGIC (u32)0x30557755
#define METADATA_OFFSET 0xB0

typedef struct {
	u32 magic;
	u8 major;
	u8 minor;
} metadata_t;

//Boot status
#define BOOT_STATE_ADDR (vu32 *)0x40002EF8
#define SECMON_STATE_ADDR (vu32 *)0x40002EFC
#define BOOT_STATE_ADDR7X (vu32 *)0x400000F8
#define SECMON_STATE_ADDR7X (vu32 *)(0x400000F8 + 4)

#define BOOT_PKG2_LOADED 2
#define BOOT_DONE 3

#define BOOT_PKG2_LOADED_4X 3
#define BOOT_DONE_4X 4

#define PAYLOAD_ADDR 0xCFF00000

void firmware();

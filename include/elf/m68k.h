/* MC68k ELF support for BFD.
   Copyright 1998, 1999, 2000, 2002, 2005, 2006 Free Software Foundation, Inc.

   This file is part of BFD, the Binary File Descriptor library.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software Foundation,
   Inc., 51 Franklin Street - Fifth Floor, Boston, MA 02110-1301, USA.  */

#ifndef _ELF_M68K_H
#define _ELF_M68K_H

#include "elf/reloc-macros.h"

/* Relocation types.  */
START_RELOC_NUMBERS (elf_m68k_reloc_type)
  RELOC_NUMBER (R_68K_NONE, 0)		/* No reloc */
  RELOC_NUMBER (R_68K_32, 1)		/* Direct 32 bit  */
  RELOC_NUMBER (R_68K_16, 2)		/* Direct 16 bit  */
  RELOC_NUMBER (R_68K_8, 3)		/* Direct 8 bit  */
  RELOC_NUMBER (R_68K_PC32, 4)		/* PC relative 32 bit */
  RELOC_NUMBER (R_68K_PC16, 5)		/* PC relative 16 bit */
  RELOC_NUMBER (R_68K_PC8, 6)		/* PC relative 8 bit */
  RELOC_NUMBER (R_68K_GOT32, 7)		/* 32 bit PC relative GOT entry */
  RELOC_NUMBER (R_68K_GOT16, 8)		/* 16 bit PC relative GOT entry */
  RELOC_NUMBER (R_68K_GOT8, 9)		/* 8 bit PC relative GOT entry */
  RELOC_NUMBER (R_68K_GOT32O, 10)	/* 32 bit GOT offset */
  RELOC_NUMBER (R_68K_GOT16O, 11)	/* 16 bit GOT offset */
  RELOC_NUMBER (R_68K_GOT8O, 12)	/* 8 bit GOT offset */
  RELOC_NUMBER (R_68K_PLT32, 13)	/* 32 bit PC relative PLT address */
  RELOC_NUMBER (R_68K_PLT16, 14)	/* 16 bit PC relative PLT address */
  RELOC_NUMBER (R_68K_PLT8, 15)		/* 8 bit PC relative PLT address */
  RELOC_NUMBER (R_68K_PLT32O, 16)	/* 32 bit PLT offset */
  RELOC_NUMBER (R_68K_PLT16O, 17)	/* 16 bit PLT offset */
  RELOC_NUMBER (R_68K_PLT8O, 18)	/* 8 bit PLT offset */
  RELOC_NUMBER (R_68K_COPY, 19)		/* Copy symbol at runtime */
  RELOC_NUMBER (R_68K_GLOB_DAT, 20)	/* Create GOT entry */
  RELOC_NUMBER (R_68K_JMP_SLOT, 21)	/* Create PLT entry */
  RELOC_NUMBER (R_68K_RELATIVE, 22)	/* Adjust by program base */
  /* These are GNU extensions to enable C++ vtable garbage collection.  */
  RELOC_NUMBER (R_68K_GNU_VTINHERIT, 23)
  RELOC_NUMBER (R_68K_GNU_VTENTRY, 24)
END_RELOC_NUMBERS (R_68K_max)

#define EF_M68K_CPU32    0x00810000
#define EF_M68K_M68000   0x01000000
#define EF_M68K_CFV4E    0x00008000

/* We use the bottom 8 bits to encode information about the
   coldfire variant.  */
#define EF_M68K_ISA_MASK	0x07  /* Which ISA */
#define EF_M68K_ISA_A		0x01
#define EF_M68K_ISA_A_PLUS	0x02
#define EF_M68K_ISA_B		0x03
#define EF_M68K_HW_DIV		0x08  /* Has HW divide */
#define EF_M68K_MAC_MASK	0x30 
#define EF_M68K_MAC		0x10  /* Has MAC */
#define EF_M68K_EMAC		0x20  /* Has EMAC */
#define EF_M68K_USP		0x40  /* Has USP insns */
#define EF_M68K_FLOAT		0x80  /* Has float insns */
#define EF_M68K_CF_MASK		0xFF
     
#endif

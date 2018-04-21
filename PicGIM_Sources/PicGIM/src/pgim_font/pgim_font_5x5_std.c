//
// pgim_font_5x5_std.c
//
// PicGim  -  Generic Information Manager for Pic 18 / 24 family uControllers 
// Version 0.5-x
// AsYntote - SkyMatrix
//
/*#############################################################################

	Copyright (C) 2002 - 2014 
	Danilo Zannoni (AsYntote) - Corrado Tumiati (SkyMatrix)

	This file is part of PicGim library.

	PicGim is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	PicGim is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with picGim; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

#############################################################################*/

/*!		\file			pgim_font_5x5_std.c
		\version		0.5-0
		\date			2002 - 2014
		\brief			
		\details		
		\author			Danilo Zannoni (AsYntote)
		\author			Corrado Tumiati (SkyMatrix)
		\copyright		Released under the terms of the GNU General Public License v2<BR>
						[ http://gkript.org/gk_gpl_v2.php ]
*/

#include "picgim.h"

#if ( ( PGIM_FONT == PG_ENABLE ) && ( PGIM_FONT_5X5_STD_M == PG_INCLUDE ) )

	#if ( PG_PROJECT_STATE == PG_DEBUG )
		#warning	PicGIM >>> Message >>> This file is compiling.
	#endif
	
rom const _pg_Uint8 pg_font_5x5_std[ ] = {
	0x05, 0x05, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, //Char Space
	0x00, 0x00, 0x17, 0x00, 0x00, //Char !
	0x00, 0x03, 0x00, 0x03, 0x00, //Char "
	0x0A, 0x1F, 0x0A, 0x1F, 0x0A, //Char #
	0x00, 0x14, 0x1F, 0x0A, 0x00, //Char $
	0x13, 0x0B, 0x04, 0x1A, 0x19, //Char %
	0x0A, 0x15, 0x16, 0x08, 0x14, //Char &
	0x00, 0x00, 0x03, 0x00, 0x00, //Char '
	0x00, 0x0E, 0x11, 0x00, 0x00, //Char (
	0x00, 0x00, 0x11, 0x0E, 0x00, //Char )
	0x11, 0x0A, 0x1F, 0x0A, 0x11, //Char *
	0x00, 0x04, 0x0E, 0x04, 0x00, //Char +
	0x00, 0x10, 0x08, 0x00, 0x00, //Char ,
	0x00, 0x04, 0x04, 0x04, 0x00, //Char -
	0x00, 0x00, 0x10, 0x00, 0x00, //Char .
	0x10, 0x08, 0x04, 0x02, 0x01, //Char /
	0x0E, 0x11, 0x15, 0x11, 0x0E, //Char 0
	0x00, 0x12, 0x1F, 0x10, 0x00, //Char 1
	0x18, 0x15, 0x15, 0x15, 0x12, //Char 2
	0x0A, 0x11, 0x15, 0x15, 0x0A, //Char 3
	0x08, 0x0C, 0x0A, 0x1F, 0x08, //Char 4
	0x17, 0x15, 0x15, 0x15, 0x08, //Char 5
	0x0E, 0x15, 0x15, 0x15, 0x08, //Char 6
	0x01, 0x01, 0x19, 0x05, 0x03, //Char 7
	0x0A, 0x15, 0x15, 0x15, 0x0A, //Char 8
	0x02, 0x15, 0x15, 0x15, 0x0E, //Char 9
	0x00, 0x00, 0x0A, 0x00, 0x00, //Char :
	0x00, 0x10, 0x0A, 0x00, 0x00, //Char ;
	0x00, 0x04, 0x0A, 0x11, 0x00, //Char <
	0x00, 0x0A, 0x0A, 0x0A, 0x00, //Char =
	0x00, 0x11, 0x0A, 0x04, 0x00, //Char >
	0x02, 0x01, 0x15, 0x05, 0x02, //Char ?
	0x0E, 0x11, 0x15, 0x17, 0x06, //Char @
	0x1E, 0x05, 0x05, 0x05, 0x1E, //Char A
	0x1F, 0x15, 0x15, 0x15, 0x0A, //Char B
	0x0E, 0x11, 0x11, 0x11, 0x0A, //Char C
	0x1F, 0x11, 0x11, 0x11, 0x0E, //Char D
	0x1F, 0x15, 0x15, 0x11, 0x11, //Char E
	0x1F, 0x05, 0x05, 0x01, 0x01, //Char F
	0x0E, 0x11, 0x15, 0x15, 0x0C, //Char G
	0x1F, 0x04, 0x04, 0x04, 0x1F, //Char H
	0x00, 0x11, 0x1F, 0x11, 0x00, //Char I
	0x09, 0x11, 0x11, 0x0F, 0x01, //Char J
	0x1F, 0x08, 0x04, 0x0A, 0x11, //Char K
	0x1F, 0x10, 0x10, 0x10, 0x10, //Char L
	0x1F, 0x02, 0x04, 0x02, 0x1F, //Char M
	0x1F, 0x02, 0x04, 0x08, 0x1F, //Char N
	0x0E, 0x11, 0x11, 0x11, 0x0E, //Char O
	0x1F, 0x09, 0x09, 0x09, 0x06, //Char P
	0x0E, 0x11, 0x11, 0x09, 0x16, //Char Q
	0x1F, 0x05, 0x05, 0x0D, 0x12, //Char R
	0x12, 0x15, 0x15, 0x15, 0x09, //Char S
	0x01, 0x01, 0x1F, 0x01, 0x01, //Char T
	0x0F, 0x10, 0x10, 0x10, 0x0F, //Char U
	0x07, 0x08, 0x10, 0x08, 0x07, //Char V
	0x0F, 0x10, 0x0C, 0x10, 0x0F, //Char W
	0x11, 0x0A, 0x04, 0x0A, 0x11, //Char X
	0x01, 0x02, 0x1C, 0x02, 0x01, //Char Y
	0x11, 0x19, 0x15, 0x13, 0x11, //Char Z
	0x00, 0x1F, 0x11, 0x00, 0x00, //Char [
	0x01, 0x02, 0x04, 0x08, 0x10, //Char BackSlash
	0x00, 0x00, 0x11, 0x1F, 0x00, //Char ]
	0x04, 0x02, 0x01, 0x02, 0x04, //Char ^
	0x10, 0x10, 0x10, 0x10, 0x10, //Char _
	0x00, 0x00, 0x03, 0x00, 0x00, //Char `
	0x08, 0x15, 0x15, 0x15, 0x1E, //Char a
	0x1F, 0x14, 0x14, 0x14, 0x08, //Char b
	0x0C, 0x12, 0x12, 0x12, 0x12, //Char c
	0x08, 0x14, 0x14, 0x14, 0x1F, //Char d
	0x0E, 0x15, 0x15, 0x15, 0x02, //Char e
	0x04, 0x1E, 0x05, 0x01, 0x00, //Char f
	0x12, 0x15, 0x15, 0x15, 0x0E, //Char g
	0x1F, 0x04, 0x04, 0x04, 0x18, //Char h
	0x00, 0x14, 0x1D, 0x10, 0x00, //Char i
	0x10, 0x10, 0x0D, 0x00, 0x00, //Char j
	0x1F, 0x08, 0x04, 0x0A, 0x10, //Char k
	0x00, 0x11, 0x1F, 0x10, 0x00, //Char l
	0x1C, 0x02, 0x1C, 0x02, 0x1C, //Char m
	0x1E, 0x04, 0x02, 0x02, 0x1C, //Char n
	0x0C, 0x12, 0x12, 0x12, 0x0C, //Char o
	0x1F, 0x05, 0x05, 0x05, 0x02, //Char p
	0x02, 0x05, 0x05, 0x05, 0x1F, //Char q
	0x1E, 0x04, 0x02, 0x02, 0x04, //Char r
	0x12, 0x15, 0x15, 0x15, 0x08, //Char s
	0x02, 0x0F, 0x12, 0x12, 0x00, //Char t
	0x0E, 0x10, 0x10, 0x08, 0x1E, //Char u
	0x06, 0x08, 0x10, 0x08, 0x06, //Char v
	0x0E, 0x10, 0x08, 0x10, 0x0E, //Char w
	0x12, 0x12, 0x0C, 0x12, 0x12, //Char x
	0x02, 0x14, 0x14, 0x14, 0x0E, //Char y
	0x12, 0x1A, 0x16, 0x12, 0x00, //Char z
	0x00, 0x04, 0x1B, 0x11, 0x00, //Char {
	0x00, 0x00, 0x1F, 0x00, 0x00, //Char |
	0x00, 0x11, 0x1B, 0x04, 0x00, //Char }
	0x04, 0x02, 0x04, 0x08, 0x04             //Char ~
	};


	
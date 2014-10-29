//
// pgim_ftoa.h
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

/*!		\file			pgim_ftoa.h
		\version		0.5-0
		\date			2002 - 2014
		\brief			Converts a float to string.
		\details
		\author			Danilo Zannoni (AsYntote)
		\author			Corrado Tumiati (SkyMatrix)
		\copyright		Released under the terms of the GNU General Public License v2<BR>
						[ http://gkript.org/gk_gpl_v2.php ]
*/

#ifndef _PGIM_FTOA_H
	#define	_PGIM_FTOA_H
	#if ( ( PGIM_LCD_HD44780 == PG_ENABLE ) || ( PGIM_SERIAL == PG_ENABLE ) || ( PGIM_SPI == PG_ENABLE ) )

		//---[ Decimal Digits ]---
		#define PG_FTOA_DECIMAL_DIGITS_1			10					//!< One decimal digit after decimal point.
		#define PG_FTOA_DECIMAL_DIGITS_2			100					//!< Two decimal digits after decimal point.
		#define PG_FTOA_DECIMAL_DIGITS_3			1000				//!< Three decimal digits after decimal point.
		#define PG_FTOA_DECIMAL_DIGITS_4			10000				//!< Four decimal digits after decimal point.
		#define PG_FTOA_DECIMAL_DIGITS_5			100000				//!< Five decimal digits after decimal point.
		#define PG_FTOA_DECIMAL_DIGITS_6			1000000				//!< Six decimal digits after decimal point.
		#define PG_FTOA_DECIMAL_DIGITS_7			10000000			//!< Seven decimal digits after decimal point.
		
		#define PG_FTOA_MAX_DIGITS					8					//!< Maximum manageable total digit number with high accuracy.
		//---[ END Decimal Digits ]---
		
		/*!
			\brief			Converts a float to string.
			
			\return			???

			\param			pg_ftoa_value					The 32-bit float value to convert to string. \n
			\param			pg_ftoa_trunc_decimal_digits	Number of digits after the decimal point at which to truncate. \n
			\param			pg_ftoa_buffer					The pointer to buffer where store the string.
										
							\b PG_FTOA_CONVERSION_ACCURATE
							??? The function performs the conversion only if the total number of required digits (number of digits of the integer part plus the number of truncated decimal part) is less than or equal to PG_FTOA_MAX_DIGITS. In this case the accuracy is high and the correspondence between the digits and the characters is exact (without rounding), otherwise it returns null and sets an error.
							??? The function performs the conversion regardless of the total number of required digits (number of digits of the integer part plus the number of truncated decimal part). If the total number of digits is less or equal to PG_FTOA_MAX_DIGITS, the precision is high and the correspondence between the digits and the characters is exact (without rounding). If the total number of digits is greater, the accuracy decreases more and more and has rounding, then the result of the conversion is not defined and a warning is generated.
							
							Here a link to the file : \ref pgim_module_setup_public.h where ??? \n
		*/			
		char *	pg_ftoa( _pg_float pg_ftoa_value, _pg_Uint24 pg_ftoa_trunc_decimal_digits, char * pg_ftoa_buffer );

	#endif
#endif	/* _PGIM_FTOA_H */

/*!	\page 		SWG_float			Float to Ascii
		
		\tableofcontents

		\image html	ftoa.png
		
		This function converts a float value to 32-bit in a character string. \n
		e.g.: \n
		\code pg_ftoa( 1234.567890, PG_FLOAT_DECIMAL_DIGITS_2, null ); //Return a pointer to string: "1234.56"
		
		\htmlonly
			<br><br><br><br>
		\endhtmlonly
	\note	This feature is automatically included by enabling the following modules: \n
					\b PGIM_LCD_HD44780 \n
					\b PGIM_SERIAL \n
					\b PGIM_SPI \n
				
	\attention	Here a link to the file : \ref pgim_float.h \n
				This is not a file defined as public and therefore would not be edited. \n 
				We suggest that you edit this file only if necessary and only if you know what you are doing. \n
*/


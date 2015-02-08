//
// main.c
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

/*!		\file			main.c
		\version		0.5-0
		\date			2002 - 2014
		\brief			
		\details		
		\author			Danilo Zannoni (AsYntote)
		\author			Corrado Tumiati (SkyMatrix)
		\copyright		Released under the terms of the GNU General Public License v2<BR>
						[ http://gkript.org/gk_gpl_v2.php ]
*/


#include "picgim_main.h"

void main( void ) {
	float	flo;
	_pg_int32	out;
	char	Str[32];
	pg_initialize();
	pg_pin_mode( T_B3 , PG_OUT );
	pg_adc_set( PG_ANALOG_CHANNELS_PARAM , PG_2_CHANNELS );
	pg_adc_set( PG_ADC_MODULE , PG_ON );
	pg_loop {
		pg_delay_sec( 1 );
		pg_pin_toggle( L_B3 );
		pg_lcd_hd44780_clear( PG_CONTROLLER_0 );
		flo = pg_sensor_ntc( PG_CH_1 );
		pg_lcd_hd44780_write_p_float( PG_CONTROLLER_0 , PG_LINE_0 , 0 , PG_FTOA_DECIMAL_DIGITS_2 , flo );
		pg_lcd_hd44780_write_p_int( PG_CONTROLLER_0 , PG_LINE_1 , 0 , "%d" , pg_adc_get() );
	}
}




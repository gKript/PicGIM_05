/*
	Editor set :	Fixed width fonts - Expandtab OFF - Tabstop 4

	File name :		pgim_selective_compiling.h
	Project :		PicGim - Generic Information Manager for Microchip (C) PIC18F (R) family uControllers
	Author :		Danilo Zannoni (asyntote) - Corrado Tumiati (skymatrix)

	Current Milestone :		0.5
	Current version :		0.5-0
	Since version :			0.1-0
	Deprecated version :	This file is not deprecated.

	START LICENSE	GPL	V3.0

		PicGIM is a "modular library from scratch".
		PicGIM is developed to work with PIC18F (R) MCU family only.

		Copyright (C) 2015  gKript.org - We.PIC project - <http://www.gkript.org>

		This program is free software: you can redistribute it and/or modify
		it under the terms of the GNU General Public License as published by
		the Free Software Foundation, either version 3 of the License, or
		(at your option) any later version.

		This program is distributed in the hope that it will be useful,
		but WITHOUT ANY WARRANTY; without even the implied warranty of
		MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
		GNU General Public License for more details.

		You should have received a copy of the GNU General Public License
		along with this program.  If not, see <http://www.gnu.org/licenses/>.

	END LICENSE
 */

/*!		\file		pgim_selective_compiling.h
		\version	0.6-0
		\date		2002 - 2016
		\brief		
		\details	
		\author		Danilo Zannoni (asyntote)
		\author		Corrado Tumiati (skymatrix)
		\copyright	PicGIM is part of the We.PIC project. \n
					PicGIM is released under the terms of the GNU General Public License V3. \n
					Each part of <b>We.PIC project</b> is released under the GNU General Public License V3. \n
					[ http://www.gnu.org/licenses/gpl-3.0.html ]
*/

#ifndef _PGIM_SELECTIVE_COMPILING_H_
	#define _PGIM_SELECTIVE_COMPILING_H_
	
	//==============================================================================
	//		LCD_HD44780  -  S e l e c t i v e   c o m p i l i n g
	//==============================================================================
	
	#if ( PGIM_LCD_HD44780 == PG_ENABLE )
		//------------------------------------------------------------------------------------------------------------
		//		THESE FUNCTIONS CAN BE DISABLED IF NOT USED ( manual )
		//------------------------------------------------------------------------------------------------------------
		//pg_lcd_hd44780_char_generator()
		#define	PG_LCD_HD44780_CHAR_GENERATOR___SC				PG_ENABLE	//!< Must be: PG_ENABLE || PG_DISABLE
		
		//pg_lcd_hd44780_put_p_char()
		#define	PG_LCD_HD44780_PUT_P_CHAR___SC					PG_ENABLE	//!< Must be: PG_ENABLE || PG_DISABLE
		
		//pg_lcd_hd44780_put_byte()
		#define	PG_LCD_HD44780_PUT_BYTE___SC					PG_ENABLE	//!< Must be: PG_ENABLE || PG_DISABLE
		
		//pg_lcd_hd44780_put_p_byte()
		#define	PG_LCD_HD44780_PUT_P_BYTE___SC					PG_ENABLE	//!< Must be: PG_ENABLE || PG_DISABLE
		
		//pg_lcd_hd44780_write_string_rom()
		#define	PG_LCD_HD44780_WRITE_STRING_ROM___SC			PG_ENABLE	//!< Must be: PG_ENABLE || PG_DISABLE
		
		//pg_lcd_hd44780_write_p_string()
		#define	PG_LCD_HD44780_WRITE_P_STRING___SC				PG_ENABLE	//!< Must be: PG_ENABLE || PG_DISABLE
		
		//pg_lcd_hd44780_write_p_string_flash()
		#define	PG_LCD_HD44780_WRITE_P_STRING_FLASH___SC		PG_ENABLE	//!< Must be: PG_ENABLE || PG_DISABLE
		
		//pg_lcd_hd44780_write_p_string_rom()
		#define	PG_LCD_HD44780_WRITE_P_STRING_ROM___SC			PG_ENABLE	//!< Must be: PG_ENABLE || PG_DISABLE
		
		//pg_lcd_hd44780_write_p_string_flash_rom()
		#define	PG_LCD_HD44780_WRITE_P_STRING_FLASH_ROM___SC	PG_ENABLE	//!< Must be: PG_ENABLE || PG_DISABLE
		
		//pg_lcd_hd44780_write_p_int()
		#define	PG_LCD_HD44780_WRITE_P_INT___SC					PG_ENABLE	//!< Must be: PG_ENABLE || PG_DISABLE
		
		//pg_lcd_hd44780_write()
		#define	PG_LCD_HD44780_WRITE___SC						PG_ENABLE	//!< Must be: PG_ENABLE || PG_DISABLE
		
		//------------------------------------------------------------------------------------------------------------
		//		THESE FUNCTIONS CAN BE DISABLED IF NOT USED ( semi-automatic )
		//------------------------------------------------------------------------------------------------------------
		//pg_lcd_hd44780_write_p_char()
		#define	PG_LCD_HD44780_WRITE_P_CHAR___SC				PG_ENABLE	//!< Must be: PG_ENABLE || PG_DISABLE
		
		//------------------------------------------------------------------------------------------------------------
		//		THESE FUNCTIONS ARE AUTOMATICALLY DISABLED IF NOT REQUIRED:
		//		Nothing to configure here.
		//------------------------------------------------------------------------------------------------------------
		//	pg_lcd_hd44780_splash_full()
		//	pg_lcd_hd44780_splash_slide()
		//	pg_lcd_hd44780_read_byte()
		//	pg_lcd_hd44780_char_generator_from_EE()
		//	pg_lcd_hd44780_write_p_float()
		
		//------------------------------------------------------------------------------------------------------------
		//		COMPULSORY FUNCTIONS ( must be compiled ):
		//		Nothing to configure here.
		//------------------------------------------------------------------------------------------------------------
		//	pg_lcd_hd44780_init()
		//	pg_lcd_hd44780_init_routine()
		//	pg_lcd_hd44780_wait_busy()
		//	pg_ldc_hd44780_write_nibble()
		//	pg_lcd_hd44780_write_byte()
		//	pg_lcd_hd44780_en_select()
		//	pg_lcd_hd44780_clear()
		//	pg_lcd_hd44780_goto()
		//	pg_lcd_hd44780_put_char()
		//	pg_lcd_hd44780_write_string()

	#endif

	
	//==============================================================================
	//		RTC_DS1302  -  S e l e c t i v e   c o m p i l i n g
	//==============================================================================
		
	#if ( PGIM_RTC_DS1302 == PG_ENABLE )
		//------------------------------------------------------------------------------------------------------------
		//		THESE FUNCTIONS CAN BE DISABLED IF NOT USED ( manual )
		//------------------------------------------------------------------------------------------------------------
		//pg_rtc_ds1302_use_min()
		#define	PG_RTC_DS1302_USE_MIN___SC					PG_ENABLE	//!< Must be: PG_ENABLE || PG_DISABLE
		
		//pg_rtc_ds1302_use_hour()
		#define	PG_RTC_DS1302_USE_HOUR___SC					PG_ENABLE	//!< Must be: PG_ENABLE || PG_DISABLE
		
		//pg_rtc_ds1302_use_day()
		#define	PG_RTC_DS1302_USE_DAY___SC					PG_ENABLE	//!< Must be: PG_ENABLE || PG_DISABLE
		
		//pg_rtc_ds1302_use_month()
		#define	PG_RTC_DS1302_USE_MONTH___SC				PG_ENABLE	//!< Must be: PG_ENABLE || PG_DISABLE
		
		//pg_rtc_ds1302_use_year()
		#define	PG_RTC_DS1302_USE_YEAR___SC					PG_ENABLE	//!< Must be: PG_ENABLE || PG_DISABLE
		
		//pg_rtc_ds1302_use_weekday()
		#define	PG_RTC_DS1302_USE_WEEKDAY___SC				PG_ENABLE	//!< Must be: PG_ENABLE || PG_DISABLE

		//------------------------------------------------------------------------------------------------------------
		//		THESE FUNCTIONS CAN BE DISABLED IF NOT USED ( semi-automatic )
		//------------------------------------------------------------------------------------------------------------
		//pg_rtc_ds1302_wr_time_all()
		#define	PG_RTC_DS1302_WR_TIME_ALL___SC				PG_ENABLE	//!< Must be: PG_ENABLE || PG_DISABLE
		
		//pg_rtc_ds1302_rd_time_all()
		#define	PG_RTC_DS1302_RD_TIME_ALL___SC				PG_ENABLE	//!< Must be: PG_ENABLE || PG_DISABLE
		
		//pg_rtc_ds1302_wr_date_all()
		#define	PG_RTC_DS1302_WR_DATE_ALL___SC				PG_ENABLE	//!< Must be: PG_ENABLE || PG_DISABLE
		
		//pg_rtc_ds1302_rd_date_all()
		#define	PG_RTC_DS1302_RD_DATE_ALL___SC				PG_ENABLE	//!< Must be: PG_ENABLE || PG_DISABLE
		
		//------------------------------------------------------------------------------------------------------------
		//		THESE FUNCTIONS ARE AUTOMATICALLY DISABLED IF NOT REQUIRED:
		//		Nothing to configure here.
		//------------------------------------------------------------------------------------------------------------
		//	None.

		//------------------------------------------------------------------------------------------------------------
		//		COMPULSORY FUNCTIONS ( must be compiled ):
		//		Nothing to configure here.
		//------------------------------------------------------------------------------------------------------------
		//	pg_rtc_ds1302_init()
		//	pg_rtc_ds1302_wr_access()
		//	pg_rtc_ds1302_start()
		//	pg_rtc_ds1302_stop()
		//	pg_rtc_ds1302_wr_time_sec()
		//	pg_rtc_ds1302_rd_time_sec()
	
	#endif

	
	//==============================================================================
	//		AD_CONVERTER  -  S e l e c t i v e   c o m p i l i n g
	//==============================================================================
		
	#if ( PGIM_AD_CONVERTER == PG_ENABLE )
		//------------------------------------------------------------------------------------------------------------
		//		THESE FUNCTIONS CAN BE DISABLED IF NOT USED ( manual )
		//------------------------------------------------------------------------------------------------------------
		//pg_adc_get_user_scale()
		#define	PG_ADC_GET_USER_SCALE___SC					PG_ENABLE	//!< Must be: PG_ENABLE || PG_DISABLE
		
		//pg_adc_start_avg()
		#define	PG_ADC_START_AVG___SC						PG_ENABLE	//!< Must be: PG_ENABLE || PG_DISABLE
		
		//pg_adc_get_perc()
		#define	PG_ADC_GET_PERC___SC						PG_ENABLE	//!< Must be: PG_ENABLE || PG_DISABLE
		
		//pg_adc_get_perc_f()
		#define	PG_ADC_GET_PERC_F___SC						PG_ENABLE	//!< Must be: PG_ENABLE || PG_DISABLE
		
		//------------------------------------------------------------------------------------------------------------
		//		THESE FUNCTIONS CAN BE DISABLED IF NOT USED ( semi-automatic )
		//------------------------------------------------------------------------------------------------------------
		//	None.
		
		//------------------------------------------------------------------------------------------------------------
		//		THESE FUNCTIONS ARE AUTOMATICALLY DISABLED IF NOT REQUIRED:
		//		Nothing to configure here.
		//------------------------------------------------------------------------------------------------------------
		//	None.
		
		//------------------------------------------------------------------------------------------------------------
		//		COMPULSORY FUNCTIONS ( must be compiled ):
		//		Nothing to configure here.
		//------------------------------------------------------------------------------------------------------------
		//	pg_adc_init()
		//	pg_adc_set()
		//	pg_adc_start()
		//	pg_adc_get()
	
	#endif
	
	
	//==============================================================================
	//		CALDELAY  -  S e l e c t i v e   c o m p i l i n g
	//==============================================================================
		
	#if ( PGIM_CAL_DELAY == PG_ENABLE )
		//------------------------------------------------------------------------------------------------------------
		//		THESE FUNCTIONS CAN BE DISABLED IF NOT USED ( manual )
		//------------------------------------------------------------------------------------------------------------
		//pg_delay_sec()
		#define	PG_DELAY_SEC___SC						PG_ENABLE	//!< Must be: PG_ENABLE || PG_DISABLE
		
		//pg_delay_msec()
		#define	PG_DELAY_MSEC___SC						PG_ENABLE	//!< Must be: PG_ENABLE || PG_DISABLE
		
		//pg_delay_usec()
		#define	PG_DELAY_USEC___SC						PG_ENABLE	//!< Must be: PG_ENABLE || PG_DISABLE
		
		//pg_delay()
		#define	PG_DELAY___SC							PG_ENABLE	//!< Must be: PG_ENABLE || PG_DISABLE
		
		//------------------------------------------------------------------------------------------------------------
		//		THESE FUNCTIONS CAN BE DISABLED IF NOT USED ( semi-automatic )
		//------------------------------------------------------------------------------------------------------------
		//pg_delay_high_priority()
		#define	PG_DELAY_HIGH_PRIORITY___SC				PG_ENABLE	//!< Must be: PG_ENABLE || PG_DISABLE
		
		//------------------------------------------------------------------------------------------------------------
		//		THESE FUNCTIONS ARE AUTOMATICALLY DISABLED IF NOT REQUIRED:
		//		Nothing to configure here.
		//------------------------------------------------------------------------------------------------------------
		//	None.
		
		//------------------------------------------------------------------------------------------------------------
		//		COMPULSORY FUNCTIONS ( must be compiled ):
		//		Nothing to configure here.
		//------------------------------------------------------------------------------------------------------------
		//	pg_delay_NinstusCalc()
		
	#endif
#endif /* _PGIM_SELECTIVE_COMPILING_H_ */




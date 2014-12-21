//
// pgim_sensor_setup_public.h
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

/*!		\file			pgim_sensor_setup_public.h
		\version		0.5-0
		\date			2002 - 2014
		\brief			SENSOR module configuration public file
		\details		
		\author			Danilo Zannoni (AsYntote)
		\author			Corrado Tumiati (SkyMatrix)
		\copyright		Released under the terms of the GNU General Public License v2<BR>
						[ http://gkript.org/gk_gpl_v2.php ]
*/

#ifndef _PGIM_SENSOR_SETUP_PUBLIC_H_
	#define _PGIM_SENSOR_SETUP_PUBLIC_H_

	#if ( PGIM_SENSOR == PG_ENABLE )
	
		//		S E N S O R S   E N A B L I N G
		#define PGIM_SENSOR_ADC_REF						PG_ENABLE				//!< Must be: PG_ENABLE || PG_DISABLE
		#define PGIM_SENSOR_NTC							PG_ENABLE				//!< Must be: PG_ENABLE || PG_DISABLE

		//
		
		////////////////////////////////////////////////////////////////////////////////
		//
		//		S E N S O R   C O N F I G   |   A D C _ R E F
		//
		////////////////////////////////////////////////////////////////////////////////		

		#if ( PGIM_SENSOR_ADC_REF == PG_ENABLE )
			#define	PGIM_SENSOR_ADC_REF_CH				PG_CH_0					//!< Must be: PG_CH_0, PG_CH_1, PG_CH_2, and so on... (See ADC-Module documentation )
			
		#endif

		////////////////////////////////////////////////////////////////////////////////
		//
		//		S E N S O R   C O N F I G   |   N T C
		//
		////////////////////////////////////////////////////////////////////////////////		

		#if ( PGIM_SENSOR_NTC == PG_ENABLE )
		
			//		T E M P E R A T U R E  -  S C A L E							(Common for all ntc)
			//#define	PGIM_SENSOR_NTC_SCALE			PG_DEGREES_CELSIUS		//!<  Must be: PG_DEGREES_CELSIUS || PG_DEGREES_FAHRENHEIT
			
			//		N T C  -  P A R A M E T E R S								(Common value for all ntc)
			#define	PGIM_SENSOR_NTC_RES_REF				10000.0					//!< The reference resistance for the reference temperature [Ohm]
			#define	PGIM_SENSOR_NTC_TEMP_REF			25.0					//!< The reference temperature for the reference resistance
			#define	PGIM_SENSOR_NTC_BETA 				3988					//!< Ntc BETA constant
			#define PGIM_SENSOR_NTC_COEF_A				1.028444E-3				//!< Ntc "A" coefficient
			#define PGIM_SENSOR_NTC_COEF_B				2.392435E-4				//!< Ntc "B" coefficient
			#define PGIM_SENSOR_NTC_COEF_C				1.562216E-7				//!< Ntc "C" coefficient

			//		C A L C U L A T I O N  -  M E T H O D						(Common for all ntc)
			#define	PGIM_SENSOR_NTC_CALCULATION_METHOD	PG_SENSOR_METHOD_BETA	//!< Must be: PG_SENSOR_METHOD_BETA || PG_SENSOR_METHOD_COEF

			//		C I R C U I T  -  C O M P O N E N T S						(Common value for all ntc)
			#define PGIM_SENSOR_NTC_HIGH_RESISTOR		10002.0					//!< High side resitor exact value [Ohm]
			
			//		A C Q U I S I T I O N  -  P A R A M E T E R S				(Common value for all ntc)
			#define	PGIM_SENSOR_NTC_AD_AVERAGE			10						//!< Averages number of measurement
			#define	PGIM_SENSOR_NTC_AD_ROW_GUARD_MIN	5						//!< Guard limit on the minimum acquired row value (shorted sensor detection)
			#define	PGIM_SENSOR_NTC_AD_ROW_GUARD_MAX	50						//!< Guard limit on the maximum acquired row value (unplugged sensor detection)
			
		#endif
	#endif
#endif /* _PGIM_SENSOR_SETUP_PUBLIC_H_ */

/*			//		C H A N N E L S  -  S E L E C T I O N
			#define	PGIM_SENSOR_NTC_S1					PG_CH_1					//!< Must be: PG_CH_0, PG_CH_1, PG_CH_2, and so on... , or PG_MISSING (See ADC-Module documentation )
			#define	PGIM_SENSOR_NTC_S2					PG_MISSING				//!< Must be: PG_CH_0, PG_CH_1, PG_CH_2, and so on... , or PG_MISSING (See ADC-Module documentation )
			#define	PGIM_SENSOR_NTC_S3					PG_MISSING				//!< Must be: PG_CH_0, PG_CH_1, PG_CH_2, and so on... , or PG_MISSING (See ADC-Module documentation )
			#define	PGIM_SENSOR_NTC_S4					PG_MISSING				//!< Must be: PG_CH_0, PG_CH_1, PG_CH_2, and so on... , or PG_MISSING (See ADC-Module documentation )
			#define	PGIM_SENSOR_NTC_S5					PG_MISSING				//!< Must be: PG_CH_0, PG_CH_1, PG_CH_2, and so on... , or PG_MISSING (See ADC-Module documentation )
			#define	PGIM_SENSOR_NTC_S6					PG_MISSING				//!< Must be: PG_CH_0, PG_CH_1, PG_CH_2, and so on... , or PG_MISSING (See ADC-Module documentation )
			#define	PGIM_SENSOR_NTC_S7					PG_MISSING				//!< Must be: PG_CH_0, PG_CH_1, PG_CH_2, and so on... , or PG_MISSING (See ADC-Module documentation )
			#define	PGIM_SENSOR_NTC_S8					PG_MISSING				//!< Must be: PG_CH_0, PG_CH_1, PG_CH_2, and so on... , or PG_MISSING (See ADC-Module documentation )
*/			

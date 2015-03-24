//
// pgim_doxygen.h
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

/*!		
	\file			pgim_doxygen.h
	\version		0.5-0
	\date			2002 - 2014
	\brief			
	\details		
	\author			Danilo Zannoni (AsYntote)
	\author			Corrado Tumiati (SkyMatrix)
	\copyright		PicGIM is under the terms of the GNU General Public License v3<BR>
						[ \ref LicenseGPLV3 ]
	\note			This file does not contain any line of code. \n It contains only formatted for Doxygen documentation.
	\attention		This is not a file defined as public and therefore would not be edited. \n We suggest that you edit this file only if necessary and only if you know what you are doing. \n
*/

//----------------------------------------------------------------------------
//	This file only serve for the automated documentation from doxygen 
//----------------------------------------------------------------------------

/*!	\mainpage

			\htmlonly
				<BR><BR>
				<table width="100%" border="0" >
					<tr align="center">
						<td><IMG src="WeDOC_documentation.png" align="center" border="0" ></td>
					</tr>
				<table width="100%" border="0" >
					<tr align="center">
						<td width="30%" ><IMG src="18f44tpin_small_ds.png" align="center" border="0" ></td>
						<td width="40%" ><IMG src="gkript-howto.png" align="center" border="0" width="150" height="63"></td>
						<td width="30%" ><IMG src="18f28pin_small_ds.png" align="center" border="0" ></td>
					</tr>
				</table>
				<br>
				<h3 style="font-size: 200%;" align="center">PicGIM - Generic Information Manager</h2>
				<h3 align="center">for Microchip<small>&#8482;</small> PIC18<small>&reg;</small> microcontrollers</h3>
				<br>
				<h3 style="font-size: 200%;" align="center">PicGIM is a part of <a href="http://www.gkript.org/index.php/news/12-wepic" target="_blank"><IMG src="WePIC_documentation_small.png"  border="0" width="70" height="28"></a> project</h2>
				<br>
			\endhtmlonly

			\section	intro_sec 	Introduction
				\htmlonly
					<h3>PicGIM Documentation Milestone 0.5</h3>
					gKript.org &copy; Copyright 2002, 2014<BR>
					Danilo Zannoni (<i>AsYntote</i>) - Corrado Tumiati (<i>SkyMatrix</i>)<BR>
					<i>PicGIM<i> is part of <i>We.PIC</i> project by <i>gKript.org</i>. <BR><BR>
				\endhtmlonly
					
			\section	main_lic		Licenses
				\htmlonly 
					<i>We.PIC</i> project is under the terms of <i> \endhtmlonly \ref WPlicTesto \htmlonly </i><BR><BR>
					&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<image src="gplv3-127x51.png" border="0" /><BR><BR>
					Reffer to \endhtmlonly \ref LicenseGPLV3 \htmlonly <br><br>
					<hr>
					<h3>GNU FDL Version 1.3</h3>
	<pre>Copyright (C)  2014  gKript.org
	Permission is granted to copy, distribute and/or modify this document
	under the terms of the GNU Free Documentation License, Version 1.3
	or any later version published by the Free Software Foundation;
	with no Invariant Sections, no Front-Cover Texts, and no Back-Cover Texts.
	A copy of the license is included in the section entitled "GNU
	Free Documentation License".
	</pre>
	Here the link  : \endhtmlonly \ref WDlicTesto \htmlonly <BR><BR>
<hr>
<BR>
				\endhtmlonly

			\section	Cosae		What is PicGIM
				<p>
					\b PicGIM is a <i>"modular library from scratch"</i> \n
					\b PicGIM is developed to work with \b PIC18F \b MCU family only and with \b C18 compiler. \n
					\b PicGIM will compile only the modules enabled. \n
					Through a set of public files, you can configure PicGIM molding it to your project having the most help in programming with a minimum amount of program memory and ram. \n
					Compiling \b PicGIM only with compulsory modules only takes about <b>250 bytes of program memory</b>. \n 
					It is compatible with <b>Microchip MPLAB 8</b> and with the new <b>Microchip MPLAB X</b>. \n
					One of the advantages of \b PicGIM is just to work with a <b>MICROCHIP STANDARD ENVIRONMENT.</b> \n
					You are completely free with <b>PicGIM</b>. \n
					You can choose to use <b>totally or partially</b> the support provided by \b <b>PicGIM</b>. \n
					Each module of \b PicGIM can be <b>replaced by personal libraries.</b> \n \n
					&nbsp;&nbsp;&nbsp;&nbsp;<i>Anyone is free to contribute to the development of PicGIM. \n
					&nbsp;&nbsp;&nbsp;&nbsp;For improvements, corrections, or to extend hardware support, please contact us at this email : info@gkript.org </i> \n \n
				</p>

				\n

			\section	Cosaserve		What is PicGIM for
				<p>
					<b> PicGIM is essential in a project </b> in order to dedicate <b> all available time </b> only to the main algorithm. \n
					So you no longer have to think about the management of timers, pwm or display, and even interrupts. \n
					Through this clear documentation you will know the <b> full potential of PicGIM. </b> \n
					What remains is to configure \b PicGIM carefully to get the best possible result. \n
				</p>

				\n

			\section	achiserve		Whom is PicGIM for
				<p>
					\b PicGIM has been designed and developed <b> for anyone. </b> \n
					A \b beginner or a \b professional can find advantage to use <b>PicGIM</b>. \n
					The beginner will certainly have an huge advantage on the <b> simplicity of the code. </b> \n
					An experienced user instead will enjoy <b> the power of PicGIM </b> saving a lot of time for the development of the project. \n
				</p>

				\n

			\section htsmain	Start in a few steps
				<p>
					In this section you can find <b> all the details in three easy steps </b> for starting a new <b>PicGIM</b> project. \n \n

					<b>First step</b> is to plan: choose the right components for the hardware is crucial for the success of a project. \n
					This documentation provides detailed resource consumption by PicGIM: \ref PG_consideraproj \n \n

					<b>Second step</b> is the configuration: Enable the required modules and configure them according to the hardware is easy with PicGIM. \n
					To know how to configure the work environment, the compiler and the library is necessary to follow this section of the documentation: \ref htgstarted

					<b>Third and last step</b> writing code: Here is in detail each function and reorganization that makes easy to write their own code. \n
					From the types of variables, by useful macros and the more complex functions. \n
					Everything is commented. He who seeks finds! especially here: \ref PG_language and \ref WPC_module
				</p>

				\n

			\section	pggithub	PicGIM is on GitHub
				\htmlonly
				<IMG src="github.png" border="0" >
				\endhtmlonly
				\n \n
				<p>
					We chose GitHub as a development platform for the version control system as well as issue tracking tool. \n
					Here is the link for the repository of PicGIM : \htmlonly <a href="http://gkript.github.io/PicGIM_05/" target="_blank" >PicGIM Repository</a> \endhtmlonly
				</p>

				\n

			\section	pgclms	PicGIM changelog 
				\endhtmlonly
				\endcode
 				<p>
					The developer should never underestimate the importance of the changelog. \n
					From it you can understand the various issues already addressed and confirm new issues. \n
					You can know exactly everything that has been developed. \n
					The complete PicGIM changelog is available here: \ref PGIMCH

					\note	The changelog of this milestone is almost all in Italian.
				</p>

				\n

 			\section	documentation  This documentation
				<p>
					This documentation is part of We.DOC project. \n \n
					\htmlonly
					<IMG src="WeDOC_documentation_small.png" border="0" >
					\endhtmlonly
					\n \n
					This documentation is made with \b Doxygen [ http://www.doxygen.org/ ]. \n
					The version of this documentation is \b 0.5 . \n
					If you find error or you think there is need more precision in some point, please write us \b here [ info@gkript.org ]. \n
					The license references for this documentation can be found here: \ref WDlic
				</p>

				\n

 			\section	Discl			Trademarks

				\htmlonly
					<em>All trademarks in this work are registered by their respective owners.</em><BR>
					<em>All trademarks in this work are property of their respective owners.</em><BR>
					<BR>
					<IMG src="microchip.png" border="0" >
				\endhtmlonly
				\n \n
			

*/

/*! 
	\example	HotWater_main.c
	\brief		This is an example of an application made using Gim. It is the code of the Gkdp utility.
*/



/*!
	\page	htgstarted		Getting Started

	 	\tableofcontents

		\n
		\image html getting-started.png
		\n

		<p>
			In this section you can find all the details in easy steps for starting to use PicGIM. \n
			PicGIM is compatible with the two standard environments MicroChip: MPLAB 8 and MPLAB X. \n \n

			\htmlonly
			&nbsp;&nbsp;&nbsp;&nbsp;<img src="ides.png" alt="ides.png">
			\endhtmlonly

			There are substantial differences between the two environments that we can not create a single common guideline. \n
			So you need to follow the guide of the environment used. \n
		</p>

		\section	getstartmp8 		PicGIM with MPLAB 8

		\htmlonly <hr> \endhtmlonly
		\endcode

			\subsection	getstartmp8howto 		How to create a project step by step

				\htmlonly <hr> \endhtmlonly
				\endcode

					<b>Download</b> the latest version of PicGim : \htmlonly <A target="_blank" href="http://gkript.org/index.php/projects/3-picgim#download">PicGIM download</A> <BR> \endhtmlonly
					<b>Select</b> the type of micro-controller used (see: \ref SWC_EzFuse ). \n
					<b>Select</b> the correct tool-compiler suite. \n \n
					\image	html	mplab8-toolsuite.png
					<b>Set</b> the include directory in the Option-Build. \n \n
 					\image	html	mplab8-includedir.png
 					\b Enable, if required in the project, the extended instruction set. In Mplab 8 PicGim automatically detects it. \n \n
					\image	html	xinst.jpg
					\b Configure PicGIM according to the requirements of the project by editing the file PUBLIC relating to the modules. \n Here is list of public files within the project MPLAB 8: \n \n
					\image	html	mplab8-project-public.png
					It is possible to add your own files to the project even though we do not recommend it. \n \n
					\image	html	mplab8-project-myfile.png

					\attention	Each file ".c" added to the project must include the following line as the first line of code: \n
						\code
							#include "picgim.h"

							...
						\endcode
					
		\section	getstartmpx 		PicGIM with MPLAB X

			\subsection	getstartmpxhowto 		How to create a project step by step

				\htmlonly <hr> \endhtmlonly
				\endcode

					\subsubsection	getstartmpxhowtopreliminary		Preliminary steps
						<b>Download</b> the latest version of PicGim : \htmlonly <A target="_blank" href="http://gkript.org/index.php/projects/3-picgim#download">PicGIM download</A> <BR> \endhtmlonly
						<b>Select</b> the type of micro-controller used (see: \ref SWC_EzFuse )and the C18 toolchain. \n \n
						\image	html	mplabx-project-properities.png
						<b>Set</b> the include directory in the Option-Build. \n \n
						\image	html	mplabx-includedir.png

						\n \n

 					\subsubsection	getstartmpxhowtoxinst	Enabling the extended instruction set
						\b Enable, if required in the project, the extended instruction set. Even if it is properly flagged check for Extended instruction code, MPLAB X will ignore it. \n
						It will be necessary, as well as to flag, the extended instruction code, manually force the definition of "__EXTENDED18__" in Compiler and Linker. \n
						Here is the guide: \n \n
						\image	html	mplabx-extended-flag.png
						\image	html	mplabx-extended-compilatore.png
						\image	html	mplabx-extended-linker.png

						\n \n

					\subsubsection	getstartmpxhowtopers	Configuration and customization
						\b Configure PicGIM according to the requirements of the project by editing the file PUBLIC relating to the modules. \n
						Here is list of public files within the project MPLAB X: \n \n
						\image	html	mplabx-project-public.png
						It is possible to add your own files to the project even though we do not recommend it. \n \n
						\image	html	mplabx-project-myfile.png

						\attention	Each file ".c" added to the project must include the following line as the first line of code: \n
							\code
								#include "picgim.h"

								...
							\endcode

						\n \n

			\section		getstartmp8fullcontrol	 	Easy PicGIM configuration

			\htmlonly <hr> \endhtmlonly
			\endcode

			\htmlonly
				Every public file can be edited to adjust easily PicGIM to your project. \n
				To easily configure PicGIM for the project it is necessary to know which files are editable by user. \n
				So here is a list of the public files : \n \n
				<table width="80%" border="0" >
					<tr align="left">
						<td width="20%"> \endhtmlonly pgim_event_setup_public.h \htmlonly </td>
						<td>With this file you can enable the global management of interruptions.<br>PicGIM automatically will include all the setting for interrupt vector.<br>
						PicGIM implements management of interrupts without priority levels for maximum compatibility between the various MCU supported.<br>
						With this file you can also enable or disable each event handled by the Microchip<small>&#8482;</small> MCU.</td>
					</tr>
					<tr align="left">
						<td width="20%"> \endhtmlonly pgim_hardware_setup_public.h \htmlonly </td>
						<td>Through this file you set the hardware pinout for your project.<BR>Each module, when enabled, will follow the settings declared in this file.</td>
					</tr>
					<tr align="left">
						<td width="20%"> \endhtmlonly pgim_module_setup_public.h \htmlonly </td>
						<td>This public file makes it easy to to include in your project all the code needed for different hardware supported by PicGIM.<br>For more details see: \endhtmlonly \ref WPC_module \htmlonly </td>
					</tr>
					<tr align="left" >
						<td width="20%"> \endhtmlonly pgim_project_setup_public.h \htmlonly </td>
						<td>With this file you can set the basic parameters of the project and the parameters of PicGIM behavior as verbosity.</td>
					</tr>
					<tr align="left" >
						<td width="20%"> \endhtmlonly pgim_pwm_setup_public.h \htmlonly </td>
						<td>With this file it is possible to specify in detail the operating mode of the PWM channels.</td>
					</tr>
					<tr align="left" >
						<td width="20%"> \endhtmlonly pgim_serial_setup_public.h \htmlonly </td>
						<td>With this file it is possible to specify in detail the operating mode of the Serial.</td>
					</tr>
					<tr align="left" >
						<td width="20%"> \endhtmlonly pgim_timer_setup_public.h \htmlonly </td>
						<td>With this file it is possible to specify in detail the operating mode of the Timers.</td>
					</tr>
					<tr align="left" valign="center" >
						<td width="20%"> \endhtmlonly pgim_18f2320_public.h \htmlonly </td>
						<td>The public file for the 18F2320 MCU</td>
					</tr>
					<tr align="left">
						<td width="20%"> \endhtmlonly pgim_18f2550_public.h \htmlonly </td>
						<td>The public file for the 18F2550 MCU</td>
					</tr>
					<tr align="left">
						<td width="20%"> \endhtmlonly pgim_18f2553_public.h \htmlonly</td>
						<td>The public file for the 18F2553 MCU</td>
					</tr>
					<tr align="left">
						<td width="20%"> \endhtmlonly pgim_18f4520_public.h \htmlonly</td>
						<td>The public file for the 18F4520 MCU</td>
					</tr>
					<tr align="left">
						<td width="20%"> \endhtmlonly pgim_18f4550_public.h \htmlonly</td>
						<td>The public file for the 18F4550 MCU</td>
					</tr>
					<tr align="left">
						<td width="20%"> \endhtmlonly pgim_18f4553_public.h \htmlonly</td>
						<td>The public file for the 18F4553 MCU</td>
					</tr>
					<tr align="left">
						<td width="20%"> \endhtmlonly pgim_18f4620_public.h \htmlonly</td>
						<td>The public file for the 18F4620 MCU</td>
					</tr>
					<tr align="left">
						<td width="20%"> \endhtmlonly pgim_18f97j60_public.h \htmlonly</td>
						<td>The public file for the 18F97j60 MCU</td>
					</tr>
				</table>
				<br>
			\endhtmlonly



 */

//		\section	Example A simple example use PicGIM
//			\code
//				#include "picgim_main.h"
//
//				void main( void ) {
//					// main initialization of PicGIM : this is compulsory !!!
//					pg_initialize();
//
//					//	Provided by PGIM_BUZZER module
//					pg_beep( PG_BEEP_LOW , PG_BEEP_SHORT );
//					pg_beep( PG_BEEP_MID , PG_BEEP_SHORT );
//					pg_beep( PG_BEEP_HIGH , PG_BEEP_LONG );
//
//					//	Provided by PGIM_DELAY module
//					pg_delay( 2 , PG_SEC );
//
//					//	Provided by PGIM_LCD_HD44780 module
//					pg_lcd_hd44780_write_p_string_rom ( PG_CONTROLLER_0 , 0 , 3, "gKript.org" );
//					pg_lcd_hd44780_write_p_char( PG_CONTROLLER_0 , 1 , 1 , "PicGIM  %s" , PG_VERSION );
//
//					PG_HALT;
//				}
//
//			\endcode




/*!
	\page	PG_language		The language of PicGIM

		\tableofcontents

		\n
		\image html Language.png
		\n \n

		\b PicGIM also introduces changes to the classic references of the \b Microchip \b environment. \n
		These changes affect different components such as the \b types \b of \b variables and the \b PIN \b names. \n
		These changes were made with the purpose to simplify the code writing. \n \n

		\note	The types of variables and pin names proposed by PicGIM do not override standards introduced by the C18 compiler.


		\section	langtype	Variable Type name reference

			\htmlonly <hr> \endhtmlonly
			\endcode
			<p>
				The variable types have been reorganized to size and signed and unsigned.
				\htmlonly
				<br>
				<table class="cl_table" width="60%" border="0" >
					<thead>
						<tr>
							<th width="10%" align="left" >Real size</th>
							<th width="25%" align="left" >PicGIM type</th>
							<th width="25%" align="left" >STD type</th>
							<th width="40%" align="left" >Description</th>
						</tr>
					</thead>
					<tbody>
						<tr>
							<td >1 byte</td><td ><b>\endhtmlonly \ref _pg_int8 \htmlonly</b></td><td>char</td><td>Signed integer 8 bit size</td>
						</tr>
						<tr>
							<td >1 byte</td><td ><b>\endhtmlonly \ref _pg_Uint8 \htmlonly</b></td><td>unsigned char</td><td>Unsigned integer 8 bit size</td>
						</tr>
						<tr>
							<td >2 byte</td><td ><b>\endhtmlonly \ref _pg_int16 \htmlonly</b></td><td>int</td><td>Signed integer 16 bit size</td>
						</tr>
						<tr>
							<td >2 byte</td><td ><b>\endhtmlonly \ref _pg_Uint16 \htmlonly</b></td><td>unsigned int</td><td>Unsigned integer 16 bit size</td>
						</tr>
						<tr>
							<td >3 byte</td><td ><b>\endhtmlonly \ref _pg_int24 \htmlonly</b></td><td>short long</td><td>Signed integer 24 bit size</td>
						</tr>
						<tr>
							<td >3 byte</td><td ><b>\endhtmlonly \ref _pg_Uint24 \htmlonly</b></td><td>unsigned short long</td><td>Unsigned integer 24 bit size</td>
						</tr>
						<tr>
							<td >4 byte</td><td ><b>\endhtmlonly \ref _pg_int32 \htmlonly</b></td><td>long</td><td>Signed integer 32 bit size</td>
						</tr>
						<tr>
							<td >4 byte</td><td ><b>\endhtmlonly \ref _pg_Uint32 \htmlonly</b></td><td>unsigned long</td><td>Unsigned integer 32 bit size</td>
						</tr>
					</tbody>
				</table>

				<table class="cl_table" width="60%" border="0" >
					<tbody>
						<tr>
							<td width="10%" align="left" >4 byte</td><td width="25%" align="left" ><b>\endhtmlonly \ref _pg_buffer \htmlonly</b></td><td width="25%" align="left" >char *</td><td width="40%" align="left" >A pointer to a signed integer 8 bit size</td>
						</tr>
						<tr>
							<td width="10%" align="left" >4 byte</td><td ><b>\endhtmlonly \ref _pg_Ubuffer \htmlonly</b></td><td>unsigned char *</td><td>A pointer to a unsigned integer 8 bit size</td>
						</tr>
					</tbody>
				</table>

				<table class="cl_table" width="60%" border="0" >
					<tbody>
						<tr>
							<td width="10%" align="left" >4 byte</td><td width="25%" align="left" ><b>\endhtmlonly \ref _pg_bool \htmlonly</b></td><td width="25%" align="left" >BOOL</td><td width="40%" align="left" >A boolean flag</td>
						</tr>
					</tbody>
				</table>
				<br>
				\endhtmlonly

				A practical code example.
				\code
					...
					void main( void ) {
						_pg_int8	small_counter , reg_a = 0;
						_pg_Uint32	big_counter;
						_pg_Uint16	values[32];
						_pg_bool	test = false;
					...
				\endcode
			</p>
			\n

		\section	langpins	Pins name reference

			\htmlonly <hr> \endhtmlonly
			\endcode
			<p>
				In addition PicGIM reorganizes the names of pins to different contexts ( TRIS, PORT, LAT ). \n
				Here is a reference table for each port. \n \n

			\attention	The amount, the arrangement and the names of available pins is related to the model of microcontroller used.

			\n

 			\subsection	langporta	Port A

				\htmlonly
 				<table class="cl_table" width="100%" border="0" >
					<thead>
						<tr>
							<th width="10%" align="center" >PIN</th>
							<th width="30%" align="center" >TRIS name</th>
							<th width="30%" align="center" >PORT name ( for READ )</th>
							<th width="30%" align="center" >LAT name ( for WRITE )</th>
						</tr>
					</thead>
				</table>
				<table class="cl_table" width="100%" border="0" >
					<thead>
						<tr>
							<th width="10%" align="center" ><b>&nbsp;</b></th>
							<th width="15%" align="center" >STD</th><th width="15%" align="center" >PicGIM</th>
							<th width="15%" align="center" >STD</th><th width="15%" align="center" >PicGIM</th>
							<th width="15%" align="center" >STD</th><th width="15%" align="center" >PicGIM</th>
						</tr>
					</thead>
					<tbody>
						<tr>
							<td width="10%" align="center" ><b>A0</b></td>
							<td width="15%" align="center" >TRISAbits.TRISA0</td><td width="15%" align="center" ><b>T_A0</b></td>
							<td width="15%" align="center" >PORTAbits.RA0</td><td width="15%" align="center" ><b>P_A0</b></td>
							<td width="15%" align="center" >LATAbits.LATA0</td><td width="15%" align="center" ><b>L_A0</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>A1</b></td>
							<td width="15%" align="center" >TRISAbits.TRISA1</td><td width="15%" align="center" ><b>T_A1</b></td>
							<td width="15%" align="center" >PORTAbits.RA1</td><td width="15%" align="center" ><b>P_A1</b></td>
							<td width="15%" align="center" >LATAbits.LATA1</td><td width="15%" align="center" ><b>L_A1</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>A2</b></td>
							<td width="15%" align="center" >TRISAbits.TRISA2</td><td width="15%" align="center" ><b>T_A2</b></td>
							<td width="15%" align="center" >PORTAbits.RA2</td><td width="15%" align="center" ><b>P_A2</b></td>
							<td width="15%" align="center" >LATAbits.LATA2</td><td width="15%" align="center" ><b>L_A2</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>A3</b></td>
							<td width="15%" align="center" >TRISAbits.TRISA3</td><td width="15%" align="center" ><b>T_A3</b></td>
							<td width="15%" align="center" >PORTAbits.RA3</td><td width="15%" align="center" ><b>P_A3</b></td>
							<td width="15%" align="center" >LATAbits.LATA3</td><td width="15%" align="center" ><b>L_A3</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>A4</b></td>
							<td width="15%" align="center" >TRISAbits.TRISA4</td><td width="15%" align="center" ><b>T_A4</b></td>
							<td width="15%" align="center" >PORTAbits.RA4</td><td width="15%" align="center" ><b>P_A4</b></td>
							<td width="15%" align="center" >LATAbits.LATA4</td><td width="15%" align="center" ><b>L_A4</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>A5</b></td>
							<td width="15%" align="center" >TRISAbits.TRISA5</td><td width="15%" align="center" ><b>T_A5</b></td>
							<td width="15%" align="center" >PORTAbits.RA5</td><td width="15%" align="center" ><b>P_A5</b></td>
							<td width="15%" align="center" >LATAbits.LATA5</td><td width="15%" align="center" ><b>L_A5</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>A6</b></td>
							<td width="15%" align="center" >TRISAbits.TRISA6</td><td width="15%" align="center" ><b>T_A6</b></td>
							<td width="15%" align="center" >PORTAbits.RA6</td><td width="15%" align="center" ><b>P_A6</b></td>
							<td width="15%" align="center" >LATAbits.LATA6</td><td width="15%" align="center" ><b>L_A6</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>A7</b></td>
							<td width="15%" align="center" >TRISAbits.TRISA7</td><td width="15%" align="center" ><b>T_A7</b></td>
							<td width="15%" align="center" >PORTAbits.RA7</td><td width="15%" align="center" ><b>P_A7</b></td>
							<td width="15%" align="center" >LATAbits.LATA7</td><td width="15%" align="center" ><b>L_A7</b></td>
						</tr>
					</tbody>
				</table>
				<BR>
				\endhtmlonly


			\subsection langportb	Port B
				\htmlonly
				<table class="cl_table" width="100%" border="0" >
					<thead>
						<tr>
							<th width="10%" align="center" >PIN</th>
							<th width="30%" align="center" >TRIS name</th>
							<th width="30%" align="center" >PORT name ( for READ )</th>
							<th width="30%" align="center" >LAT name ( for WRITE )</th>
						</tr>
					</thead>
				</table>
				<table class="cl_table" width="100%" border="0" >
					<thead>
						<tr>
							<th width="10%" align="center" ><b>&nbsp;</b></th>
							<th width="15%" align="center" >STD</th><th width="15%" align="center" >PicGIM</th>
							<th width="15%" align="center" >STD</th><th width="15%" align="center" >PicGIM</th>
							<th width="15%" align="center" >STD</th><th width="15%" align="center" >PicGIM</th>
						</tr>
					</thead>
					<tbody>
						<tr>
							<td width="10%" align="center" ><b>B0</b></td>
							<td width="15%" align="center" >TRISBbits.TRISB0</td><td width="15%" align="center" ><b>T_B0</b></td>
							<td width="15%" align="center" >PORTBbits.RB0</td><td width="15%" align="center" ><b>P_B0</b></td>
							<td width="15%" align="center" >LATBbits.LATB0</td><td width="15%" align="center" ><b>L_B0</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>B1</b></td>
							<td width="15%" align="center" >TRISBbits.TRISB1</td><td width="15%" align="center" ><b>T_B1</b></td>
							<td width="15%" align="center" >PORTBbits.RB1</td><td width="15%" align="center" ><b>P_B1</b></td>
							<td width="15%" align="center" >LATBbits.LATB1</td><td width="15%" align="center" ><b>L_B1</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>B2</b></td>
							<td width="15%" align="center" >TRISBbits.TRISB2</td><td width="15%" align="center" ><b>T_B2</b></td>
							<td width="15%" align="center" >PORTBbits.RB2</td><td width="15%" align="center" ><b>P_B2</b></td>
							<td width="15%" align="center" >LATBbits.LATB2</td><td width="15%" align="center" ><b>L_B2</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>B3</b></td>
							<td width="15%" align="center" >TRISBbits.TRISB3</td><td width="15%" align="center" ><b>T_B3</b></td>
							<td width="15%" align="center" >PORTBbits.RB3</td><td width="15%" align="center" ><b>P_B3</b></td>
							<td width="15%" align="center" >LATBbits.LATB3</td><td width="15%" align="center" ><b>L_B3</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>B4</b></td>
							<td width="15%" align="center" >TRISBbits.TRISB4</td><td width="15%" align="center" ><b>T_B4</b></td>
							<td width="15%" align="center" >PORTBbits.RB4</td><td width="15%" align="center" ><b>P_B4</b></td>
							<td width="15%" align="center" >LATBbits.LATB4</td><td width="15%" align="center" ><b>L_B4</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>B5</b></td>
							<td width="15%" align="center" >TRISBbits.TRISB5</td><td width="15%" align="center" ><b>T_B5</b></td>
							<td width="15%" align="center" >PORTBbits.RB5</td><td width="15%" align="center" ><b>P_B5</b></td>
							<td width="15%" align="center" >LATBbits.LATB5</td><td width="15%" align="center" ><b>L_B5</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>B6</b></td>
							<td width="15%" align="center" >TRISBbits.TRISB6</td><td width="15%" align="center" ><b>T_B6</b></td>
							<td width="15%" align="center" >PORTBbits.RB6</td><td width="15%" align="center" ><b>P_B6</b></td>
							<td width="15%" align="center" >LATBbits.LATB6</td><td width="15%" align="center" ><b>L_B6</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>B7</b></td>
							<td width="15%" align="center" >TRISBbits.TRISB7</td><td width="15%" align="center" ><b>T_B7</b></td>
							<td width="15%" align="center" >PORTBbits.RB7</td><td width="15%" align="center" ><b>P_B7</b></td>
							<td width="15%" align="center" >LATBbits.LATB7</td><td width="15%" align="center" ><b>L_B7</b></td>
						</tr>
					</tbody>
				</table>
				\endhtmlonly

 			\subsection langportc	Port C
				\htmlonly
				<table class="cl_table" width="100%" border="0" >
					<thead>
						<tr>
							<th width="10%" align="center" >PIN</th>
							<th width="30%" align="center" >TRIS name</th>
							<th width="30%" align="center" >PORT name ( for READ )</th>
							<th width="30%" align="center" >LAT name ( for WRITE )</th>
						</tr>
					</thead>
				</table>
				<table class="cl_table" width="100%" border="0" >
					<thead>
						<tr>
							<th width="10%" align="center" ><b>&nbsp;</b></th>
							<th width="15%" align="center" >STD</th><th width="15%" align="center" >PicGIM</th>
							<th width="15%" align="center" >STD</th><th width="15%" align="center" >PicGIM</th>
							<th width="15%" align="center" >STD</th><th width="15%" align="center" >PicGIM</th>
						</tr>
					</thead>
					<tbody>
						<tr>
							<td width="10%" align="center" ><b>C0</b></td>
							<td width="15%" align="center" >TRISCbits.TRISC0</td><td width="15%" align="center" ><b>T_C0</b></td>
							<td width="15%" align="center" >PORTCbits.RC0</td><td width="15%" align="center" ><b>P_C0</b></td>
							<td width="15%" align="center" >LATCbits.LATC0</td><td width="15%" align="center" ><b>L_C0</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>C1</b></td>
							<td width="15%" align="center" >TRISCbits.TRISC1</td><td width="15%" align="center" ><b>T_C1</b></td>
							<td width="15%" align="center" >PORTCbits.RC1</td><td width="15%" align="center" ><b>P_C1</b></td>
							<td width="15%" align="center" >LATCbits.LATC1</td><td width="15%" align="center" ><b>L_C1</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>C2</b></td>
							<td width="15%" align="center" >TRISCbits.TRISC2</td><td width="15%" align="center" ><b>T_C2</b></td>
							<td width="15%" align="center" >PORTCbits.RC2</td><td width="15%" align="center" ><b>P_C2</b></td>
							<td width="15%" align="center" >LATCbits.LATC2</td><td width="15%" align="center" ><b>L_C2</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>C3</b></td>
							<td width="15%" align="center" >TRISCbits.TRISC3</td><td width="15%" align="center" ><b>T_C3</b></td>
							<td width="15%" align="center" >PORTCbits.RC3</td><td width="15%" align="center" ><b>P_C3</b></td>
							<td width="15%" align="center" >LATCbits.LATC3</td><td width="15%" align="center" ><b>L_C3</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>C4</b></td>
							<td width="15%" align="center" >TRISCbits.TRISC4</td><td width="15%" align="center" ><b>T_C4</b></td>
							<td width="15%" align="center" >PORTCbits.RC4</td><td width="15%" align="center" ><b>P_C4</b></td>
							<td width="15%" align="center" >LATCbits.LATC4</td><td width="15%" align="center" ><b>L_C4</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>C5</b></td>
							<td width="15%" align="center" >TRISCbits.TRISC5</td><td width="15%" align="center" ><b>T_C5</b></td>
							<td width="15%" align="center" >PORTCbits.RC5</td><td width="15%" align="center" ><b>P_C5</b></td>
							<td width="15%" align="center" >LATCbits.LATC5</td><td width="15%" align="center" ><b>L_C5</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>C6</b></td>
							<td width="15%" align="center" >TRISCbits.TRISC6</td><td width="15%" align="center" ><b>T_C6</b></td>
							<td width="15%" align="center" >PORTCbits.RC6</td><td width="15%" align="center" ><b>P_C6</b></td>
							<td width="15%" align="center" >LATCbits.LATC6</td><td width="15%" align="center" ><b>L_C6</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>C7</b></td>
							<td width="15%" align="center" >TRISCbits.TRISC7</td><td width="15%" align="center" ><b>T_C7</b></td>
							<td width="15%" align="center" >PORTCbits.RC7</td><td width="15%" align="center" ><b>P_C7</b></td>
							<td width="15%" align="center" >LATCbits.LATC7</td><td width="15%" align="center" ><b>L_C7</b></td>
						</tr>
					</tbody>
				</table>
				\endhtmlonly
			\subsection langportd	Port D
				\htmlonly
				<table class="cl_table" width="100%" border="0" >
					<thead>
						<tr>
							<th width="10%" align="center" >PIN</th>
							<th width="30%" align="center" >TRIS name</th>
							<th width="30%" align="center" >PORT name ( for READ )</th>
							<th width="30%" align="center" >LAT name ( for WRITE )</th>
						</tr>
					</thead>
				</table>
				<table class="cl_table" width="100%" border="0" >
					<thead>
						<tr>
							<th width="10%" align="center" ><b>&nbsp;</b></th>
							<th width="15%" align="center" >STD</th><th width="15%" align="center" >PicGIM</th>
							<th width="15%" align="center" >STD</th><th width="15%" align="center" >PicGIM</th>
							<th width="15%" align="center" >STD</th><th width="15%" align="center" >PicGIM</th>
						</tr>
					</thead>
					<tbody>
						<tr>
							<td width="10%" align="center" ><b>D0</b></td>
							<td width="15%" align="center" >TRISDbits.TRISD0</td><td width="15%" align="center" ><b>T_D0</b></td>
							<td width="15%" align="center" >PORTDbits.RD0</td><td width="15%" align="center" ><b>P_D0</b></td>
							<td width="15%" align="center" >LATDbits.LATD0</td><td width="15%" align="center" ><b>L_D0</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>D1</b></td>
							<td width="15%" align="center" >TRISDbits.TRISD1</td><td width="15%" align="center" ><b>T_D1</b></td>
							<td width="15%" align="center" >PORTDbits.RD1</td><td width="15%" align="center" ><b>P_D1</b></td>
							<td width="15%" align="center" >LATDbits.LATD1</td><td width="15%" align="center" ><b>L_D1</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>D2</b></td>
							<td width="15%" align="center" >TRISDbits.TRISD2</td><td width="15%" align="center" ><b>T_D2</b></td>
							<td width="15%" align="center" >PORTDbits.RD2</td><td width="15%" align="center" ><b>P_D2</b></td>
							<td width="15%" align="center" >LATDbits.LATD2</td><td width="15%" align="center" ><b>L_D2</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>D3</b></td>
							<td width="15%" align="center" >TRISDbits.TRISD3</td><td width="15%" align="center" ><b>T_D3</b></td>
							<td width="15%" align="center" >PORTDbits.RD3</td><td width="15%" align="center" ><b>P_D3</b></td>
							<td width="15%" align="center" >LATDbits.LATD3</td><td width="15%" align="center" ><b>L_D3</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>D4</b></td>
							<td width="15%" align="center" >TRISDbits.TRISD4</td><td width="15%" align="center" ><b>T_D4</b></td>
							<td width="15%" align="center" >PORTDbits.RD4</td><td width="15%" align="center" ><b>P_D4</b></td>
							<td width="15%" align="center" >LATDbits.LATD4</td><td width="15%" align="center" ><b>L_D4</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>D5</b></td>
							<td width="15%" align="center" >TRISDbits.TRISD5</td><td width="15%" align="center" ><b>T_D5</b></td>
							<td width="15%" align="center" >PORTDbits.RD5</td><td width="15%" align="center" ><b>P_D5</b></td>
							<td width="15%" align="center" >LATDbits.LATD5</td><td width="15%" align="center" ><b>L_D5</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>D6</b></td>
							<td width="15%" align="center" >TRISDbits.TRISD6</td><td width="15%" align="center" ><b>T_D6</b></td>
							<td width="15%" align="center" >PORTDbits.RD6</td><td width="15%" align="center" ><b>P_D6</b></td>
							<td width="15%" align="center" >LATDbits.LATD6</td><td width="15%" align="center" ><b>L_D6</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>D7</b></td>
							<td width="15%" align="center" >TRISDbits.TRISD7</td><td width="15%" align="center" ><b>T_D7</b></td>
							<td width="15%" align="center" >PORTDbits.RD7</td><td width="15%" align="center" ><b>P_D7</b></td>
							<td width="15%" align="center" >LATDbits.LATD7</td><td width="15%" align="center" ><b>L_D7</b></td>
						</tr>
					</tbody>
				</table>
				\endhtmlonly
			\subsection langporte	Port E
				\htmlonly
				<table class="cl_table" width="100%" border="0" >
					<thead>
						<tr>
							<th width="10%" align="center" >PIN</th>
							<th width="30%" align="center" >TRIS name</th>
							<th width="30%" align="center" >PORT name ( for READ )</th>
							<th width="30%" align="center" >LAT name ( for WRITE )</th>
						</tr>
					</thead>
				</table>
				<table class="cl_table" width="100%" border="0" >
					<thead>
						<tr>
							<th width="10%" align="center" ><b>&nbsp;</b></th>
							<th width="15%" align="center" >STD</th><th width="15%" align="center" >PicGIM</th>
							<th width="15%" align="center" >STD</th><th width="15%" align="center" >PicGIM</th>
							<th width="15%" align="center" >STD</th><th width="15%" align="center" >PicGIM</th>
						</tr>
					</thead>
					<tbody>
						<tr>
							<td width="10%" align="center" ><b>E0</b></td>
							<td width="15%" align="center" >TRISEbits.TRISE0</td><td width="15%" align="center" ><b>T_E0</b></td>
							<td width="15%" align="center" >PORTEbits.RE0</td><td width="15%" align="center" ><b>P_E0</b></td>
							<td width="15%" align="center" >LATEbits.LATE0</td><td width="15%" align="center" ><b>L_E0</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>E1</b></td>
							<td width="15%" align="center" >TRISEbits.TRISE1</td><td width="15%" align="center" ><b>T_E1</b></td>
							<td width="15%" align="center" >PORTEbits.RE1</td><td width="15%" align="center" ><b>P_E1</b></td>
							<td width="15%" align="center" >LATEbits.LATE1</td><td width="15%" align="center" ><b>L_E1</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>E2</b></td>
							<td width="15%" align="center" >TRISEbits.TRISE2</td><td width="15%" align="center" ><b>T_E2</b></td>
							<td width="15%" align="center" >PORTEbits.RE2</td><td width="15%" align="center" ><b>P_E2</b></td>
							<td width="15%" align="center" >LATEbits.LATE2</td><td width="15%" align="center" ><b>L_E2</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>E3</b></td>
							<td width="15%" align="center" >TRISEbits.TRISE3</td><td width="15%" align="center" ><b>T_E3</b></td>
							<td width="15%" align="center" >PORTEbits.RE3</td><td width="15%" align="center" ><b>P_E3</b></td>
							<td width="15%" align="center" >LATEbits.LATE3</td><td width="15%" align="center" ><b>L_E3</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>E4</b></td>
							<td width="15%" align="center" >TRISEbits.TRISE4</td><td width="15%" align="center" ><b>T_E4</b></td>
							<td width="15%" align="center" >PORTEbits.RE4</td><td width="15%" align="center" ><b>P_E4</b></td>
							<td width="15%" align="center" >LATEbits.LATE4</td><td width="15%" align="center" ><b>L_E4</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>E5</b></td>
							<td width="15%" align="center" >TRISEbits.TRISE5</td><td width="15%" align="center" ><b>T_E5</b></td>
							<td width="15%" align="center" >PORTEbits.RE5</td><td width="15%" align="center" ><b>P_E5</b></td>
							<td width="15%" align="center" >LATEbits.LATE5</td><td width="15%" align="center" ><b>L_E5</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>E6</b></td>
							<td width="15%" align="center" >TRISEbits.TRISE6</td><td width="15%" align="center" ><b>T_E6</b></td>
							<td width="15%" align="center" >PORTEbits.RE6</td><td width="15%" align="center" ><b>P_E6</b></td>
							<td width="15%" align="center" >LATEbits.LATE6</td><td width="15%" align="center" ><b>L_E6</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>E7</b></td>
							<td width="15%" align="center" >TRISEbits.TRISE7</td><td width="15%" align="center" ><b>T_E7</b></td>
							<td width="15%" align="center" >PORTEbits.RE7</td><td width="15%" align="center" ><b>P_E7</b></td>
							<td width="15%" align="center" >LATEbits.LATE7</td><td width="15%" align="center" ><b>L_E7</b></td>
						</tr>
					</tbody>
				</table>
				\endhtmlonly
			\subsection langportf	Port F
				\htmlonly
				<table class="cl_table" width="100%" border="0" >
					<thead>
						<tr>
							<th width="10%" align="center" >PIN</th>
							<th width="30%" align="center" >TRIS name</th>
							<th width="30%" align="center" >PORT name ( for READ )</th>
							<th width="30%" align="center" >LAT name ( for WRITE )</th>
						</tr>
					</thead>
				</table>
				<table class="cl_table" width="100%" border="0" >
					<thead>
						<tr>
							<th width="10%" align="center" ><b>&nbsp;</b></th>
							<th width="15%" align="center" >STD</th><th width="15%" align="center" >PicGIM</th>
							<th width="15%" align="center" >STD</th><th width="15%" align="center" >PicGIM</th>
							<th width="15%" align="center" >STD</th><th width="15%" align="center" >PicGIM</th>
						</tr>
					</thead>
					<tbody>
						<tr>
							<td width="10%" align="center" ><b>F0</b></td>
							<td width="15%" align="center" >TRISFbits.TRISF0</td><td width="15%" align="center" ><b>T_F0</b></td>
							<td width="15%" align="center" >PORTFbits.RF0</td><td width="15%" align="center" ><b>P_F0</b></td>
							<td width="15%" align="center" >LATFbits.LATF0</td><td width="15%" align="center" ><b>L_F0</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>F1</b></td>
							<td width="15%" align="center" >TRISFbits.TRISF1</td><td width="15%" align="center" ><b>T_F1</b></td>
							<td width="15%" align="center" >PORTFbits.RF1</td><td width="15%" align="center" ><b>P_F1</b></td>
							<td width="15%" align="center" >LATFbits.LATF1</td><td width="15%" align="center" ><b>L_F1</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>F2</b></td>
							<td width="15%" align="center" >TRISFbits.TRISF2</td><td width="15%" align="center" ><b>T_F2</b></td>
							<td width="15%" align="center" >PORTFbits.RF2</td><td width="15%" align="center" ><b>P_F2</b></td>
							<td width="15%" align="center" >LATFbits.LATF2</td><td width="15%" align="center" ><b>L_F2</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>F3</b></td>
							<td width="15%" align="center" >TRISFbits.TRISF3</td><td width="15%" align="center" ><b>T_F3</b></td>
							<td width="15%" align="center" >PORTFbits.RF3</td><td width="15%" align="center" ><b>P_F3</b></td>
							<td width="15%" align="center" >LATFbits.LATF3</td><td width="15%" align="center" ><b>L_F3</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>F4</b></td>
							<td width="15%" align="center" >TRISFbits.TRISF4</td><td width="15%" align="center" ><b>T_F4</b></td>
							<td width="15%" align="center" >PORTFbits.RF4</td><td width="15%" align="center" ><b>P_F4</b></td>
							<td width="15%" align="center" >LATFbits.LATF4</td><td width="15%" align="center" ><b>L_F4</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>F5</b></td>
							<td width="15%" align="center" >TRISFbits.TRISF5</td><td width="15%" align="center" ><b>T_F5</b></td>
							<td width="15%" align="center" >PORTFbits.RF5</td><td width="15%" align="center" ><b>P_F5</b></td>
							<td width="15%" align="center" >LATFbits.LATF5</td><td width="15%" align="center" ><b>L_F5</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>F6</b></td>
							<td width="15%" align="center" >TRISFbits.TRISF6</td><td width="15%" align="center" ><b>T_F6</b></td>
							<td width="15%" align="center" >PORTFbits.RF6</td><td width="15%" align="center" ><b>P_F6</b></td>
							<td width="15%" align="center" >LATFbits.LATF6</td><td width="15%" align="center" ><b>L_F6</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>F7</b></td>
							<td width="15%" align="center" >TRISFbits.TRISF7</td><td width="15%" align="center" ><b>T_F7</b></td>
							<td width="15%" align="center" >PORTFbits.RF7</td><td width="15%" align="center" ><b>P_F7</b></td>
							<td width="15%" align="center" >LATFbits.LATF7</td><td width="15%" align="center" ><b>L_F7</b></td>
						</tr>
					</tbody>
				</table>
				\endhtmlonly
			\subsection langportg	Port G
				\htmlonly
				<table class="cl_table" width="100%" border="0" >
					<thead>
						<tr>
							<th width="10%" align="center" >PIN</th>
							<th width="30%" align="center" >TRIS name</th>
							<th width="30%" align="center" >PORT name ( for READ )</th>
							<th width="30%" align="center" >LAT name ( for WRITE )</th>
						</tr>
					</thead>
				</table>
				<table class="cl_table" width="100%" border="0" >
					<thead>
						<tr>
							<th width="10%" align="center" ><b>&nbsp;</b></th>
							<th width="15%" align="center" >STD</th><th width="15%" align="center" >PicGIM</th>
							<th width="15%" align="center" >STD</th><th width="15%" align="center" >PicGIM</th>
							<th width="15%" align="center" >STD</th><th width="15%" align="center" >PicGIM</th>
						</tr>
					</thead>
					<tbody>
						<tr>
							<td width="10%" align="center" ><b>G0</b></td>
							<td width="15%" align="center" >TRISGbits.TRISG0</td><td width="15%" align="center" ><b>T_G0</b></td>
							<td width="15%" align="center" >PORTGbits.RG0</td><td width="15%" align="center" ><b>P_G0</b></td>
							<td width="15%" align="center" >LATGbits.LATG0</td><td width="15%" align="center" ><b>L_G0</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>G1</b></td>
							<td width="15%" align="center" >TRISGbits.TRISG1</td><td width="15%" align="center" ><b>T_G1</b></td>
							<td width="15%" align="center" >PORTGbits.RG1</td><td width="15%" align="center" ><b>P_G1</b></td>
							<td width="15%" align="center" >LATGbits.LATG1</td><td width="15%" align="center" ><b>L_G1</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>G2</b></td>
							<td width="15%" align="center" >TRISGbits.TRISG2</td><td width="15%" align="center" ><b>T_G2</b></td>
							<td width="15%" align="center" >PORTGbits.RG2</td><td width="15%" align="center" ><b>P_G2</b></td>
							<td width="15%" align="center" >LATGbits.LATG2</td><td width="15%" align="center" ><b>L_G2</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>G3</b></td>
							<td width="15%" align="center" >TRISGbits.TRISG3</td><td width="15%" align="center" ><b>T_G3</b></td>
							<td width="15%" align="center" >PORTGbits.RG3</td><td width="15%" align="center" ><b>P_G3</b></td>
							<td width="15%" align="center" >LATGbits.LATG3</td><td width="15%" align="center" ><b>L_G3</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>G4</b></td>
							<td width="15%" align="center" >TRISGbits.TRISG4</td><td width="15%" align="center" ><b>T_G4</b></td>
							<td width="15%" align="center" >PORTGbits.RG4</td><td width="15%" align="center" ><b>P_G4</b></td>
							<td width="15%" align="center" >LATGbits.LATG4</td><td width="15%" align="center" ><b>L_G4</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>G5</b></td>
							<td width="15%" align="center" >TRISGbits.TRISG5</td><td width="15%" align="center" ><b>T_G5</b></td>
							<td width="15%" align="center" >PORTGbits.RG5</td><td width="15%" align="center" ><b>P_G5</b></td>
							<td width="15%" align="center" >LATGbits.LATG5</td><td width="15%" align="center" ><b>L_G5</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>G6</b></td>
							<td width="15%" align="center" >TRISGbits.TRISG6</td><td width="15%" align="center" ><b>T_G6</b></td>
							<td width="15%" align="center" >PORTGbits.RG6</td><td width="15%" align="center" ><b>P_G6</b></td>
							<td width="15%" align="center" >LATGbits.LATG6</td><td width="15%" align="center" ><b>L_G6</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>G7</b></td>
							<td width="15%" align="center" >TRISGbits.TRISG7</td><td width="15%" align="center" ><b>T_G7</b></td>
							<td width="15%" align="center" >PORTGbits.RG7</td><td width="15%" align="center" ><b>P_G7</b></td>
							<td width="15%" align="center" >LATGbits.LATG7</td><td width="15%" align="center" ><b>L_G7</b></td>
						</tr>
					</tbody>
				</table>
				\endhtmlonly
			\subsection langporth	Port H
				\htmlonly
				<table class="cl_table" width="100%" border="0" >
					<thead>
						<tr>
							<th width="10%" align="center" >PIN</th>
							<th width="30%" align="center" >TRIS name</th>
							<th width="30%" align="center" >PORT name ( for READ )</th>
							<th width="30%" align="center" >LAT name ( for WRITE )</th>
						</tr>
					</thead>
				</table>
				<table class="cl_table" width="100%" border="0" >
					<thead>
						<tr>
							<th width="10%" align="center" ><b>&nbsp;</b></th>
							<th width="15%" align="center" >STD</th><th width="15%" align="center" >PicGIM</th>
							<th width="15%" align="center" >STD</th><th width="15%" align="center" >PicGIM</th>
							<th width="15%" align="center" >STD</th><th width="15%" align="center" >PicGIM</th>
						</tr>
					</thead>
					<tbody>
						<tr>
							<td width="10%" align="center" ><b>H0</b></td>
							<td width="15%" align="center" >TRISHbits.TRISH0</td><td width="15%" align="center" ><b>T_H0</b></td>
							<td width="15%" align="center" >PORTHbits.RH0</td><td width="15%" align="center" ><b>P_H0</b></td>
							<td width="15%" align="center" >LATHbits.LATH0</td><td width="15%" align="center" ><b>L_H0</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>H1</b></td>
							<td width="15%" align="center" >TRISHbits.TRISH1</td><td width="15%" align="center" ><b>T_H1</b></td>
							<td width="15%" align="center" >PORTHbits.RH1</td><td width="15%" align="center" ><b>P_H1</b></td>
							<td width="15%" align="center" >LATHbits.LATH1</td><td width="15%" align="center" ><b>L_H1</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>H2</b></td>
							<td width="15%" align="center" >TRISHbits.TRISH2</td><td width="15%" align="center" ><b>T_H2</b></td>
							<td width="15%" align="center" >PORTHbits.RH2</td><td width="15%" align="center" ><b>P_H2</b></td>
							<td width="15%" align="center" >LATHbits.LATH2</td><td width="15%" align="center" ><b>L_H2</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>H3</b></td>
							<td width="15%" align="center" >TRISHbits.TRISH3</td><td width="15%" align="center" ><b>T_H3</b></td>
							<td width="15%" align="center" >PORTHbits.RH3</td><td width="15%" align="center" ><b>P_H3</b></td>
							<td width="15%" align="center" >LATHbits.LATH3</td><td width="15%" align="center" ><b>L_H3</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>H4</b></td>
							<td width="15%" align="center" >TRISHbits.TRISH4</td><td width="15%" align="center" ><b>T_H4</b></td>
							<td width="15%" align="center" >PORTHbits.RH4</td><td width="15%" align="center" ><b>P_H4</b></td>
							<td width="15%" align="center" >LATHbits.LATH4</td><td width="15%" align="center" ><b>L_H4</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>H5</b></td>
							<td width="15%" align="center" >TRISHbits.TRISH5</td><td width="15%" align="center" ><b>T_H5</b></td>
							<td width="15%" align="center" >PORTHbits.RH5</td><td width="15%" align="center" ><b>P_H5</b></td>
							<td width="15%" align="center" >LATHbits.LATH5</td><td width="15%" align="center" ><b>L_H5</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>H6</b></td>
							<td width="15%" align="center" >TRISHbits.TRISH6</td><td width="15%" align="center" ><b>T_H6</b></td>
							<td width="15%" align="center" >PORTHbits.RH6</td><td width="15%" align="center" ><b>P_H6</b></td>
							<td width="15%" align="center" >LATHbits.LATH6</td><td width="15%" align="center" ><b>L_H6</b></td>
						</tr>
						<tr>
							<td width="10%" align="center" ><b>H7</b></td>
							<td width="15%" align="center" >TRISHbits.TRISH7</td><td width="15%" align="center" ><b>T_H7</b></td>
							<td width="15%" align="center" >PORTHbits.RH7</td><td width="15%" align="center" ><b>P_H7</b></td>
							<td width="15%" align="center" >LATHbits.LATH7</td><td width="15%" align="center" ><b>L_H7</b></td>
						</tr>
					</tbody>
				</table>
				\endhtmlonly
		</p>
			\htmlonly <br><br> \endhtmlonly

	\section	langpinmacro	The MACRO for handling PINS
			\htmlonly <hr> \endhtmlonly
			This is a list of macros defined for handling PINs. \n

			\htmlonly <br><br> \endhtmlonly
			\endcode

			\arg \b pg_pin_mode() : This macro is useful to set a specific bit as INPUT or OUTPUT.
			\arg \b pg_pin_set() : This macro is useful to set a specific bit to logic level ONE.
			\arg \b pg_pin_clear() : This macro is useful to set a specific bit to logic level ZERO.
			\arg \b pg_pin_write() : This macro is useful to set a specific bit to a specific value.
			\arg \b pg_pin_read() : This macro is useful to read the logical level of a specific bit.
			\arg \b pg_pin_toggle() : With this function you can reverse the logic value present. If the value is 1 after the call will be 0, and vice versa.
			\htmlonly <br><br> \endhtmlonly

		\subsection	langpinmacroexample		A code example
 		\htmlonly
			Here is a simple example of how to use the pin macro in your code. <br>
		\endhtmlonly

		\code
			...
			pg_pin_mode( T_D0 , PG_OUT );
			pg_pin_mode( T_D1 , PG_IN );
			pg_pin_mode( T_D2 , PG_IN );
			pg_pin_mode( T_D3 , PG_IN );
			pg_pin_mode( T_D4 , PG_OUT );

			pg_pin_clear( L_D0 );
			pg_pin_set( L_D0 );
			pg_pin_write( L_D0 , pg_pin_read( P_D1 ) & pg_pin_read( P_D2 ) & pg_pin_read( P_D3 ) );

			PG_LOOP( PG_FOREVER ) {
				pg_pin_toggle( L_D4 );
			}

 		\endcode

		\htmlonly <br><br> \endhtmlonly


*/




/*!
	\page 		WPC_module			Modules

		\tableofcontents

		\image html moduli.jpg

		\section Whatm		What are modules

 			\htmlonly
				<b>PicGIM</b> is a <i>"modular library from scratch"</i> and it is divided into <b>modules</b>. <br>
				Each module handles a specific hardware device or particular software routines as Delay. <br>
				<b>PicGIM</b> manages the internal peripherals of the microcontroller and also to external devices such as the LCD display. <br><br>
				The modules have been divided in two main categories:
				<ul>
						<li><b> \endhtmlonly \ref SWPAGE \htmlonly </b></li>
						<li><b> \endhtmlonly \ref HWPAGE \htmlonly </b></li>
				</ul>
				<b>SOFTWARE</b> modules are divided into the following two classes:
				<ul>
						<li><b> \endhtmlonly \ref SW_cmp \htmlonly </b></li>
						<li><b> \endhtmlonly \ref SW_gen \htmlonly </b></li>
				</ul>
				<b>HARDWARE</b> modules are divided into the following three classes:
				<ul>
						<li><b> \endhtmlonly \ref HW_int \htmlonly </b></li>
						<li><b> \endhtmlonly \ref HW_ext \htmlonly </b></li>
						<li><b> \endhtmlonly \ref HW_gkr \htmlonly </b></li>
				</ul>

			\endhtmlonly


		\section MDetail		Modules details

			\htmlonly

				The <b>COMPULSORY</b> modules can not be disabled and are as follows :
				<ul>
						<li> \endhtmlonly \ref SWC_version \htmlonly </li>
						<li> \endhtmlonly \ref SWC_EzFuse \htmlonly </li>
				</ul>

 				The <b>GENERAL</b> modules are software utilities, as delay, and are as follows:<br>
				<ul>
						<li> \endhtmlonly \ref SWG_delay \htmlonly </li>
						<li> \endhtmlonly \ref SWG_error \htmlonly </li>
				</ul>
				The <b>HARDWARE::INTERNAL</b> modules refer to the internal devices of the MCU and are as follows:<br>
				<ul>
						<li> \endhtmlonly \ref HWI_intosc \htmlonly </li>
						<li> \endhtmlonly \ref HWI_interrupt \htmlonly </li>
						<li> \endhtmlonly \ref HWI_adc \htmlonly </li>
						<li> \endhtmlonly \ref HWI_timer \htmlonly </li>
						<li> \endhtmlonly \ref HWI_serial \htmlonly </li>
						<li> \endhtmlonly \ref HWI_spi \htmlonly </li>
						<li> \endhtmlonly \ref HWI_ee \htmlonly </li>
						<li> \endhtmlonly \ref HWI_pwm \htmlonly </li>
 				</ul>
				The <b>HARDWARE::EXTERNAL</b> modules refer to generic hardware normally used, for example LCD display, and are as follows:<br>
				<ul>
						<li> \endhtmlonly \ref HWE_ext_mem \htmlonly </li>
						<li> \endhtmlonly \ref HWE_buzzer \htmlonly </li>
						<li> \endhtmlonly \ref HWE_lcd_HD44780 \htmlonly </li>
 				</ul>
				The <b>HARDWARE::GKRIPT</b> modules refer to hardware specifically created by <b>gKript.org</b>, like graphics controller and encoder management, and are as follows:<br>
				<ul>
					<li> \endhtmlonly \ref HWG_encoder \htmlonly </li>
				</ul>
			\endhtmlonly

		\section	Howm			How to use them?
			<p>
				Use the \b PicGIM modules is easy. \n
				These are the #define that enable / disable modules.
			</p>

 				\code
					//		S O F T W A R E   G E N E R A L
					#define PGIM_ERROR							PG_DISABLE
					#define PGIM_CAL_DELAY						PG_DISABLE

					//		H A R D W A R E   I N T E R N A L
					#define PGIM_EVENTS							PG_DISABLE
					#define PGIM_AD_CONVERTER					PG_DISABLE
					#define PGIM_SPI							PG_DISABLE
					#define PGIM_EE								PG_DISABLE
					#define PGIM_TIMER							PG_DISABLE
					#define PGIM_PWM							PG_DISABLE
					#define PGIM_SERIAL							PG_DISABLE

					//		H A R D W A R E   E X T E R N A L
					#define PGIM_LCD_HD44780					PG_DISABLE
					#define PGIM_BUZZER							PG_DISABLE
					#define PGIM_SENSOR							PG_DISABLE

					//		H A R D W A R E   G K R I P T
					#define PGIM_ENCODER						PG_DISABLE
 
				\endcode
				\endhtmlonly
				\n \n

		\section	hhwset	Hardware settings
			<p>
				Each module has a dedicated hardware setting to work properly. \n
				Here there are the sections that refer for the individual hardware settings. \n
			</p>
					\subpage	SWPAGE
					\n
					\subpage	HWPAGE
					\n
			<p>
				The changes to adapt PicGIM to your hardware are to be done in this file: \n \n
				&nbsp;&nbsp;&nbsp;  pgim_module_setup.h \n
				&nbsp;&nbsp;&nbsp;  pgim_hardware_setup.h \n
				\n \n \n \n
			</p>

	\page	SWPAGE		SOFTWARE Modules

			-	\subpage	SW_cmp
			-	\subpage	SW_gen

	\page	HWPAGE		HARDWARE Modules

			-	\subpage	HW_int
			-	\subpage	HW_ext
			-	\subpage	HW_gkr


	\page	SW_cmp		SOFTWARE::COMPULSORY Modules

			-	\subpage	SWC_version
			-	\subpage	SWC_EzFuse

	\page	SW_gen		SOFTWARE::GENERAL Modules

			-	\subpage	SWG_delay
			-	\subpage	SWG_error
			-	\subpage	SWG_float

	\page	HW_int		HARDWARE::INTERNAL Modules

			-	\subpage	HWI_intosc
			-	\subpage	HWI_interrupt
			-	\subpage	HWI_adc
			-	\subpage	HWI_timer
			-	\subpage	HWI_serial
			-	\subpage	HWI_spi
			-	\subpage	HWI_ee
			-   \subpage    HWI_pwm

	\page	HW_ext		HARDWARE::EXTERNAL Modules

			-	\subpage	HWE_ext_mem
			-	\subpage	HWE_buzzer
			-	\subpage	HWE_lcd_HD44780
			-	\subpage	HWE_sensor

	\page	HW_gkr		HARDWARE::GKRIPT Modules

			-	\subpage	HWG_encoder


 */





/*!
	\page	NM_nextmilestone		Current milestone

		\tableofcontents

		\image	html milestone.png

		\section	cm1		Current Milestone : 0.5

			\htmlonly
				The current Milstone for PicGIM is the 0.5. <br>
				You can find the ChangeLog here : \endhtmlonly \subpage PGIMCH \htmlonly <br>
				After this release will begin development of the next Milestone. <br>
			\endhtmlonly

		\section	nm1		Next Milestone will be 1.0

			\htmlonly
				<p>
					&nbsp;&nbsp;&nbsp;The <b>PicGIM</b> Milestone move by <b>0.5</b> at a time. <br>
					&nbsp;&nbsp;&nbsp;This Milestone just ended has been for sure the most dificult as development.<br>
					&nbsp;&nbsp;&nbsp;We studied the whole structure of the <b>PicGIM</b> library. It has been a complicated thing.<br>
					&nbsp;&nbsp;&nbsp;The peculiarity of <b>PicGIM</b> is that <b>only the enabled modules</b> are compiled.<br>
					&nbsp;&nbsp;&nbsp;In the next Milestone we'll only support the new hardware.<br>
				</p>
			\endhtmlonly

		\section	nmT1		Tickets opened for the next Milestone

			\htmlonly
				<p>
					Here lists the most important open tickets for the next milestone : <br>
					<p>
						<table class="cl_table" width="60%" border="0" >
							<thead>
								<tr>
									<th width="10%" align="center" >Ticket</th>
									<th width="90%" >Summary</th>
								</tr>
							<thead>	
							<tbody>
								<tr align="center">
									<td width="10%" align="center">#38</td>
									<td width="90%" align="left">Reduction and optimization of the use of Ram and Program.</td>
								</tr>
								<tr align="center">
									<td width="10%" align="center">#14</td>
									<td width="90%" align="left">Integrated watchdog manager.</td>
								</tr>
								<tr align="center">
									<td width="10%" align="center">#22</td>
									<td width="90%" align="left">Sermon - Programmable Serial Monitor.</td>
								</tr>
								<tr align="center">
									<td width="10%" align="center">#43</td>
									<td width="90%" align="left">AN914 - Dynamic Memory Allocation.</td>
								</tr>
								<tr align="center">
									<td width="10%" align="center">#13</td>
									<td width="90%" align="left">Reset manager.</td>
								</tr>
								<tr align="center">
									<td width="10%" align="center">#8</td>
									<td width="90%" align="left">Develop ILI9340 LCD module.</td>
								</tr>
								<tr align="center">
									<td width="10%" align="center">#48</td>
									<td width="90%" align="left">Develop 5110 LCD module.</td>
								</tr>
								<tr align="center">
									<td width="10%" align="center">#55</td>
									<td width="90%" align="left">Simple encryption algorithm.</td>
								</tr>
							<tbody>
						</table>
					</p>
				</p>
			\endhtmlonly

 */


/*!
	\page	PGIMCH		ChangeLog

	\tableofcontents

	\image	html changelog.png

 	\section	ms05	Milestone : 0.5
	
		\subsection		V049		Version: 0.4-9

			\htmlonly
			<table class="cl_table" width="60%" border="0" >
				<thead>
					<tr>
						<th width="10%" align="center" >Ticket</th>
						<th width="60%" >Summary</th>
						<th width="15%" align="center" >Owner</th>
						<th width="15%" align="center" >Type</th>
					</tr>
				</thead>
				<tbody>
					<tr>
						<td align="center" >#17</td>
						<td>Documentazione per release</td>
						<td>asyntote</td>
						<td>Task</td>
					</tr>
				</tbody>
			</table>
			\endhtmlonly

		\subsection		V048	Version: 0.4-8
		
			\htmlonly
			<table class="cl_table" width="60%" border="0" >
				<thead>
					<tr>
						<th width="10%" align="center" >Ticket</th>
						<th width="60%" >Summary</th>
						<th width="15%" align="center" >Owner</th>
						<th width="15%" align="center" >Type</th>
					</tr>
				</thead>
				<tbody>
					<tr>
						<td align="center" >#61</td>
						<td>Costanti universali</td>
						<td>&nbsp;</td>
						<td>improvement</td>
					</tr>
					<tr>
						<td align="center" >#18</td>
						<td>Test pre release</td>
						<td>&nbsp;</td>
						<td>Task</td>
					</tr>
					<tr>
						<td align="center" >#46</td>
						<td>Assegnare il parametro "Frequenza" ai Timer.</td>
						<td>skymatrix</td>
						<td>Improvement</td>
					</tr>
					<tr>
						<td align="center" >#52</td>
						<td>settaggio di default ( safe )...</td>
						<td>asyntote</td>
						<td>Improvement</td>
					</tr>
					<tr>
						<td align="center" >#54</td>
						<td>Sistemare le variabili di "ambiente" e "globali"(calcolate dalle funzioni)</td>
						<td>skymatrix</td>
						<td>Defect</td>
					</tr>
					<tr>
						<td align="center" >#58</td>
						<td>FTOA</td>
						<td>skymatrix</td>
						<td>Improvement</td>
					</tr>
					<tr>
						<td align="center" >#62</td>
						<td>Non compila con tutti i moduli abilitati</td>
						<td>asyntote</td>
						<td>Defect</td>
					</tr>
				</tbody>
			</table>
			\endhtmlonly

		\subsection		V045	Version: 0.4-5

			\htmlonly

			<table class="cl_table" width="60%" border="0" >
				<thead>
					<tr>
						<th width="10%" align="center" >Ticket</th>
						<th width="60%" >Summary</th>
						<th width="15%" align="center" >Owner</th>
						<th width="15%" align="center" >Type</th>
					</tr>
				</thead>
				<tbody>
					<tr>
						<td align="center" >#29</td>
						<td>Seriale TTL manca getione debug su HD44780</td>
						<td>skymatrix</td>
						<td>Development</td>
					</tr>
					<tr>
						<td align="center" >#50</td>
						<td>ENHANCED mode for PWM module</td>
						<td>skymatrix</td>
						<td>Improvement</td>
					</tr>
					<tr>
						<td align="center" >#51</td>
						<td>Controllo preproc non funzionante</td>
						<td>asyntote</td>
						<td>Defect</td>
					</tr>
					<tr>
						<td align="center" >#53</td>
						<td>Modulo PWM</td>
						<td>skymatrix</td>
						<td>Improvement</td>
					</tr>
				</tbody>
			</table>
			\endhtmlonly

		\subsection		V043		Version: 0.4-3

			\htmlonly
						<table class="cl_table" width="60%" border="0" >
				<thead>
					<tr>
						<th width="10%" align="center" >Ticket</th>
						<th width="60%" >Summary</th>
						<th width="15%" align="center" >Owner</th>
						<th width="15%" align="center" >Type</th>
					</tr>
				</thead>
				<tbody>
					<tr>
						<td align="center" >#49</td>
						<td>modulo Seriale rs232</td>
						<td>skymatrix</td>
						<td>Development</td>
					</tr>
					<tr>
						<td align="center" >#64</td>
						<td>Collocare meglio il file pgim_consants.h</td>
						<td>asyntote</td>
						<td>Task</td>
					</tr>
					<tr>
						<td align="center" >#66</td>
						<td>Controllo define</td>
						<td>asyntote</td>
						<td>Defect</td>
					</tr>
				</tbody>
			</table>
		\endhtmlonly

		\subsection		V042	Version: 0.4-2

			\htmlonly

			<table class="cl_table" width="60%" border="0" >
				<thead>
					<tr>
						<th width="10%" align="center" >Ticket</th>
						<th width="60%" >Summary</th>
						<th width="15%" align="center" >Owner</th>
						<th width="15%" align="center" >Type</th>
					</tr>
				</thead>
				<tbody>
					<tr>
						<td align="center" >#2</td>
						<td>Modulo Interrupt </td>
						<td>asyntote</td>
						<td>Development</td>
					</tr>
					<tr>
						<td align="center" >#41</td>
						<td>Modulo di gestione del canale PWM</td>
						<td>skymatrix</td>
						<td>Task</td>
					</tr>
					<tr>
						<td align="center" >#59</td>
						<td>Separare gli header delle MCU</td>
						<td>asyntote</td>
						<td>Improvement</td>
					</tr>
					<tr>
						<td align="center" >#67</td>
						<td>Inserire controlli di inclusione ai file pubblici</td>
						<td>asyntote</td>
						<td>Defect</td>
					</tr>
				</tbody>
			</table>
			\endhtmlonly

		\subsection		V041	Version: 0.4-1

			\htmlonly

			<table class="cl_table" width="60%" border="0" >
				<thead>
					<tr>
						<th width="10%" align="center" >Ticket</th>
						<th width="60%" >Summary</th>
						<th width="15%" align="center" >Owner</th>
						<th width="15%" align="center" >Type</th>
					</tr>
				</thead>
				<tbody>
					<tr>
						<td align="center" >#39</td>
						<td>Compensazione del tempo di interrupt nella Delay</td>
						<td>asyntote</td>
						<td>Improvement</td>
					</tr>
					<tr>
						<td align="center" >#47</td>
						<td>razionalizzare il flusso di inclusione degli header</td>
						<td>asyntote</td>
						<td>Improvement</td>
					</tr>
				</tbody>
			</table>
			\endhtmlonly

		\subsection		V040	Version: 0.4-0

			\htmlonly

			<table class="cl_table" width="60%" border="0" >
				<thead>
					<tr>
						<th width="10%" align="center" >Ticket</th>
						<th width="60%" >Summary</th>
						<th width="15%" align="center" >Owner</th>
						<th width="15%" align="center" >Type</th>
					</tr>
				</thead>
				<tbody>
					<tr>
						<td align="center" >#10</td>
						<td>Fix font SGU with right codes</td>
						<td>skymatrix</td>
						<td>Defect</td>
					</tr>
					<tr>
						<td align="center" >#35</td>
						<td>Gestione dei TIMER</td>
						<td>skymatrix</td>
						<td>Development</td>
					</tr>
					<tr>
						<td align="center" >#42</td>
						<td>Modulo ADC</td>
						<td>asyntote</td>
						<td>Task</td>
					</tr>
					<tr>
						<td align="center" >#44</td>
						<td>Grave baco sulla gestione dell'HW public...</td>
						<td>asyntote</td>
						<td>Defect</td>
					</tr>
					<tr>
						<td align="center" >#45</td>
						<td>Supporto MPlabX</td>
						<td>asyntote</td>
						<td>Task</td>
					</tr>
				</tbody>
			</table>
			\endhtmlonly

 		\subsection		V039	Version: 0.3-9

			\htmlonly
			<table class="cl_table" width="60%" border="0" >
				<thead>
					<tr>
						<th width="10%" align="center" >Ticket</th>
						<th width="60%" >Summary</th>
						<th width="15%" align="center" >Owner</th>
						<th width="15%" align="center" >Type</th>
					</tr>
				</thead>
				<tbody>
					<tr>
						<td align="center" >#25</td>
						<td>Minimal management of hw SPI</td>
						<td>asyntote</td>
						<td>Development</td>
					</tr>
					<tr>
						<td align="center" >#32</td>
						<td>Migiore gestione dei FONTS</td>
						<td>asyntote</td>
						<td>Task</td>
					</tr>
					<tr>
						<td align="center" >#33</td>
						<td>gestione della EEPROM interna/td>
						<td>asyntote</td>
						<td>Development</td>
					</tr>
					<tr>
						<td align="center" >#34</td>
						<td>Uniformare le anomalie presenti in PicGIM</td>
						<td>asyntote</td>
						<td>Task</td>
					</tr>
					<tr>
						<td align="center" >#37</td>
						<td>Slegare il modulo Timer dala dipendenza dell'interrupt</td>
						<td>asyntote</td>
						<td>Task</td>
					</tr>
					<tr>
						<td align="center" >#40</td>
						<td>chiamata unica alla Delay passando l'unit� di misura</td>
						<td>asyntote</td>
						<td>Improvement</td>
					</tr>

				</tbody>
			</table>
			\endhtmlonly

		\subsection		V038	Version: 0.3-8

			\htmlonly

			<table class="cl_table" width="60%" border="0" >
				<thead>
					<tr>
						<th width="10%" align="center" >Ticket</th>
						<th width="60%" >Summary</th>
						<th width="15%" align="center" >Owner</th>
						<th width="15%" align="center" >Type</th>
					</tr>
				</thead>
				<tbody>
					<tr>
						<td align="center" >#16</td>
						<td>Quick internal clock</td>
						<td>skymatrix</td>
						<td>Improvement</td>
					</tr>
					<tr>
						<td align="center" >#23</td>
						<td>Modalita' di output di PicGim</td>
						<td>asyntote</td>
						<td>Development</td>
					</tr>
				</tbody>
			</table>
			\endhtmlonly

		\subsection		V042	Version: 0.4-2

			\htmlonly

			<table class="cl_table" width="60%" border="0" >
				<thead>
					<tr>
						<th width="10%" align="center" >Ticket</th>
						<th width="60%" >Summary</th>
						<th width="15%" align="center" >Owner</th>
						<th width="15%" align="center" >Type</th>
					</tr>
				</thead>
				<tbody>
					<tr>
						<td align="center" >#2</td>
						<td>Modulo Interrupt </td>
						<td>asyntote</td>
						<td>Development</td>
					</tr>
					<tr>
						<td align="center" >#41</td>
						<td>Modulo di gestione del canale PWM</td>
						<td>skymatrix</td>
						<td>Task</td>
					</tr>
					<tr>
						<td align="center" >#59</td>
						<td>Separare gli header delle MCU</td>
						<td>asyntote</td>
						<td>Improvement</td>
					</tr>
					<tr>
						<td align="center" >#67</td>
						<td>Inserire controlli di inclusione ai file pubblici</td>
						<td>asyntote</td>
						<td>Defect</td>
					</tr>
				</tbody>
			</table>
			\endhtmlonly

		\subsection		V037	Version: 0.3-7

			\htmlonly

			<table class="cl_table" width="60%" border="0" >
				<thead>
					<tr>
						<th width="10%" align="center" >Ticket</th>
						<th width="60%" >Summary</th>
						<th width="15%" align="center" >Owner</th>
						<th width="15%" align="center" >Type</th>
					</tr>
				</thead>
				<tbody>
					<tr>
						<td align="center" >#7</td>
						<td>Check hardware parameters accuracy in all mcu private .h</td>
						<td>asyntote</td>
						<td>Improvement</td>
					</tr>
					<tr>
						<td align="center" >#12</td>
						<td>Define per la memoria e2prom</td>
						<td>asyntote</td>
						<td>Improvement</td>
					</tr>
					<tr>
						<td align="center" >#20</td>
						<td>Miglioramento gestione ailitazione/disabilitazione modulir</td>
						<td>asyntote</td>
						<td>Improvement</td>
					</tr>
				</tbody>
			</table>
			\endhtmlonly

		\subsection		V036	Version: 0.3-6

			\htmlonly

			<table class="cl_table" width="60%" border="0" >
				<thead>
					<tr>
						<th width="10%" align="center" >Ticket</th>
						<th width="60%" >Summary</th>
						<th width="15%" align="center" >Owner</th>
						<th width="15%" align="center" >Type</th>
					</tr>
				</thead>
				<tbody>
					<tr>
						<td align="center" >#3</td>
						<td>Improve documentation to get started</td>
						<td>skymatrix</td>
						<td>Improvement</td>
					</tr>
					<tr>
						<td align="center" >#4</td>
						<td>Header private and public</td>
						<td>asyntote</td>
						<td>Defect</td>
					</tr>
					<tr>
						<td align="center" >#11</td>
						<td>Miglioramento gestione settaggio alimentazione</td>
						<td>asyntote</td>
						<td>Improvement</td>
					</tr>
					<tr>
						<td align="center" >#19</td>
						<td>Correct "pgim_hardware_setup.h" and his public one.</td>
						<td>asyntote</td>
						<td>Defect</td>
					</tr>
				</tbody>
			</table>
			\endhtmlonly

		\subsection		V010	Version: 0.1-0

			\htmlonly

			<table class="cl_table" width="60%" border="0" >
				<thead>
					<tr>
						<th width="10%" align="center" >Ticket</th>
						<th width="60%" >Summary</th>
						<th width="15%" align="center" >Owner</th>
						<th width="15%" align="center" >Type</th>
					</tr>
				</thead>
				<tbody>
					<tr>
						<td align="center" >#1</td>
						<td>gK_ezsetup</td>
						<td>asyntote</td>
						<td>Task</td>
					</tr>
					<tr>
						<td align="center" >#6</td>
						<td>Test e-mail report</td>
						<td>asyntote</td>
						<td>Task</td>
					</tr>
					<tr>
						<td align="center" >#15</td>
						<td>Ricerca del nome definitivo per il progetto</td>
						<td>skymatrix</td>
						<td>Task</td>
					</tr>
				</tbody>
			</table>
			\endhtmlonly

*/


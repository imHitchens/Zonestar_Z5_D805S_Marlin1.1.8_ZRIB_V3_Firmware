#ifndef __CONFIG_H__
#define __CONFIG_H__

#include "modellist.h"

/*********************************************************************************************************
//Choose one printer model from the model list
//about the model list, please see the "modellist.h" file
*********************************************************************************************************/
#define	MODEL_NUMBER		D805S
/*********************************************************************************************************/
//common setting for all of model
//Some of the settings may be covered behind
/*********************************************************************************************************/
#define	STRING_CONFIG_H_AUTHOR	"(Hally@ZONESTAR)"
#define	SHOW_ZONESTAR_LOGO
#define	SPINDLE_LASER_ENABLE
#define	INDIVIDUAL_AXIS_HOMING_MENU

#define	X_STEPS_PERMM		80
#define	Y_STEPS_PERMM		80
#define	Z_STEPS_PERMM		400
#define	E_STEPS_PERMM		85

#define	MAX_ACC_X			2000
#define	MAX_ACC_Y			800
#define	MAX_ACC_Z			100

/*********************************************************************************************************/
//common setting for all of model
//Some of the settings may be covered behind
/*********************************************************************************************************/
#define	STRING_CONFIG_H_AUTHOR	"(Hally@ZONESTAR)"
#define	SHOW_ZONESTAR_LOGO
//#define	SHOW_THM_LOGO
#define	INDIVIDUAL_AXIS_HOMING_MENU
//#define	SPINDLE_LASER_ENABLE

/**
 * LCD LANGUAGE
 */
#define LCD_LANGUAGE en

/*********************************************************************************************************/
//END of common setting
/*********************************************************************************************************/
#if (MODEL_NUMBER == D805S)
//D805S 2nd version, Single extruder,  LCD2004 and knob keypad, ZRIB control board
#define CUSTOM_MACHINE_NAME 		"D805S"
#define	STRING_FIRMWARE_VERSION		"V3.2"
#define	_FIRMWARE_RELEASE_DATE_		"2018-11-10"
#define MOTHERBOARD 				BOARD_ZRIB
#define ZONESTAR_LCD2004_KNOB

#define	EXTRUDERS					1
#define	BED_SIZE 					220
#define	MAX_PRINT_HEIGHT			230
#define X_MIN_POS 					-7
#define Y_MIN_POS 					-30
#define Z_MIN_POS 					0

#define AUTO_BED_LEVELING_BILINEAR
#define	PTFE_TUBE_LENGTH	400

#endif
/*********************************************************************************************************
other settings
*********************************************************************************************************/
#if (MOTHERBOARD == BOARD_ZRIB)
#define	INDIVIDUAL_AXIS_HOMING_MENU
#define	LCD_INFO_MENU
#define	PRINTCOUNTER
#define SDCARD_SORT_ALPHA
#define ARC_SUPPORT 
#define AUTOTEMP
#endif

#endif // __CONFIG_H__

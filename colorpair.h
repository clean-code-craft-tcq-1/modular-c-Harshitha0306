/*
 *
 ***************************************************************************************************
 * Author:             Harshitha Subramani
 * Date:               23/02/2020  
 * Filename:           telecolor_test.h
 *
 ***************************************************************************************************
/*

***************************************************************************************
* Includes
***************************************************************************************
*/

#ifndef colorpair_h
#define colorpair_h
#include "colorcode.h"

/*
***************************************************************************************
* Definition
***************************************************************************************
*/

/*Define Majorcolor names and its total number*/
const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

/*Define Minorcolor names and its total number*/
const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
	
#endif /* colorpair_h */

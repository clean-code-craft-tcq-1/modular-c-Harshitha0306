/*
 ***************************************************************************************************
 * Author:             Harshitha Subramani
 * Date:               23/02/2020  
 * Filename:           main.c
 *****************************************************************************************************
/*
***************************************************************************************
* Includes
***************************************************************************************
*/

#include <stdio.h>
#include <assert.h>
#include "telecolor_convert.h"

/*This Function checks whether the translated colorpair is same as input colorpair
 * \param       pairnumber            Pair number corresponding to color pair  as input
 * \param       expectedMajor         expected Majorcolor as input                             
 * \param       expectedMinor         expected MinorColor as input                                         
 *no error is displayed if expected colorpair is same as translated colorpair                        */   
 
void testNumberToPair(int pairNumber,enum MajorColor expectedMajor,enum MinorColor expectedMinor)
{
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}

/*This Function checks whether the translated Pair number is same as input Pair number
 * \param       MajorColor                 Majorcolor as input
 * \param       MinorColor                 MinorColor as input                              
 * \param       expectedPairNumber         expected Pair number as input                                  
*no error is displayed if expected Pair number is same as translated Pair number                       */ 

void testPairToNumber(enum MajorColor major,enum MinorColor minor,int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}

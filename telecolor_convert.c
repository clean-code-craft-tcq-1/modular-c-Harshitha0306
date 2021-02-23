/*
 ***************************************************************************************************
 * Author:             Harshitha Subramani
 * Date:               23/02/2020  
 * Filename:           main.c
 *****************************************************************************************************
*
***************************************************************************************
* Includes
***************************************************************************************
*/
#include <stdio.h>
#include <assert.h>
#include "colorpair.h"

/*This Function prints the translated Colorpair names from Pairnumber
 * \param     colorpair             Pointer to Major and Minor color pair
 * \param     buffer                buffer storing color strings                     */


void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer,"%s %s",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);
}

/*This Function translates Pairnumber to pair of colors
 * \param     pairnumber            Pair number corresponding to color pair
 * \return    Colorpair             Major and Minor color pair                      */

ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor =
        (enum MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor =
        (enum MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

/*This Function translates  pair of colors to corresponding Pairnumber  
 * \param     Colorpair            Major and Minor color pair 
 * \return    pairnumber           Pair number corresponding to color pair        */
 
int GetPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}





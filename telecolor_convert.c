/*
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
void ConvertColorPairToString(const ColorPair* colorPair, char* buffer) {
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
/*This Function prints the Reference manual for 25 Colorcode pair*/
void DisplayManualReference(){
	int pin_no =1,major,minor;
	printf("REFERENCE MANUAL\n");
	printf("Color(Minor/Major)\t\t\tPin.no\n\n");
	for(major = 0; major < numberOfMajorColors; major++){
	    for(minor = 0; minor < numberOfMinorColors; minor++){
	       printf("%s/%s\t\t\t\t%d\n",MinorColorNames[minor],MajorColorNames[major],pin_no);
		   pin_no++;
		}
	}
}



/*
 *
 ***************************************************************************************************
 * Author:             Harshitha Subramani
 * Date:               23/02/2020  
 * Filename:           telecolor_test.h
 *
 ****************************************************************************************************
*
*
***************************************************************************************
* Includes
***************************************************************************************
*/

#ifndef telecolor_convert_h
#define telecolor_convert_h
#include "colorcode.h"


/*
***************************************************************************************
* Definition 
***************************************************************************************
*/

const int MAX_COLORPAIR_NAME_CHARS = 16;

/*
***************************************************************************************
* Function declarations
***************************************************************************************
*/

ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);
void ConvertColorPairToString(const ColorPair* colorPair, char* buffer);

#endif  /* telecolor_convert_h */

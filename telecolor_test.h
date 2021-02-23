/*
 *
 ***************************************************************************************************
 * Author:             Harshitha Subramani
 * Date:               23/02/2020  
 * Filename:           telecolor_test.h
 *
 ****************************************************************************************************
/*
***************************************************************************************
* Includes
***************************************************************************************
*/
#ifndef telecolor_test_h
#define telecolor_test_h
#include "colorcode.h"

/*
***************************************************************************************
* Function declarations
***************************************************************************************
*/

void testNumberToPair(int pairNumber,enum MajorColor expectedMajor,enum MinorColor expectedMinor);
void testPairToNumber(enum MajorColor major,enum MinorColor minor,int expectedPairNumber);

#endif /* telecolor_test_h */




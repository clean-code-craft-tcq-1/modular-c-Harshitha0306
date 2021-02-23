/*
 *
 ***************************************************************************************************
 * Author:             Harshitha Subramani
 * Date:               23/02/2020  
 * Filename:           main.c
 *
 *****************************************************************************************************
 *
***************************************************************************************
* Includes
***************************************************************************************
*/

#include <stdio.h>
#include "telecolor_test.h"

/*
*****************************************************************************************
 * Function:int main()
 * Description: Main function of main,c file.Program execution starts from here.  
 * The function calls the Test functions which prints color coding pair that can be used
 * as a reference manual for wiring personnel.
 *
 *****************************************************************************************
 */
 
int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    return 0;
}

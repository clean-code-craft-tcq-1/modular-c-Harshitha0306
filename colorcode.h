/*
 *
 ***************************************************************************************************
 * Author:             Harshitha Subramani
 * Date:               23/02/2020  
 * Filename:           telecolor_test.h
 *
 ****************************************************************************************************
*
***************************************************************************************
* Includes
***************************************************************************************
*/

#ifndef colorcode_h
#define colorcode_h

/*
***************************************************************************************
* Definition
***************************************************************************************
*/

 enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};       /*{0,1,2,3,4}*/
 enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};       /*{0,1,2,3,4}*/

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
}ColorPair;

#endif  /* colorcode_h */

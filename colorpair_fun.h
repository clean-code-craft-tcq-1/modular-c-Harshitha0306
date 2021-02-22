#ifndef colorpair_fun_h
#define colorpair_fun_h
#include "colorcode.h"

const int MAX_COLORPAIR_NAME_CHARS = 16;

ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);
void ColorPairToString(const ColorPair* colorPair, char* buffer);


#endif

#ifndef testpair_fun_h
#define testpair_fun_h
#include "colorcode.h"

void testNumberToPair(int pairNumber,enum MajorColor expectedMajor,enum MinorColor expectedMinor);
void testPairToNumber(enum MajorColor major,enum MinorColor minor,int expectedPairNumber);
#endif /* testpair_fun_h */




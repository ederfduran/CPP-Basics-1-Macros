#ifndef TESTFUNMATH_H
#define TESTFUNMATH_H

namespace cpp_class1_funtest {
	float testGetPI();
	float testGetHalfPI();
	float testGetQuarterPI();
	float testGetDoublePI();
	float testGetAbsoluteValue(float);
	float testGetPow2(float);
	float testGetSqrt(float);
	unsigned long int testGetFactorial(unsigned int);

	// EXERCISE 4
	float testGetMin(float, float);
	float testGetMax(float, float);
	int testGetModule(int, int);
	bool testIsOdd(int);
	bool testIsEven(int);
	bool testIsBetween(float, float, float);
	float testGetNearest(float, float, float);
	float testClamp(float, float, float);
}

#endif 


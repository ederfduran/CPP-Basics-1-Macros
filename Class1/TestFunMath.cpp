#include <cassert>
#include "FunMath.h"
#include "TestFunMath.h"


float cpp_class1_funtest::testGetPI() {
	const float piValue = cpp_class1::getPI();
	assert(piValue); 
	return piValue;
}
float cpp_class1_funtest::testGetHalfPI() {
	const float halfPi = cpp_class1::getHalfPI();
	assert(halfPi);
	return halfPi;
}
float cpp_class1_funtest::testGetQuarterPI() {
	const float quarterPi = cpp_class1::getQuarterPI();
	assert(quarterPi);
	return quarterPi;
}
float cpp_class1_funtest::testGetDoublePI() {
	const float doublePi= cpp_class1::getDoublePI();
	assert(doublePi);
	return doublePi;
}

float cpp_class1_funtest::testGetAbsoluteValue(float value) {
	const float absValue = cpp_class1::getAbsoluteValue(value);
	assert(absValue>0);
	return absValue;
}
float cpp_class1_funtest::testGetPow2(float value) {
	return cpp_class1::getPow2(value);
}
float cpp_class1_funtest::testGetSqrt(float value) {
	assert(value>=0);
	return cpp_class1::getSqrt(value);
}
unsigned long int cpp_class1_funtest::testGetFactorial(unsigned int value) {
	assert(value >= 0);
	return cpp_class1::getFactorial(value);
}

//EXERCISE 4
float cpp_class1_funtest::testGetMin(float a, float b)
{
	assert(a != b);
	return cpp_class1::getMin(a,b);
}

float cpp_class1_funtest::testGetMax(float a, float b)
{
	assert(a != b);
	return cpp_class1::getMax(a ,b);
}

int cpp_class1_funtest::testGetModule(int a, int b)
{
	return cpp_class1::getModule(a,b);
}

bool cpp_class1_funtest::testIsOdd(int a)
{
	return cpp_class1::isOdd(a);
}

bool cpp_class1_funtest::testIsEven(int a)
{
	return cpp_class1::isEven(a);
}

bool cpp_class1_funtest::testIsBetween(float a, float b, float c)
{
	return cpp_class1::isBetween(a,b,c);
}

float cpp_class1_funtest::testGetNearest(float a, float b, float c)
{
	return cpp_class1::getNearest(a,b,c);
}

float cpp_class1_funtest::testClamp(float a, float b, float c)
{
	return cpp_class1::clamp(a,b,c);
}

//TEST MACRO


#include <cassert>
#include <iostream>
#include "FunMath.h"
#include "TestFunMath.h"

void cpp_class1_funtest::testGetPI() {
	const float piValue = cpp_class1::getPI();
	assert(std::abs(piValue - 3.14159265358979323846)< EPSILON );
}
void cpp_class1_funtest::testGetHalfPI() {
	const float halfPi = cpp_class1::getHalfPI();
	assert(std::abs(halfPi - 3.14159265358979323846/2)< EPSILON);
}
void cpp_class1_funtest::testGetQuarterPI() {
	const float quarterPi = cpp_class1::getQuarterPI();
	assert(std::abs(quarterPi - 3.14159265358979323846/4)< EPSILON);
}
void cpp_class1_funtest::testGetDoublePI() {
	const float doublePi= cpp_class1::getDoublePI();
	assert( std::abs(doublePi - (3.14159265358979323846 * 2))< EPSILON);
}

void cpp_class1_funtest::testGetAbsoluteValue() {
	const float mockData = -314.23f;
	const float absValue = cpp_class1::getAbsoluteValue(mockData);
	assert(absValue == 314.23f);
}
void cpp_class1_funtest::testGetPow2() {
	const float mockData = -3;
	const float powValue = cpp_class1::getPow2(mockData);
	assert(powValue == 9);
}
void cpp_class1_funtest::testGetSqrt() {
	const float mockData = 25;
	const float sqrtValue = cpp_class1::getSqrt(mockData);
	assert(sqrtValue == 5);

}
void cpp_class1_funtest::testGetFactorial() {
	const int mockData = 5;
	const long long int factValue = cpp_class1::getFactorial(mockData);
	assert(factValue == 120);
}

//EXERCISE 4
void cpp_class1_funtest::testGetMin()
{
	const float mockA = 123.231f, mockB = 23452.f;
	const float min = cpp_class1::getMin(mockA,mockB);
	assert(min==mockA);
}

void cpp_class1_funtest::testGetMax()
{
	const float mockA = 123.231f, mockB = 23452.f;
	const float max = cpp_class1::getMax(mockA, mockB);
	assert(max == mockB);
}

void cpp_class1_funtest::testGetModule()
{
	const int mockA = 77, mockB = 10;
	const int mod = cpp_class1::getModule(mockA, mockB);
	assert(mod==7);
}

void cpp_class1_funtest::testIsOdd()
{
	const int mockData = 111;
	const int odd = cpp_class1::isOdd(mockData);
	assert(odd);
}

void cpp_class1_funtest::testIsEven()
{
	const int mockData = 100;
	const int even = cpp_class1::isEven(mockData);
	assert(even);
}

void cpp_class1_funtest::testIsBetween()
{
	const float mockA = 10.f, mockB = 11.f,mockC=10.5f;
	const bool isIn = cpp_class1::isBetween(mockA, mockB,mockC);
	assert(isIn);
}

void cpp_class1_funtest::testGetNearest()
{
	const float mockA = 10.f, mockB = 11.f, mockC = 10.6f;
	const float isNearest = cpp_class1::getNearest(mockA, mockB, mockC);
	assert(isNearest==mockB);
}

void cpp_class1_funtest::testClamp()
{
	const float mockA = 101.f, mockB = 111.f, mockC = 103.6f;
	const float clampVar = cpp_class1::clamp(mockA, mockB, mockC);
	assert(clampVar==mockC);
}



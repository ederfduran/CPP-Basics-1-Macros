#include <cassert>
#include "FunMath.h"
#include "MacroMath.h"

float cpp_class1::getPI() {
	return cpp_class1::PI;
}
float cpp_class1::getHalfPI() {
	return cpp_class1::halfPI;
}
float cpp_class1::getQuarterPI() {
	return cpp_class1::quarterPI;
}
float cpp_class1::getDoublePI() {
	return cpp_class1::doublePI;
}

float cpp_class1::getAbsoluteValue(float value) {
	return std::abs(value);
}
float cpp_class1::getPow2(float value) {
	return std::pow(value,2);
}
float cpp_class1::getSqrt(float value) {
	assert(value>0);
	return std::sqrt(value);
}
unsigned int cpp_class1::getFactorial(unsigned int value) {
	if (value == 0) {
		return 1;
	}
	return value* cpp_class1::getFactorial(value-1);
}


//EXERCISE 4

float cpp_class1::getMin(float a, float b)
{
	assert(a!=b);
	return (a)>(b)?(b):(a);
}

float cpp_class1::getMax(float a, float b)
{
	assert(a != b);
	return (a)>(b)?(a):(b);
}

int cpp_class1::getModule(int a, int b)
{
	return a % b;
}

bool cpp_class1::isOdd(int a)
{
	return (a % 2) != 0;
}

bool cpp_class1::isEven(int a)
{
	return (a % 2) == 0;
}

bool cpp_class1::isBetween(float a, float b, float c)
{
	return ((c)>(a) && (c)<(b)) || ((c)>(b) && (c)<(a));
}

float cpp_class1::getNearest(float a, float b, float c)
{
	assert(a!=b);
	return std::abs((a)-(c))< std::abs((b)-(c)) ? a : b;
}

float cpp_class1::clamp(float a, float b, float c)
{
	return cpp_class1::isBetween(a, b, c) ? c : cpp_class1::getNearest(a, b, c);
}







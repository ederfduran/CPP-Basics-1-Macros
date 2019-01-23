#include <cassert>
#include "MacroMath.h"
#include "TestMacroMath.h"


float cpp_class1_macrotest::testAbsoluteValueMacro(float value) {
	const float absValue = ABSOLUTE_VALUE(value);
	assert(absValue>0);
	return absValue;
}

float cpp_class1_macrotest::testPowValueMacro(float value) {
	return POW_2(value);
}

float cpp_class1_macrotest::testSqrtValueMacro(float value){
	assert(value>=0);
	return SQRT(value);
}

 int  cpp_class1_macrotest::testfactValueMacro(int value){
	 assert(value >= 0);
	 const int fact = FACT(value);
	 return fact;
}


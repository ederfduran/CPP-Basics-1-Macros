#include <cassert>
#include "MacroMath.h"
#include "TestMacroMath.h"


void cpp_class1_macrotest::testAbsoluteValueMacro() {
	const float mockData = -314.23f;
	const float absValue = ABSOLUTE_VALUE(mockData);
	assert(absValue== 314.23f);
}

void cpp_class1_macrotest::testPowValueMacro() {
	const float mockData = -3.f;
	const float powValue = POW_2(mockData);
	assert(powValue == 9.f);
}

void cpp_class1_macrotest::testSqrtValueMacro(){
	const float mockData = 25.f;
	const float sqrtValue = SQRT(mockData);
	assert(sqrtValue == 5.f );
}

void cpp_class1_macrotest::testfactValueMacro(){
	const int mockData = 5;
	const long long int factValue = FACT(mockData);
	assert(factValue == 120);
}


#include <iostream>
#include "TestFunMath.h"
#include "TestMacroMath.h"

int main() {

	std::cout << "Class 1 - Exercises" << std::endl;
	std::cout << "=========== TESTING POINT 2 =========== " << std::endl;
	cpp_class1_macrotest::testAbsoluteValueMacro();
	cpp_class1_macrotest::testfactValueMacro () ;
	cpp_class1_macrotest::testPowValueMacro();
	cpp_class1_macrotest::testSqrtValueMacro();
	
	std::cout << "=========== TESTING POINT 3 =========== "<< std::endl;

	cpp_class1_funtest::testGetPI();
	cpp_class1_funtest::testGetHalfPI();
	cpp_class1_funtest::testGetQuarterPI();
	cpp_class1_funtest::testGetDoublePI();
	cpp_class1_funtest::testGetAbsoluteValue();
	cpp_class1_funtest::testGetPow2();
	cpp_class1_funtest::testGetSqrt();
	cpp_class1_funtest::testGetFactorial();
	
	std::cout << "=========== TESTING POINT 4 =========== " << std::endl;

	cpp_class1_funtest::testGetMin();
	cpp_class1_funtest::testGetMax();
	cpp_class1_funtest::testGetModule();
	cpp_class1_funtest::testIsOdd();
	cpp_class1_funtest::testIsEven();
	cpp_class1_funtest::testIsBetween();
	cpp_class1_funtest::testGetNearest();
	cpp_class1_funtest::testClamp();
	
	
	std::cin.get();
	return 0;
}
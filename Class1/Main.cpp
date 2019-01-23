#include <iostream>
#include "TestFunMath.h"
#include "TestMacroMath.h"

int main() {

	std::cout << "Class 1 - Exercises" << std::endl;
	std::cout << "=========== TESTING POINT 2 =========== " << std::endl;
	std::cout << "Absolute value of -15 : "<<cpp_class1_macrotest::testAbsoluteValueMacro(-15) << std::endl;
	std::cout << "factorial of 5 : " << cpp_class1_macrotest::testfactValueMacro (5) << std::endl;
	std::cout << "6.5 pow 2 : " << cpp_class1_macrotest::testPowValueMacro(6.5) << std::endl;
	std::cout << "sqr of 15.6 : " << cpp_class1_macrotest::testSqrtValueMacro (15.6f) << std::endl;
	
	std::cout << "=========== TESTING POINT 3 =========== "<< std::endl;

	std::cout << "test get pi : " << cpp_class1_funtest::testGetPI()<< std::endl;
	std::cout << "test get half pi : " << cpp_class1_funtest::testGetHalfPI() << std::endl;
	std::cout << "test get quarter pi : " << cpp_class1_funtest::testGetQuarterPI() << std::endl;
	std::cout << "test get double pi: " << cpp_class1_funtest::testGetDoublePI() << std::endl;
	std::cout << "absolute value of -15.6f : " << cpp_class1_funtest::testGetAbsoluteValue(-15.6f) << std::endl;
	std::cout << "6.5 pow 2 : " << cpp_class1_funtest::testGetPow2(6.5f) << std::endl;
	std::cout << "sqr of 15.6: " << cpp_class1_funtest::testGetSqrt(15.6f) << std::endl;
	std::cout << "factorial of 5: " << cpp_class1_funtest::testGetFactorial(5) << std::endl;
	
	std::cout << "=========== TESTING POINT 4 =========== " << std::endl;

	std::cout << "get min of 12 and -5 : " << cpp_class1_funtest::testGetMin(12,-5) << std::endl;
	std::cout << "get max of 3 and 200 : " << cpp_class1_funtest::testGetMax(3,200) << std::endl;
	std::cout << "get module of 20 and 6 : " << cpp_class1_funtest::testGetModule(20,6) << std::endl;
	std::cout << "59 is odd? : " << cpp_class1_funtest::testIsOdd(59) << std::endl;
	std::cout << "11 is even ? : " << cpp_class1_funtest::testIsEven(11) << std::endl;
	std::cout << "75 is between -9 and 100 ? : " << cpp_class1_funtest::testIsBetween(-9,100,75) << std::endl;
	std::cout << "get nearest to 175 .. -9 or 100 : " << cpp_class1_funtest::testGetNearest(-9, 100, 175) << std::endl;
	std::cout << "5 is between? -9 and 100 : " << cpp_class1_funtest::testClamp(-9, 100, 5) << std::endl;
	
	
	std::cin.get();
	return 0;
}
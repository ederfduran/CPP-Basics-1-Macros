#ifndef MACROMATH_H
#define MACROMATH_H

#include <cmath>
#define ABSOLUTE_VALUE(value)(std::abs(value))
#define POW_2(value)((value)*(value))
#define SQRT(value)(std::sqrt(value))
#define FACT(n)  ((n) < 0 ? 1 : (n) > 12 ? INT_MAX : factorials[n])

static int const factorials[13] = { 1, 1, 2, 6, 24, 120, 720, 5040, 40320,
362880, 3628800, 39916800, 479001600 };


namespace cpp_class1 {
	const float PI = 3.1416f;
	const float halfPI = PI / 2;
	const float quarterPI = PI / 4;
	const float doublePI = 2 * PI;
}

#endif 




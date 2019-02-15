#ifndef FUNMATH_H
#define FUNMATH_H

//#include "MacroMath.h"
#define ISBETWEEN(a,b,c)((c)>(a)&&(c)<(b))||((c)>(b)&&(c)<(a))
#define ISEVEN(a)(a%2)==0
#define ISODD(a)(a%2)!=0
#define MAX(a,b)(a)>(b)?(a):(b)
#define MIN(a,b)(a)>(b)?(b):(a)
#define MODULE(a,b)(a)%(b)
#define NEARESTNUMBER(a,b,c) ABSOLUTE_VALUE((a)-(c))< ABSOLUTE_VALUE((b)-(c))? a:b;
#define CLAMP(a,b,c)ISBETWEEN(a,b,c)?c:NEARESTNUMBER(a,b,c) 


namespace cpp_class1 {
	
	float getPI();
	float getHalfPI();
	float getQuarterPI();
	float getDoublePI();
	float getAbsoluteValue(float);
	float getPow2(float);
	float getSqrt(float);
	unsigned int getFactorial(unsigned int);
	//EXERCISE 4
	float getMin(float,float);
	float getMax(float, float);
	int getModule(int, int);
	bool isOdd(int);
	bool isEven(int);
	bool isBetween(float, float,float);
	float getNearest(float,float,float);
	float clamp(float,float,float);
	
}


#endif 

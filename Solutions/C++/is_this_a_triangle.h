#ifndef IS_THIS_A_TRIANGLE_KATA
#define IS_THIS_A_TRIANGLE_KATA

//https://www.codewars.com/kata/56606694ec01347ce800001b

namespace Triangle
{
	bool isTriangle(int a, int b, int c)
	{
		return (a - b < c) && (b - c < a) && (c - a < b);
	}
};

#endif

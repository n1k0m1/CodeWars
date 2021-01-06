#ifndef EQUAL_SIDES_OF_AN_ARRAY_KATA
#define EQUAL_SIDES_OF_AN_ARRAY_KATA

//https://www.codewars.com/kata/5679aa472b8f57fb8c000047

#include <vector>

int getSum(int startIndex, int endIndex, const std::vector<int>& numbers)
{
	int sum = 0;

	for (; startIndex <= endIndex; ++startIndex)
	{
		sum += numbers[startIndex];
	}

	return sum;
}

int find_even_index(const std::vector <int> numbers)
{
	int index = 0;

	while (index < numbers.size())
	{
		if (getSum(0, index, numbers) == getSum(index, numbers.size() - 1, numbers))
		{
			break;
		}
		else
		{
			++index;
		}
	}

	if (index < numbers.size())
	{
		return index;
	}

	return -1;
}

#endif // !EQUAL_SIDES_OF_AN_ARRAY_KATA

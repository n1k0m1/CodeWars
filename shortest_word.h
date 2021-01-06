#ifndef SHORTEST_WORD_KATA
#define SHORTEST_WORD_KATA

//https://www.codewars.com/kata/57cebe1dc6fdc20c57000ac9

#include <string>

int find_short1(std::string str)
{
	size_t start = 0;
	size_t end = 0;
	int length = 0;
	int minLength = 0;

	do
	{
		end = str.find(' ', start);

		length = end - start;
		if (length > 0)
		{
			if ((length < minLength) || (minLength == 0))
			{
				minLength = length;
			}
		}

		start = end + 1;

	} while (end < str.size());

	return minLength;
}

#endif // !SHORTEST_WORD_KATA

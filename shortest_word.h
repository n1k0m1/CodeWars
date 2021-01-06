#ifndef SHORTEST_WORD_KATA
#define SHORTEST_WORD_KATA

//https://www.codewars.com/kata/57cebe1dc6fdc20c57000ac9

#include <string>

int find_short(std::string str)
{
	size_t start = 0;
	size_t end = 0;
	size_t length = str.size();

	do
	{
		end = str.find(' ', start);

		if (end - start > 0)
		{
			if (length > end - start)
			{
				length = end - start;
			}
		}

		start = end + 1;

	} while (end < str.size());

	return length;
}

#endif // !SHORTEST_WORD_KATA

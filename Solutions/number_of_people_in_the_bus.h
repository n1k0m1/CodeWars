#ifndef NUMBER_OF_PEOPLE_IN_THE_BUS_KATA
#define NUMBER_OF_PEOPLE_IN_THE_BUS_KATA

//https://www.codewars.com/kata/5648b12ce68d9daa6b000099

#include <utility>
#include <vector>

unsigned int number(const std::vector<std::pair<int, int>>& busStops)
{
	int people_Count = 0;

	for (std::pair<int, int> pair : busStops)
		people_Count += pair.first - pair.second;

	return people_Count;
}

#endif // !NUMBER_OF_PEOPLE_IN_THE_BUS_KATA

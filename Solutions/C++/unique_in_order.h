#ifndef UNIQUE_IN_ORDER_KATA
#define UNIQUE_IN_ORDER_KATA

//https://www.codewars.com/kata/54e6533c92449cc251001667

#include <string>
#include <vector>

template <typename T>
std::vector<T> uniqueInOrder(const std::vector<T>& iterable)
{
	std::vector<T> uOrder;

	if (!iterable.empty())
	{
		uOrder.push_back(iterable.front());

		for (size_t index = 1; index < iterable.size(); ++index)
		{
			if (uOrder.back() != iterable.at(index))
			{
				uOrder.push_back(iterable.at(index));
			}
		}
	}

	return uOrder;
}
std::vector<char> uniqueInOrder(const std::string& iterable)
{
	std::vector<char> uOrder;

	if (!iterable.empty())
	{
		uOrder.push_back(iterable.front());

		for (size_t index = 1; index < iterable.size(); ++index)
		{
			if (uOrder.back() != iterable.at(index))
			{
				uOrder.push_back(iterable.at(index));
			}
		}
	}

	return uOrder;
}

#endif

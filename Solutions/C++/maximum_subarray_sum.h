#ifndef MAXIMUM_SUBARRAY_SUM_KATA
#define MAXIMUM_SUBARRAY_SUM_KATA

//https://www.codewars.com/kata/54521e9ec8e60bc4de000d6c

#include <vector>
#include <algorithm>

int maxSequence(const std::vector<int>& arr)
{
	int sum = 0;
	
	if (std::any_of(arr.cbegin(), arr.cend(), [](int x) {return x >= 0;}))
	{
		int tempSum = 0;

		for (size_t carriage = arr.size(); carriage > 0; --carriage)
		{
			for (size_t carrStart = 0; carrStart + carriage <= arr.size(); ++carrStart)
			{
				for (size_t index = carrStart; index < carrStart + carriage; ++index)
				{
					tempSum += arr[index];
				}

				if (tempSum > sum)
				{
					sum = tempSum;
				}
				tempSum = 0;
			}
		}
	}
	
	return sum;
}

#endif // !MAXIMUM_SUBARRAY_SUM_KATA

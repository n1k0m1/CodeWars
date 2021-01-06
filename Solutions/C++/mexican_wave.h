#ifndef MEXICAN_WAVE_KATA
#define MEXICAN_WAVE_KATA

//https://www.codewars.com/kata/58f5c63f1e26ecda7e000029

#include <vector>
#include <string>
#include <cctype>

std::vector<std::string> wave(std::string y)
{
	std::vector<std::string> mWave;

	for (size_t index = 0; index < y.length(); ++index)
	{
		if (y.at(index) != ' ')
		{
			mWave.push_back(y);
			mWave.back().replace(index, 1, 1, toupper(y.at(index)));
		}
	}

	return mWave;
}

#endif // !MEXICAN_WAVE_KATA

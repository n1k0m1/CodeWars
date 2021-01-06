#ifndef MUMBLING_KATA
#define MUMBLING_KATA

//https://www.codewars.com/kata/5667e8f4e3f572a8f2000039

#include <string>
#include <cctype>

class Accumul
{
public:
    static std::string accum(const std::string& s)
    {
        std::string result;

        for (size_t index = 0; index < s.length(); ++index)
        {
            for (size_t count = 0; count < index + 1; ++count)
            {
                if (count > 0)
                {
                    result += tolower(s.at(index));
                }
                else
                {
                    result += toupper(s.at(index));
                }
            }

            result += '-';
        }

        result.pop_back();

        return result;
    }
};

#endif // !MUMBLING_KATA

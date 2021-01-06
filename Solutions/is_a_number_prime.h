#ifndef IS_NUMBER_A_PRIME_KATA
#define IS_NUMBER_A_PRIME_KATA

//https://www.codewars.com/kata/5262119038c0985a5b00029f

#include <cmath>

bool isPrime(int num)
{
    if (num > 1)
    {
        for (int index = 2; index <= sqrt(num); ++index)
        {
            if (num % index == 0)
            {
                return false;
            }
        }
        return true;
    }
    else
    {
        return false;
    }
}

#endif

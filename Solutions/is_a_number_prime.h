#ifndef IS_NUMBER_A_PRIME_KATA
#define IS_NUMBER_A_PRIME_KATA

//https://www.codewars.com/kata/5262119038c0985a5b00029f

bool isPrime(int num)
{
    if (num > 1)
    {
        int temp = num - 1;
        while (temp > 1)
        {
            if (num % temp == 0)
            {
                return false;
            }
            temp -= 1;
        }
        return true;
    }

    return false;
}

#endif

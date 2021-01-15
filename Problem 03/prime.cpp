/* 
Largest Prime Factor

The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream>

int main()
{
    long int total = 600851475143;
    bool done = false;

    while (!done)
    {
        for (int i = 2; i < total; i++)
        {
            if (total % i == 0)
            {
                total = total / i;
                std::cout << total << std::endl;
                break;
            }
            else
            {
                if (total/2 < i )
                {
                    done = true;
                }
            }
        }
    }
}
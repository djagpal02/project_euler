/*
Special Pythagorean triplet
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

#include <iostream>
#include <math.h>

int main()
{
    for (int i = 1; i < 1000; i++)
    {
        for (int j = 1; j < 1000; j++)
        {
            float c = sqrt(i*i + j*j);
            if ((floor(c) == c) && (i + j + (int)c == 1000))
            {
                std::cout << i*j*(int)c << std::endl;
                return 0;
            }
        }
    }
}
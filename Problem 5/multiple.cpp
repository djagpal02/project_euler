/*
Smallest Multiple
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <iostream>

int checker(int n, int mult)
{
    bool divisible = true;
    for (int i = 2; i < n+1; i++) 
    {
        if (mult % i != 0)
        {
            divisible = false;
            break;
        }
    }

    return divisible;
}

int main()
{
    int n = 20;
    bool done = true;

    for (int i = n; done; i++)
    {
        if (checker(n,i) == true)
        {
            std::cout << i << std::endl;
            return 0;
        }
    }
}
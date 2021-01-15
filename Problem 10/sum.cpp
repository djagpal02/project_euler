/*
Summation of primes
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/
#include <iostream>

int main()
{
    int upper = 2000000;
    int x = 500000;
    unsigned long long int sum = 2;
    int arr[x], index = 1;
    arr[0] = 2;
    bool prime;

    for (int i = 3;i < upper; i++)
    {
        prime = true;

        for (int j = 0; j < index;j++)
        {
            if (i % arr[j] == 0)
            {
                prime = false;
            }
        }

        if (prime)
        {
            arr[index] = i;
            index += 1;
            sum += i;
            if (index == x)
            {
                std::cout << "increase x value" << std::endl;
                return 0;
            }
        } 
    }

    std::cout << sum << std::endl;
    return 0;
}
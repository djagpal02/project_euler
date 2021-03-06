/*
10001st Prime
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#include <iostream>

int main()
{
    // Create 10001 slot array to store all primes
    int arr[10001], index = 1;
    arr[0] = 2;
    bool not_done = true, prime;

    for (int i = 3; not_done; i++)
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

            if (index == 10002)
            {
                not_done = false;
            } 
        } 
    }
    std::cout << arr[10000] << std::endl;
}
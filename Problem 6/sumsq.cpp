/*
Sum Square Difference

The sum of the squares of the first ten natural numbers is,

The square of the sum of the first ten natural numbers is,

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is .

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <iostream>

int sum_of_squares(int n)
{
    int sum = 0;
    for (int i = 1; i < n+1; i++)
    {
        sum += i*i;
    }

    return sum;
}


int square_of_sum(int n)
{
    int sum = 0;
    for (int i = 1; i < n+1; i++)
    {
        sum += i;
    }

    return sum*sum;

}


int main()
{
    int n = 100;
    std::cout << square_of_sum(n) - sum_of_squares(n) << std::endl;
}
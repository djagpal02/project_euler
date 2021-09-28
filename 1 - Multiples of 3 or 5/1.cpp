// Multiples of 3 and 5
/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

233168
*/

#include <iostream>
#include <math.h>

unsigned long long gaus_sum(int multiple, unsigned long long floor_of_multiple)
{
    return multiple * floor_of_multiple * (floor_of_multiple + 1) / 2;
}

int main()
{
    int t;
    std::cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        std::cin >> n;

    auto sum_three = gaus_sum(3, floor((n-1)/3));
    auto sum_five = gaus_sum(5,floor((n-1)/5));
    auto sum_fifteen = gaus_sum(15, floor((n-1)/15));

    auto sum = sum_three + sum_five - sum_fifteen;


    std::cout << sum << "\n";

    }
}
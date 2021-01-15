/* 
Even Fibonacci Numbers

Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

#include <iostream>

int main()
{
    int term_one = 1;
    int term_two = 2;
    int temp;
    int sum = term_two;

    while (term_two < 4000000)
    {
        temp = term_two;
        term_two += term_one;
        term_one = temp;

        if (term_two % 2 == 0)
        {
            sum += term_two;
        }
    }

    std::cout << sum << std::endl;
}
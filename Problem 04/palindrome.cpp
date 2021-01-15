/*
Largest palindrome product
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>

int reverser(int n)
{
    int reverse=0, remainder;    

    while(n!=0)    
    {    
        remainder = n % 10;      
        reverse = reverse * 10 + remainder;    
        n /= 10;   
    } 

    return reverse;
}


int main()
{
    int largest = 0, x = 0, y = 0;

    for (int i = 999; i > 0; i--)
    {
        for (int j = 999; j > 0; j--)
        {
            int num = i * j;
            int rev = reverser(num);
            if (rev == num)
            {
                if (rev > largest)
                {
                    largest = rev;
                    x = i;
                    y = j;
                }
            }
        }
    }

    std::cout << largest << std::endl;
    std::cout << x << std::endl;
    std::cout << y << std::endl;

    return 0;
}
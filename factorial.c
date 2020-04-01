/*
 * Author: Joachim Larsen Mathisen
 * Program for those situations where you just must know the factorial of a number
 * Factorial is: n = n * (n-1) where n > 1. Otherwise, when n = 0 then n = 1
 */

#include <stdio.h>

int factorial(int n)
{
    n = n * (n-1);
    
    factorial(n-1);

    if (n == 0)
    {
        n = 1;
        return;
    }
    return n;
}



int main(int argc, int number)
{
    /* code */
    if (argc != 0)
    {
        int fact = factorial(number)
        printf("The factorial of %d is %d", number, fact);
    } else
    {
        printf("You must supply an argument. Exiting.")
        return -1;
    }
    
    return 0;
}

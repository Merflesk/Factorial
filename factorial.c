/*
 * Author: Joachim Larsen Mathisen
 * Program for those situations where you just must know the factorial of a number
 * Factorial is: n = n * (n-1) where n > 1. Otherwise, when n = 0 then n = 1
 */

#include <stdio.h>

long factorial(int n)
{
    int i;
    long result;
    printf("Starting value of result is: %llu", result);
    for (i = 1; i <= n; i++)
    {
        result *= i;
        printf("Step %d -- i is: %d and result is now: %llu", i, i, result);
    }
    return result;
}



int main()
{
    /* Ask user for a number and store it somewhere */
    int number;
    printf("Please enter a number: \n");
    scanf("%d", &number);
    // TODO
    // Print the results to the user:
    //long result = factorial(number);
    printf("The factorial of %d is %llu", number, factorial(number));
    return 0;
}

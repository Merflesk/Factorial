/*
 * Author: Joachim Larsen Mathisen
 * Program for those situations where you just must know the factorial of a number
 * Factorial is: n = n * (n-1) where n > 1. Otherwise, when n = 0 then n = 1
 */

#include <stdio.h>

long factorial(int n)
{
    int i;
    long result = 1; // Must be instantiated, if not variable value will be 140026038755616
    printf("Starting value of result is: %llu \n \n", result);
    for (i = 1; i <= n; i++)
    {
        result *= i;
        printf("Step %d -- i is: %d and result is now: %llu \n", i, i, result);
    }
    return result;
}



int main()
{
    /* Ask user for a number and store it somewhere */
    int number;
    printf("Please enter a number: \n");
    scanf("%d", &number);
   
    // Print the results to the user:
    //long result = factorial(number);
    printf("The factorial of %d is %llu \n", number, factorial(number));
    return 0;
}

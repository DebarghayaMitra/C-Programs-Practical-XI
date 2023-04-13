#include<stdio.h>

int main()
{
    unsigned long number = 0;
    unsigned long i = 1;
    unsigned long factorial = 1;

    printf("Enter a number to find the factorial: ");
    scanf("%lu", &number); // Read the number whose factorial needs to be calculated from the user

    // Loop to calculate the factorial of the entered number
    while(i <= number)
    {
        factorial *= i; // Multiply the current value of the factorial by the current value of i
        i++; // Increment the value of i by 1
    }

    printf("\nThe factorial of %lu is %lu", number, factorial); // Display the factorial of the entered number
    return 0;
}

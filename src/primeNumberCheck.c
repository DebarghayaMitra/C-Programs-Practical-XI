#include <stdio.h>
#include <stdbool.h>

int main()
{
    unsigned long number = 0;
    unsigned long i = 0;
    bool flag = true; // A flag variable to keep track of whether number is prime or not
    printf("Enter the number: ");
    scanf("%lu", &number);

    for (i = 2; i < number; i++)
    {
        if (number % i == 0) // Check if i is a divisor of the number
        {
            flag = false; // Set the flag to false, indicating the number is not prime
            break; // Exit the loop, since we already found a divisor
        }
    }

    if (flag) // Check the value of the flag to determine if number is prime
    {
        printf("The number %lu is prime", number);
    }
    else
    {
        printf("The number %lu is not prime", number);
    }
    return 0;
}

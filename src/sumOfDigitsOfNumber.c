#include <stdio.h>

int main()
{
    signed long number = 0;
    signed long numberCopy = 0;
    signed long sum = 0;

    // Ask user to enter a number
    printf("Enter a number: ");
    scanf("%lu", &number);

    // Make a copy of the original number
    numberCopy = number;

    // Calculate the sum of digits of the number using a while loop
    while (number != 0)
    {
        // Get the last digit of the number and add it to the sum
        sum += number % 10;

        // Remove the last digit of the number
        number = number / 10;
    }

    // Print the sum of digits of the original number
    printf("The sum of digits of %lu is %lu", numberCopy, sum);

    return 0;
}

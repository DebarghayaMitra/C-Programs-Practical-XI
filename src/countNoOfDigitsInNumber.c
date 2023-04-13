#include <stdio.h>

int main()
{
    signed long number = 0; // Declare a variable to hold the number entered by the user
    signed long numberCopy = 0; // Declare a variable to hold a copy of the number entered by the user
    unsigned long count = 0; // Declare a variable to hold the number of digits in the number entered by the user

    printf("Enter a number: ");
    scanf("%lu", &number); // Read the number entered by the user

    numberCopy = number; // Make a copy of the number entered by the user

    // Loop to count the number of digits in the number entered by the user
    while (number != 0)
    {
        count++; // Increment the count variable
        number = number / 10; // Divide the number by 10 to remove the rightmost digit
    }

    printf("%lu has %lu digit(s)", numberCopy, count); // Display the number entered by the user and the number of digits it has
    return 0;
}

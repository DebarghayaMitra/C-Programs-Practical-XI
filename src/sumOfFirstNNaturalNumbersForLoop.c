#include <stdio.h>

int main()
{
    // Declare and initialize variables
    unsigned long number = 0;   // stores the number of natural numbers to be added
    unsigned long i = 1;        // stores the current natural number being added in the loop
    unsigned long sum = 0;      // stores the sum of the natural numbers being added

    // Get input from user
    printf("Enter the number of natural numbers to add: ");
    scanf("%lu", &number);

    // Loop through each natural number and add it to sum
    for (i = 1; i <= number; i++)   // loop through each natural number from 1 to the input number
    {
        sum += i;                   // add the current number to the sum
    }

    // Print the sum of natural numbers
    printf("The sum of first %lu natural numbers is: %lu \n", number, sum);

    return 0;
}

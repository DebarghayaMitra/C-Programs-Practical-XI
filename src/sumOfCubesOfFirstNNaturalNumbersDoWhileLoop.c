#include <stdio.h>

int main()
{
    // Declare and initialize variables
    unsigned long i = 1;    // Counter for natural numbers
    unsigned long number;   // Number of natural numbers to add
    unsigned long sum = 0;  // Sum of natural numbers

    // Prompt user for input
    printf("Enter the number of elements to process: ");

    // Read in the number of natural numbers to add from the user
    scanf("%lu", &number);

    // Loop through each natural number up to the input number
    do {
        sum += i*i*i;    // Add the current number to the sum
        i++;         // Increment the counter
    } while (i <= number);    // Continue the loop until we've added the desired number of natural numbers

    // Output the sum of the cubes of the natural numbers
    printf("The sum of the cubes of the first %lu natural numbers is: %lu\n", number, sum);

    return 0;
}

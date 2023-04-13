// This is a C program to check whether a number is an Armstrong number or not.
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// A function to check if the given number is an Armstrong number or not
bool armstrong(unsigned long number)
{
    unsigned long numberCopy = number; // Make a copy of the input number
    unsigned long sum = 0; // Initialize sum to 0
    while (number > 0) // Loop until all digits of the input number are processed
    {
        sum += (number%10)*(number%10)*(number%10); // Cube each digit and add it to the sum
        number /= 10; // Remove the last digit from the input number
    }
    if(sum == numberCopy) // Check if the sum of cubes of digits is equal to the input number
    {
        return true; // If the sum is equal to the input number, return true
    }
    else
    {
        return false; // Otherwise, return false
    }
}

// The main function that takes input from the user and calls the armstrong function
int main()
{
    unsigned long number = 0; // Declare a variable to hold the user input
    printf("Enter a number :-"); // Prompt the user to enter a number
    scanf("%lu",&number); // Read the user input
    armstrong(number) ? printf("The number %lu is an armstrong number.\n", number) : printf("The number %lu is not an armstrong number.\n", number); // Call the armstrong function and print the result
    return 0;
}

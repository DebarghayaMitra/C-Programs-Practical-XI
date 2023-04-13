#include<stdio.h>
#include<stdbool.h>

int main()
{
    unsigned long number = 0;   // Variable to store the input number
    unsigned long i = 0;        // Loop variable for checking if a number is prime
    unsigned long j = 0;        // Loop variable for iterating over all numbers up to the input number
    bool flag = true;           // Flag to indicate if a number is prime or not

    printf("Enter the number:- ");
    scanf("%lu",&number);       // Get input number from user

    printf("\nThe numbers from 1 to %lu that are prime are:- ", number);

    for(j=2 ; j<=number; j++)   // Iterate over all numbers from 2 to the input number
    {
        flag = true;            // Assume that the number is prime initially
        for(i = 2; i<j; i++)    // Check if the current number is prime by iterating over all numbers from 2 to one less than the current number
        {
            if (j % i == 0)     // If the current number is divisible by a number other than 1 and itself, it is not prime
            {
                flag = false;   // Set flag to indicate that the current number is not prime
                break;          // Break out of the loop since we have already determined that the current number is not prime
            }
        }
        if (flag)               // If the flag is still true, then the current number is prime
        {
            printf(" %lu,", j); // Print the current number, since it is prime
        }
    }
   
    return 0;                   // End of program
}

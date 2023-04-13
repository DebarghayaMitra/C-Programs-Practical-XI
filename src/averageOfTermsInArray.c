#include <stdio.h>

// A function to accept the user input, compute the average and display the result
void enterDataAndDisplayAvg(unsigned long num)
{
    long double array[num]; // Declare an array of size 'num'
    unsigned long i = 0;
    long double sum = 0;

    // Loop to accept user input and store it in the array
    for (i = 0; i < num; i++)
    {
        printf("Enter the term no %lu:- ", (i+1)); // Prompt the user to enter the value of each term
        scanf ("%LF", &array[i]); // Read the value entered by the user and store it in the array
    }

    printf("\n\n");

    // Loop to calculate the sum of all the terms in the array
    for (i = 0; i < num; i++)
    {
        sum += array[i]; // Add each term to the sum variable
    }

    // Calculate the average of the terms in the array and display the result
    printf("The average of the terms in the array is:- %LF", (sum/num));
}

// The main function that takes input from the user and calls the enterDataAndDisplayAvg function
int main()
{
    unsigned long num = 0; // Declare a variable to hold the number of terms entered by the user
    printf ("Enter the number of terms:- ");
    scanf ("%lu", &num); // Read the number of terms entered by the user
    enterDataAndDisplayAvg(num); // Call the enterDataAndDisplayAvg function to accept user input, compute the average and display the result
    return 0; 
}

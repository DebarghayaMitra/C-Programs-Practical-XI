#include <stdio.h>

// function to enter data and display sum
void enterDataAndDisplaySum(unsigned long num)
{
    // declare an array to hold input values
    long double array[num];

    // declare variables for loop iteration and sum calculation
    unsigned long i = 0;
    long double sum = 0;

    // loop to enter input values
    for (i = 0; i < num; i++)
    {
        printf("Enter the term no %lu:- ", (i+1));
        scanf ("%LF", &array[i]); // read input value from user and store it in array
    }

    // print empty lines for formatting
    printf("\n\n");

    // loop to calculate sum of input values
    for (i = 0; i < num; i++)
    {
        sum += array[i]; // add current element to sum
    }

    // print the calculated sum
    printf("The sum of the terms in the array is:- %LF", sum);
}

// main function
int main()
{
    // declare variable to hold number of input terms
    unsigned long num = 0;

    // prompt user to enter number of terms and read input
    printf ("Enter the number of terms:- ");
    scanf ("%lu", &num);

    // call function to enter data and display sum
    enterDataAndDisplaySum(num);

    // return 0 to indicate successful execution
    return 0; 
}

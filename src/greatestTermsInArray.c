#include <stdio.h>

void enterDataAndDisplayMaxTerm(unsigned long num)
{
    // Declare an array to store the terms
    long double array[num];

    // Declare a variable to store the loop counter
    unsigned long i = 0;

    // Declare a variable to store the maximum term
    long double max = 0;

    // Loop through the array and get the terms from the user
    for (i = 0; i < num; i++)
    {
        printf("Enter the term no %lu:- ", (i+1));
        scanf ("%LF", &array[i]);
    }

    // Initialize max to the first term in the array
    max = array[0];

    // Loop through the array and compare each term with max
    for (i = 1; i < num; i++)
    {
        if (max < array[i])
        {
            // If a larger term is found, update max
            max = array[i];
        }
    }

    // Display the maximum term
    printf("The greatest of the terms in the array is:- %LF", max);
}

int main()
{
    // Declare a variable to store the number of terms
    unsigned long num = 0;

    // Get the number of terms from the user
    printf ("Enter the number of terms:- ");
    scanf ("%lu", &num);

    // Call the function to enter the terms and display the maximum
    enterDataAndDisplayMaxTerm(num);

    return 0; 
}

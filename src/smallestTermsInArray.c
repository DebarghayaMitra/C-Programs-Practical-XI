#include <stdio.h>

// Function to enter data and display the smallest term in the array
void enterDataAndDisplayMinTerm(unsigned long num)
{
    long double array[num]; // Declaring an array of type long double with num elements
    unsigned long i = 0; // Initializing i as 0
    long double min = 0; // Initializing min as 0
    
    // Loop to enter data into the array
    for (i = 0; i < num; i++)
    {
        printf("Enter the term no %lu:- ", (i+1));
        scanf ("%LF", &array[i]);
    }
    
    min = array[0]; // Initializing min with the first element of the array
    
    // Loop to find the smallest term in the array
    for (i = 1; i < num; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
    }
    
    printf("The smallest of the terms in the array is:- %LF", min); // Displaying the smallest term in the array
}

// Main function
int main()
{
    unsigned long num = 0; // Initializing num as 0
    
    printf ("Enter the number of terms:- ");
    scanf ("%lu", &num); // Reading the number of terms from the user
    
    enterDataAndDisplayMinTerm(num); // Calling the function to enter data and display the smallest term in the array
    
    return 0; // Returning 0 to indicate successful execution of the program
}

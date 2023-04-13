#include <stdio.h>

// Function to swap two numbers using pointers
void swap(long double* xp, long double* yp)
{
    long double temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Function to enter data and display sorted array
void enterDataAndDisplaySort(unsigned long num)
{
    long double array[num]; // Declare an array of size num
    unsigned long i = 0; // Declare a variable for loop iteration
    unsigned long j = 0; // Declare a variable for loop iteration
    unsigned long n = 0; // Declare a variable to hold size of array
    printf("\n"); // Print a newline character
    
    // Loop to enter data into array
    for (i = 0; i < num; i++)
    {
        printf("Enter the term no %lu:- ", (i+1)); // Ask for input
        scanf ("%LF", &array[i]); // Store input in array
    }
    
    n = sizeof(array) / sizeof(array[0]); // Calculate size of array
    
    // Loop to sort array using bubble sort algorithm
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]); // Call swap function to swap elements
            }
        }
    }
    
    printf("\nThe sorted array is:- "); // Print message indicating sorted array
    
    // Loop to display sorted array
    for (i = 0; i < num; i++)
    {
        printf("%LF, ", array[i]); // Display each element of array
    }
}

// Main function
int main()
{
    unsigned long num = 0; // Declare a variable to hold number of terms
    printf ("Enter the number of terms:- "); // Ask for input
    scanf ("%lu", &num); // Store input in num
    enterDataAndDisplaySort(num); // Call function to enter data and display sorted array
    return 0; // Exit program
}

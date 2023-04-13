#include <stdio.h>

void enterDataAndDisplay(unsigned long num)
{
    long double array[num]; // Declare an array to hold the numbers entered by the user
    unsigned long i = 0;

    // Loop to read the numbers entered by the user and store them in the array
    for (i = 0; i < num; i++)
    {
        printf("Enter term no %lu: ", (i+1));
        scanf("%LF", &array[i]); // Read the number entered by the user and store it in the array
    }

    printf("\n\n");

    // Loop to display the numbers stored in the array
    for (i = 0; i < num; i++)
    {
        printf("Term no %lu in array is: %LF\n", (i+1), array[i]); // Display the i-th term in the array
    }
}

int main()
{
    unsigned long num = 0;
    printf("Enter the number of terms: ");
    scanf("%lu", &num); // Read the number of terms from the user
    enterDataAndDisplay(num); // Call the function to read the numbers and display them
    return 0; 
}

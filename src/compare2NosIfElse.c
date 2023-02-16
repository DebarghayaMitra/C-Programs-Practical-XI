#include<stdio.h>
int main()
{
    long double no1, no2;  // Declare variables for two numbers
    
    printf("Enter the first number:- ");  // Prompt user to enter the first number
    scanf("%LF", &no1);  // Read first number from user input
    
    printf("Enter the second number:- ");  // Prompt user to enter the second number
    scanf("%LF", &no2);  // Read second number from user input
    
    // Compare the two numbers
    if(no1>no2)
    {
        printf("%LF is greater \n", no1); // If first number is greater, print it
    }
    else if (no2>no1)
    {
        printf("%LF is greater \n", no2); // If second number is greater, print it
    }
    else
    {
        printf("Both numbers are equal \n"); // If both numbers are equal, print the statement
    }
    return (0); // End of program
}

#include<stdio.h>

int main()
{
    long double no1, no2;  // Declare variables for two numbers and their sum
    
    printf("Enter the first number:- ");  // Prompt user for first number
    scanf("%LF", &no1);  // Read first number from user input
    
    printf("Enter the second number:- ");  // Prompt user for second number
    scanf("%LF", &no2);  // Read second number from user input
    
    printf("\nThe sum of %LF and %LF is %LF \n", no1, no2, (no1 + no2));  // Calculate the sum of the two numbers and Print the sum
    
    return(0);  // End the program
}

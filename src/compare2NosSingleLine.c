#include<stdio.h>
int main()
{
    long double no1, no2;  // Declare variables for two numbers
    
    printf("Enter the first number:- ");  // Prompt user to enter the first number
    scanf("%LF", &no1);  // Read first number from user input
    
    printf("Enter the second number:- ");  // Prompt user to enter the second number
    scanf("%LF", &no2);  // Read second number from user input
    
    // Compare the two numbers using ternary operator and print the greater number
    printf("%LF is greater\n", (no1 >= no2?no1:no2)); 
    
    return (0); //End of program
}

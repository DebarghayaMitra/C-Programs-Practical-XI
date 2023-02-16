#include<stdio.h>

int main()
{
    // Declare three variables to store the input numbers
    long double no1, no2, no3;

    // Prompt the user to enter the first number
    printf("Enter the first number: "); 
    scanf("%LF", &no1);  
    
    // Prompt the user to enter the second number
    printf("Enter the second number: "); 
    scanf("%LF", &no2); 

    // Prompt the user to enter the third number
    printf("Enter the third number: "); 
    scanf("%LF", &no3);

    // Compare the first and second numbers to determine the larger one
    if (no1 >= no2)
    {
        // Compare the first number to the third number to determine the larger one
        if (no1 <= no3)
        {
            // If the first number is less than or equal to the third number, print the third number as the largest
            printf("The largest number is %LF\n", no3);
        }
        else
        {
            // If the first number is greater than the third number, print the first number as the largest
            printf("The largest number is %LF\n", no1);
        }
    } 
    else
    {
        // Compare the second number to the third number to determine the larger one
        if (no2 <= no3)
        {
            // If the second number is less than or equal to the third number, print the third number as the largest
            printf("The largest number is %LF\n", no3);
        }
        else
        {
            // If the second number is greater than the third number, print the second number as the largest
            printf("The largest number is %LF\n", no2);
        }
    }

    // Return 0 to indicate that the program has executed successfully
    return (0);
}  

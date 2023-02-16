#include<stdio.h>

int main()
{
    // Declare three floating-point variables to store the numbers entered by the user
    long double no1, no2, no3;
    
    // Prompt the user to enter the first number
    printf("Enter the first number:- "); 
    scanf("%LF", &no1);  
    
    // Prompt the user to enter the second number
    printf("Enter the second number:- "); 
    scanf("%LF", &no2); 

    // Prompt the user to enter the third number
    printf("Enter the third number:- "); 
    scanf("%LF", &no3);

    // Check if no1 is greater than or equal to both no2 and no3
    if (no1 >= no2 && no1 >= no3)
    {
        // If the above condition is true, print that no1 is greater
        printf("%LF is greater \n", no1);
    } 
    // Check if no2 is greater than or equal to both no1 and no3
    else if (no2 >= no1 && no2 >= no3)
    {
        // If the above condition is true, print that no2 is greater
        printf("%LF is greater \n", no2);
    }
    // If neither of the above conditions are true, no3 must be greater than both no1 and no2
    else
    {
        // Print that no3 is greater
        printf("%LF is greater \n", no3);
    }

    // Return 0 to indicate that the program has executed successfully
    return 0;
}

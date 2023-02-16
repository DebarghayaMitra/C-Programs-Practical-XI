#include<stdio.h>

int main()
{
    // Declare three floating-point variables to store the full marks, total marks, and percentage
    long double full, percentage, total;

    // Prompt the user to enter the full marks and read the value into the full variable
    printf("Enter the Full Marks: ");
    scanf("%LF", &full);

    // Prompt the user to enter the total marks they got and read the value into the total variable
    printf("Enter the total marks you got: ");
    scanf("%LF", &total);

    // Calculate the percentage by dividing the total marks by the full marks and multiplying by 100
    // This will give us the percentage of marks the user got out of the full marks
    percentage = (total / full) * 100;

    /*
    Use an if-else ladder to determine the user's grade based on their percentage.
    If the percentage is greater than or equal to 80, the grade is A.
    If the percentage is greater than or equal to 60 but less than 80, the grade is B.
    If the percentage is greater than or equal to 40 but less than 60, the grade is C.
    If the percentage is greater than or equal to 30 but less than 40, the grade is D.
    If the percentage is less than 30, the user has failed.
    */
    if(percentage >= 80)
    {
        printf("Your grade is A\n");
    }
    else if(percentage >= 60)
    {
        printf("Your grade is B\n");
    }
    else if(percentage >= 40)
    {
        printf("Your grade is C\n");
    }
    else if(percentage >= 30)
    {
        printf("Your grade is D\n");
    }
    else
    {
        printf("You Failed\n");
    }

    // Return 0 to indicate that the program has executed successfully
    return 0;
}

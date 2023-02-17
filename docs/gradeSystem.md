# Program to Grade student based on percentage
## The Introduction

This is a C program that takes input from the user in the form of full marks and total marks, and calculates the percentage obtained by the user. The program then uses an if-else ladder to determine the user's grade based on their percentage. The grading system used in this program is as follows: A for percentages greater than or equal to 80, B for percentages greater than or equal to 60 but less than 80, C for percentages greater than or equal to 40 but less than 60, D for percentages greater than or equal to 30 but less than 40, and Fail for percentages less than 30. Finally, the program displays the grade obtained by the user.

## The Working Principal

Here's a step-by-step explanation of how this program works:

1.  The program starts by declaring three variables of type long double to store the full marks, total marks, and percentage.
2.  The program prompts the user to enter the full marks and reads the value into the full variable using the scanf() function.
3.  The program prompts the user to enter the total marks they got and reads the value into the total variable using the scanf() function.
4.  The program calculates the percentage obtained by dividing the total marks by the full marks and multiplying by 100. The resulting value is stored in the percentage variable.
5.  The program then uses an if-else ladder to determine the grade obtained by the user based on their percentage. If the percentage is greater than or equal to 80, the grade is A. If the percentage is greater than or equal to 60 but less than 80, the grade is B. If the percentage is greater than or equal to 40 but less than 60, the grade is C. If the percentage is greater than or equal to 30 but less than 40, the grade is D. If the percentage is less than 30, the user has failed.
6.  Finally, the program displays the grade obtained by the user using the printf() function.
7.  The program ends by returning 0 to indicate that it has executed successfully.

## The Program

```c
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
```

## The Variable Description

| Variable Name | Data Type | Description |
| --- | --- | --- |
| `full` | `long double` | A variable to store the full marks of an exam or test |
| `percentage` | `long double` | A variable to store the percentage of marks obtained by a student out of the full marks |
| `total` | `long double` | A variable to store the total marks obtained by a student in an exam or test |

## The Output

```
Enter the Full Marks: 500
Enter the total marks you got: 100
You Failed
```

## File Links
1. [Output Screenshot](../screenshots/gradeSystem.png)
2. [Source Code](../src/gradeSystem.c)
3. [Variables Description](../variableDescription/gradeSystem.md)
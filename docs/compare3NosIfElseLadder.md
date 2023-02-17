# Program to compare 3 numbers and tell which one is greater (Using If Else Ladder)
## The Introduction

This program is designed to find the largest number among three floating-point numbers entered by the user. It prompts the user to input three numbers and stores them in variables. Then, it compares these numbers using if-else statements to find out which one is the greatest. If the first number is greater than or equal to both the second and third numbers, it is considered the largest. If the second number is greater than or equal to the first and third numbers, it is considered the largest. If neither of these conditions is true, the third number is considered the largest. The program then outputs the largest number to the user. Finally, the program returns 0 to indicate that it has executed successfully.

## The Working Principal

The detailed working of the program:

1.  The program starts by declaring three variables of long double data type to store the user input.
2.  The program prompts the user to enter the first number, and the user inputs the value.
3.  The program reads the input using the scanf() function and stores it in the no1 variable.
4.  The program prompts the user to enter the second number, and the user inputs the value.
5.  The program reads the input using the scanf() function and stores it in the no2 variable.
6.  The program prompts the user to enter the third number, and the user inputs the value.
7.  The program reads the input using the scanf() function and stores it in the no3 variable.
8.  The program uses if-else statements to compare the three numbers and find the greatest among them.
9.  The first if statement checks if no1 is greater than or equal to both no2 and no3. If this is true, the program outputs that no1 is the greatest.
10.  If the first condition is not true, the program moves to the next else-if statement, which checks if no2 is greater than or equal to both no1 and no3. If this condition is true, the program outputs that no2 is the greatest.
11.  If neither of the first two conditions is true, then no3 must be the greatest number, and the program outputs that no3 is the greatest.
12.  Finally, the program returns 0 to indicate that it has executed successfully.

## The Program

```c
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
```

## The Variable Description

| Variable Name | Data Type | Description |
| --- | --- | --- |
| `no1` | `long double` | A long doubleing-point variable used to store the first number entered by the user. |
| `no2` | `long double` | A long doubleing-point variable used to store the second number entered by the user. |
| `no3` | `long double` | A long doubleing-point variable used to store the third number entered by the user. |

## The Output

```
Enter the first number:- 55
Enter the second number:- 856
Enter the third number:- 552
856.000000 is greater
```

## File Links
1. [Output Screenshot](../screenshots/compare3NosIfElseLadder.png)
2. [Source Code](../src/compare3NosIfElseLadder.c)
3. [Variables Description](../variableDescription/compare3NosIfElseLadder.md)
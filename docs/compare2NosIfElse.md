# Program to compare 2 numbers and tell which one is greater (Using If Else)
## The Introduction

This C program prompts the user to enter two numbers, reads the inputted values, and then compares them to determine which number is greater.

If the first number is greater than the second number, the program prints the first number with a message "is greater". If the second number is greater than the first number, the program prints the second number with the same message.

If both numbers are equal, the program prints a message "Both numbers are equal".

The program uses the long double data type for the variables `no1` and `no2` to allow for the input of very large or very small numbers with high precision.

## The Working Principal

The step-by-step description of how the program works:

1.  The program starts by including the standard input-output library `stdio.h` and defining the `main()` function.
2.  Two variables of type `long double` named `no1` and `no2` are declared to hold the user's input for two numbers.
3.  The `printf()` function is used to display a message prompting the user to enter the first number.
4.  The `scanf()` function is used to wait for user input from the keyboard and store the value in the `no1` variable.
5.  The `printf()` function is used again to display a message prompting the user to enter the second number.
6.  The `scanf()` function is used again to wait for user input from the keyboard and store the value in the `no2` variable.
7.  The program uses an `if` statement to compare the values of `no1` and `no2` and check if `no1` is greater than `no2`. If this is true, the program executes the code within the `if` block, which prints a message to the console that says `no1 is greater`.
8.  If the condition in the `if` statement is not true, the program uses an `else if` statement to check if `no2` is greater than `no1`. If this is true, the program executes the code within the `else if` block, which prints a message to the console that says `no2 is greater`.
9.  If neither condition in the `if` or `else if` statements is true, the program executes the code within the `else` block, which prints a message to the console that says `Both numbers are equal`.
10.  The `return` statement is used to end the execution of the `main()` function and the program terminates with a status code of 0.

## The Program

```c
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
```

## The Variable Description

| **Variable Identifier** | **Variable Type** | **Description** |
| --- | --- | --- |
| `no1` | `long double` | stores the first number entered by the user |
| `no2` | `long double` | stores the second number entered by the user |

## The Output

```
Enter the first number:- 55
Enter the second number:- 545
545.000000 is greater 
```

## File Links
1. [Output Screenshot](../screenshots/compare2NosIfElse.png)
2. [Source Code](../src/compare2NosIfElse.c)
3. [Variables Description](../variableDescription/compare2NosIfElse.md)
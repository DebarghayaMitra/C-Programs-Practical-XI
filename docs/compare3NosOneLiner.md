# Program to compare 3 numbers and tell which one is greater (Using One Liner Code)
## The Introduction

This C program prompts the user to enter three floating-point numbers and then uses a ternary operator to determine which of the three numbers is the greatest. The program utilizes the conditional operator to compare the entered numbers and print out the greatest number to the console. This simple program is useful for understanding how conditional statements and input/output functions work in C.

## The Working Principal

Here is a point-by-point breakdown of how the program works:

1.  The program starts with including the standard input/output library "stdio.h".
2.  The `main()` function is defined, which is the entry point of the program.
3.  Three variables of the data type `long double` are declared to store the numbers entered by the user. These variables are named `no1`, `no2`, and `no3`.
4.  The `printf()` function is used to display a prompt message asking the user to enter the first number.
5.  The `scanf()` function is used to read the user input, and the entered value is stored in the variable `no1`.
6.  Similarly, the `printf()` and `scanf()` functions are used to read the second and third numbers entered by the user, which are stored in variables `no2` and `no3`, respectively.
7.  The ternary operator is used to compare the entered numbers and determine which one is the greatest.
8.  The ternary operator consists of three operands - the condition to be evaluated, the result to be returned if the condition is true, and the result to be returned if the condition is false.
9.  In this program, the ternary operator is used to compare `no1` with `no2` and `no3`. If `no1` is greater than or equal to both `no2` and `no3`, the program prints that `no1` is the greatest number. If `no2` is greater than or equal to both `no1` and `no3`, the program prints that `no2` is the greatest number. Otherwise, the program prints that `no3` is the greatest number.
10.  The program returns `0` at the end to indicate successful execution of the program.

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

    // Use a ternary operator to determine the greater number
    // If no1 is greater than or equal to both no2 and no3, print that no1 is greater
    // If no2 is greater than or equal to both no1 and no3, print that no2 is greater
    // If neither of the above conditions are true, no3 must be greater than both no1 and no2, so print that no3 is greater
    (no1 >= no2 && no1 >= no3) ? printf("%LF is greater\n", no1) : (no2 >= no1 && no2 >= no3) ? printf("%LF is greater\n", no2) : printf("%LF is greater\n", no3);

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
Enter the second number:- 585
Enter the third number:- 585
585.000000 is greater
```

## File Links
1. [Output Screenshot](../screenshots/compare3NosOneLiner.png)
2. [Source Code](../src/compare3NosOneLiner.c)
3. [Variables Description](../variableDescription/compare3NosOneLiner.md)
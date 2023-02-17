# Program to add 2 numbers
## The Introduction

This program prompts the user to enter two decimal numbers, reads those numbers from the user input, calculates their sum, and then prints the result on the console. The program consists of only a few lines of code and is meant to illustrate basic input/output operations and arithmetic calculations in C programming.

## The Working Principal

The point-wise explanation of how the program works:

1. The program declares two variables `no1` and `no2` of type `long double`. These variables are used to store the two decimal numbers entered by the user, as well as the sum of these numbers.
2. The program prompts the user to enter the first number by displaying a message "Enter the first number:-" using the `printf()` function.
3. The `scanf()` function is used to read the first number from the user input and store it in the variable `no1`.
4. The program prompts the user to enter the second number by displaying a message "Enter the second number:-" using the `printf()` function.
5. The `scanf()` function is used to read the second number from the user input and store it in the variable `no2`.
6. After reading the two numbers, the program calculates their sum by adding `no1` and `no2`, and stores the result in the expression `(no1 + no2)`.
7. The printf() function is used to print the result of the sum on the console. The format string "\nThe sum of %LF and %LF is %LF \n" is used to format the output, where `%LF` is a format specifier for long double type. The values of `no1`, `no2`, and `(no1 + no2)` are passed as arguments to the `printf()` function to display the final result.
8. The program returns 0 to indicate successful execution and terminates.

## The Program

```c
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
```

## The Variable Description

| **Variable Identifier** | **Variable Type** | **Description**                  |
|:-----------------------:|:-----------------:|----------------------------------|
| `no1`                     | `long double`             | To store first number from user  |
| `no2`                     | `long double`             | To store second number from user |

## The Output

```
Enter the first number:- 152
Enter the second number:- 55

The sum of 152.000000 and 55.000000 is 207.000000 
```

## File Links
1. [Output Screenshot](../screenshots/add2Numbers.png)
2. [Source Code](../src/add2Numbers.c)
3. [Variables Description](../variableDescription/add2Numbers.md)
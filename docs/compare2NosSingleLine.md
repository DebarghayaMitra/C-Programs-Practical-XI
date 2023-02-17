# Program to compare 2 numbers and tell which one is greater (Using Single Line code)
## The Introduction

This program takes two numbers as input from the user, compares them, and prints the greater number to the console. It uses `scanf()` to read the two numbers, and the ternary operator to compare them and determine the greater one. The program then prints the result to the console using `printf()`, and returns 0 to indicate successful completion of the program. The code is written in C, and uses the `long double` data type to store the input and output numbers. The program is concise and easy to understand, making it a good example of basic C programming.

## The Working Principal

a point-wise description of how this program works:

1.  The program starts by including the standard input-output header file `stdio.h`.
2.  The `main()` function is defined, which is the entry point of the program.
3.  Two `long double` variables `no1` and `no2` are declared, which will be used to store the user input.
4.  The `printf()` function is used to print a prompt message on the console, asking the user to enter the first number.
5.  The `scanf()` function is used to read the first number entered by the user from the console and store it in the variable `no1`.
6.  The `printf()` function is used again to print a prompt message on the console, asking the user to enter the second number.
7.  The `scanf()` function is used to read the second number entered by the user from the console and store it in the variable `no2`.
8.  The ternary operator `? :` is used to compare the values of `no1` and `no2` and determine which one is greater. The greater value is then passed as an argument to the `printf()` function, along with a message that indicates that it is the greater number.
9.  The `printf()` function is used to print the message and the greater number on the console.
10.  The `return` statement is used to return 0 to the operating system, indicating successful completion of the program.

Overall, this program prompts the user to enter two numbers, reads them from the console, compares them, and prints the greater number on the console. The program uses `printf()` and `scanf()` functions for input and output, and the ternary operator for comparing the numbers.

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
    
    // Compare the two numbers using ternary operator and print the greater number
    printf("%LF is greater\n", (no1 >= no2?no1:no2)); 
    
    return (0); //End of program
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
1. [Output Screenshot](../screenshots/compare2NosSingleLine.png)
2. [Source Code](../src/compare2NosSingleLine.c)
3. [Variables Description](../variableDescription/compare2NosSingleLine.md)
# Program to compare 3 numbers and tell which one is greater (Using Nested If Else)
## The Introduction

This C program is designed to compare three numbers and determine which one is the largest. It prompts the user to input the numbers and then uses a nested if-else statement to determine the largest one. Once the largest number has been determined, the program prints it to the console. While the program is straightforward and easy to understand, it has a limitation in that it does not handle the scenario where two or more of the input numbers are equal.

## The Working Principal

This C program prompts the user to enter three numbers and then compares them to determine the largest number. Here is how the program works:

1.  The program declares three variables of type `long double` to store the input numbers.
2.  The program prompts the user to enter the first number using `printf()` and reads the input using `scanf()`.
3.  The program prompts the user to enter the second number using `printf()` and reads the input using `scanf()`.
4.  The program prompts the user to enter the third number using `printf()` and reads the input using `scanf()`.
5.  The program uses a nested if-else statement to compare the first and second numbers. If the first number is greater than or equal to the second number, the program compares the first number to the third number to determine the largest one. If the first number is less than or equal to the third number, the program prints the third number as the largest. Otherwise, the program prints the first number as the largest.
6.  If the second number is greater than the first number, the program compares the second number to the third number to determine the largest one. If the second number is less than or equal to the third number, the program prints the third number as the largest. Otherwise, the program prints the second number as the largest.
7.  The program returns 0 to indicate that it has executed successfully.

Overall, this program correctly finds the largest of the three input numbers by comparing them in a nested if-else statement.

## The Program

```c
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
```

## The Variable Description

| Variable Name | Data Type | Description |
| --- | --- | --- |
| `no1` | `long double` | A long doubleing-point variable used to store the first number entered by the user. |
| `no2` | `long double` | A long doubleing-point variable used to store the second number entered by the user. |
| `no3` | `long double` | A long doubleing-point variable used to store the third number entered by the user. |

## The Output

```
Enter the first number: 55
Enter the second number: 5575     
Enter the third number: 552556
The largest number is 552556.000000
```

## File Links
1. [Output Screenshot](../screenshots/compare3NosNestedIfElse.png)
2. [Source Code](../src/compare3NosNestedIfElse.c)
3. [Variables Description](../variableDescription/compare3NosNestedIfElse.md)
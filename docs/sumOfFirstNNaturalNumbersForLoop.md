# Program to add the first "n" natural numbers (Using For Loop)
## The Introduction

This is a C program that calculates the sum of the first n natural numbers, where n is an input provided by the user. The program uses a for loop to iterate through each natural number from 1 to n and adds it to a running sum variable. After the loop completes, the program outputs the sum of the natural numbers to the console. This program can serve as a basic example for beginners learning about loops and arithmetic operations in C programming language.

## The Working Principal

here is a step-by-step explanation of how this C program works:

1.  First, the program declares and initializes three variables:
    -   `number`: an unsigned long integer that will hold the input from the user
    -   `i`: an unsigned long integer that will be used as a loop counter to iterate through the natural numbers
    -   `sum`: an unsigned long integer that will store the running total of the sum of natural numbers
2.  The program prompts the user to input the number of natural numbers they would like to add by printing a message to the console using the `printf` function.
3.  The `scanf` function is used to read the user's input from the console and store it in the `number` variable.
4.  The program enters a for loop that will iterate through each natural number from 1 to `number`.
5.  Inside the for loop, the current value of `i` is added to the running total `sum` using the `+=` operator. This operation is shorthand for `sum = sum + i`.
6.  After the for loop completes, the program uses the `printf` function to output the final value of `sum` to the console, along with a message that informs the user that it is the sum of the first `number` natural numbers.
7.  Finally, the program returns 0 to indicate that it has executed successfully and exits.

## The Program

```c
#include <stdio.h>

int main()
{
    // Declare and initialize variables
    unsigned long number = 0;   // stores the number of natural numbers to be added
    unsigned long i = 1;        // stores the current natural number being added in the loop
    unsigned long sum = 0;      // stores the sum of the natural numbers being added

    // Get input from user
    printf("Enter the number of natural numbers to add: ");
    scanf("%lu", &number);

    // Loop through each natural number and add it to sum
    for (i = 1; i <= number; i++)   // loop through each natural number from 1 to the input number
    {
        sum += i;                   // add the current number to the sum
    }

    // Print the sum of natural numbers
    printf("The sum of first %lu natural numbers is: %lu \n", number, sum);

    return 0;
}
```

## The Variable Description

| Variable | Data Type | Description |
| -------- | --------- | ----------- |
| `number` | `unsigned long` | An integer variable to store the input number of elements to add. |
| `i` | `unsigned long` | An integer variable used as a counter in the `for` loop. |
| `sum` | `unsigned long` | An integer variable to store the sum of the natural numbers. |

## The Output

```
Enter the number of natural numbers to add: 10
The sum of first 10 natural numbers is: 55
```

## File Links
1. [Output Screenshot](../screenshots/sumOfFirstNNaturalNumbersForLoop.png)
2. [Source Code](../src/sumOfFirstNNaturalNumbersForLoop.c)
3. [Variables Description](../variableDescription/sumOfFirstNNaturalNumbersForLoop.md)
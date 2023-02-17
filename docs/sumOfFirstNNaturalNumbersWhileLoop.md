# Program to add the first "n" natural numbers (Using While Loop)
## The Introduction

This is a C program that calculates the sum of the first n natural numbers, where n is input by the user. The program uses a while loop to iterate through each natural number from 1 to n, adding each number to a running total. Once the loop has finished, the program prints the sum of the natural numbers.

## The Working Principal

Here is a step-by-step pointwise explanation of how the program works:

1.  The program starts by including the `stdio.h` header file, which provides input and output functions in C.
2.  In the `main()` function, the program declares and initializes three unsigned long variables: `number`, `i`, and `sum`. `number` is set to 0, while `i` and `sum` are both set to 1.
3.  The program prints a message to the console asking the user to enter the number of natural numbers to add using the `printf()` function.
4.  The `scanf()` function reads in the user's input and stores it in the `number` variable.
5.  The program enters a while loop that will continue iterating as long as `i` is less than or equal to `number`.
6.  Within the loop, the program adds the current natural number `i` to the running total `sum` using the `+=` operator.
7.  The program increments `i` by 1 using the `++` operator.
8.  Once the loop has finished, the program prints the sum of the natural numbers using the `printf()` function.    
9.  The `main()` function ends by returning 0, indicating that the program has run successfully.

Here's an example of how the program would work for a user input of 5:

## The Program

```c
#include <stdio.h>

int main()
{
    // Declare and initialize variables
    unsigned long number = 0;   // stores the number of natural numbers to be added
    unsigned long i = 1;        // stores the current natural number being added in the loop
    unsigned long sum = 0;      // stores the sum of the natural numbers being added in the loop

    // Get input from user
    printf("Enter the number of natural numbers to add: ");
    scanf("%lu", &number);

    // Loop through each natural number and add it to sum
    while (i <= number)         // loop as long as the current number is less than or equal to the total number of natural numbers
    {
        sum += i;               // add the current number to the sum
        i++;                    // increment the current number
    }

    // Print the sum of natural numbers
    printf("The sum of first %lu natural numbers is: %lu \n", number, sum);

    return 0;
}
```

## The Variable Description

| Variable Name | Data Type     | Description                                       |
|---------------|---------------|---------------------------------------------------|
| `number`        | `unsigned long` | stores the number of natural numbers to be added |
| `i`             | `unsigned long` | stores the current natural number being added    |
| `sum`           | `unsigned long` | stores the sum of the natural numbers being added|

## The Output

```
Enter the number of natural numbers to add: 10
The sum of first 10 natural numbers is: 55 
```

## File Links
1. [Output Screenshot](../screenshots/sumOfFirstNNaturalNumbersWhileLoop.png)
2. [Source Code](../src/sumOfFirstNNaturalNumbersWhileLoop.c)
3. [Variables Description](../variableDescription/sumOfFirstNNaturalNumbersWhileLoop.md)
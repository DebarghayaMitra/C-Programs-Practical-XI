# Program to add the first "n" natural numbers (Using Do While Loop)
## The Introduction

The program you're looking at is a C program designed to calculate the sum of the first n natural numbers. This program uses a simple loop to iterate through each natural number up to the input number, adding each number to the sum as it goes. The sum of the natural numbers is then outputted to the user.

## The Working Principal

Here's a pointwise breakdown of how this program works:

1.  The program begins by declaring and initializing three variables: `i`, `number`, and `sum`.
2.  `i` is a counter that keeps track of which natural number the program is currently processing. It is initialized to 1.
3.  `number` is the input number of natural numbers to add, which the program prompts the user to enter.
4.  `sum` is the variable that keeps track of the running total of the sum of the natural numbers.
5.  The program prompts the user to enter the number of natural numbers they would like to add.
6.  The program reads in the user's input using the `scanf` function and stores the value in the `number` variable.
7.  The program enters a loop that will add the first `number` natural numbers together.
8.  Within the loop, the program adds the value of `i` to the `sum` variable.
9.  The program then increments `i` by 1.
10.  The loop continues until `i` reaches the value of `number`.
11.  Once the loop has completed, the program outputs the sum of the first `number` natural numbers.
12.  The program terminates by returning a value of 0, indicating successful completion.

Overall, this program is a simple but effective example of how loops can be used to perform iterative tasks in programming. By using a loop to add the first `number` natural numbers, the program is able to efficiently calculate the sum of a potentially large set of numbers with just a few lines of code.

## The Program

```c
#include <stdio.h>

int main()
{
    // Declare and initialize variables
    unsigned long i = 1;    // Counter for natural numbers
    unsigned long number;   // Number of natural numbers to add
    unsigned long sum = 0;  // Sum of natural numbers

    // Prompt user for input
    printf("Enter the number of elements to process: ");

    // Read in the number of natural numbers to add from the user
    scanf("%lu", &number);

    // Loop through each natural number up to the input number
    do {
        sum += i;    // Add the current number to the sum
        i++;         // Increment the counter
    } while (i <= number);    // Continue the loop until we've added the desired number of natural numbers

    // Output the sum of the natural numbers
    printf("The sum of the first %lu natural numbers is: %lu\n", number, sum);

    return 0;
}
```

## The Variable Description

| Variable Name | Type | Description |
|-----|------|------|
| `i` |	`unsigned long` |	Counter variable used to keep track of the current iteration of the loop. Starts at 1 and is incremented by 1 in each iteration.|
| `number` | `unsigned long` | Stores the number of elements the user wants to process. Read from the user using scanf.|
| `sum` | `unsigned long` | Stores the sum of the first number natural numbers. In each iteration of the loop, i is added to sum |

## The Output

```
Enter the number of elements to process: 10
The sum of the first 10 natural numbers is: 55
```

## File Links
1. [Output Screenshot](../screenshots/sumOfFirstNNaturalNumbersDoWhileLoop.png)
2. [Source Code](../src/sumOfFirstNNaturalNumbersDoWhileLoop.c)
3. [Variables Description](../variableDescription/sumOfFirstNNaturalNumbersDoWhileLoop.md)
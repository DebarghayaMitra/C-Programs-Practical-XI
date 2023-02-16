# Hello World Program
## The Introduction

This is a very basic C program that uses the `printf()` function to print the message "Hello World from C" to the console. The program does not take any input or produce any output other than the printed message.

## The Working Principal

Here's how the program works:

1.  The `printf()` function is called with the string argument "Hello World from C\\n\\n\\n" to print the message on the console.
2.  The "\\n" character sequence is used to insert newlines, so the message is displayed with three newlines after the message.
3.  The `return 0` statement is used to indicate that the program has executed successfully.
4.  When the program is run, the message "Hello World from C" is displayed on the console, followed by three blank lines, and then the program terminates.

## The Program

```c
#include <stdio.h>
int main()
{
    // Call the printf() function to print the message to the console

    printf("Hello World from C\n\n\n");

    // Return 0 to indicate successful completion of the program

    return 0;
}
```

## The Output

```
Hello World from C


```

## File Links
1. [Output Screenshot](../screenshots/helloWorld.png)
2. [Source Code](../src/helloWorld.c)
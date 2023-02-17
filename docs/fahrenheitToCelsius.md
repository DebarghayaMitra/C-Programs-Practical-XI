# Program to convert from fahrenheit to celsius scale
## The Introduction

This C program is designed to prompt the user to enter a temperature in Fahrenheit scale and then convert and print the temperature in Celsius scale. The program makes use of a conversion formula to perform the conversion of temperature from Fahrenheit to Celsius. The output is displayed on the screen in the form of a message indicating the temperature in Celsius scale.

## The Working Principal

Here's a step-by-step explanation of how the program works:

1.  The program starts by including the standard input-output library in C, which is done using the `#include <stdio.h>` statement.
2.  The `int main()` function is defined, which is the entry point of the program. The function is declared with an integer return type, indicating that the program will return an integer value upon completion.
3.  A variable named `fahrenheit` is declared with the `long double` data type. This variable will store the temperature entered by the user in Fahrenheit scale.
4.  A message is displayed on the screen asking the user to enter the temperature in Fahrenheit scale using the `printf()` function.
5.  The `scanf()` function is used to read the temperature entered by the user from the standard input stream and store it in the `fahrenheit` variable.
6.  The temperature entered in Fahrenheit is converted to Celsius using the conversion formula `Celsius = (Fahrenheit - 32) * 5/9`.
7.  The converted temperature is then printed on the screen in the form of a message using the `printf()` function.
8.  The program ends by returning 0 using the `return` statement, indicating that the program has completed execution successfully.

Overall, the program prompts the user to enter a temperature in Fahrenheit, converts it to Celsius, and then displays the converted temperature on the screen.

## The Program

```c
#include<stdio.h>
int main()
{
    long double fahrenheit;  // Declare variables for temperature in Celsius and Fahrenheit scales
    
    printf("Enter the temperature in fahrenheit scale:- ");  // Prompt user to enter temperature in Fahrenheit
    scanf("%LF", &fahrenheit);  // Read temperature in Fahrenheit from user input
    
    // Convert temperature to Celsius using the conversion formula and Print the temperature in Celsius
    
    printf("\nThe temperature in celsius scale is %LF\n", ((fahrenheit - 32) * 5/9));  
    
    return(0);  // End the program
}
```

## The Variable Description

| **Variable Identifier** | **Variable Type** | **Description** |
| --- | --- | --- |
| `fahrenheit` | `long double` | stores the temperature in fahrenheit scale |

## The Output

```
Enter the temperature in fahrenheit scale:- 32

The temperature in celsius scale is 0.000000
```

## File Links
1. [Output Screenshot](../screenshots/fahrenheitToCelsius.png)
2. [Source Code](../src/fahrenheitToCelsius.c)
3. [Variables Description](../variableDescription/fahrenheitToCelsius.md)
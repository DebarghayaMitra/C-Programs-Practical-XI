# Program to convert from celsius to fahrenheit scale
## The Introduction

The program prompts the user to enter a temperature in Celsius, then reads the temperature from the user as input. The program then converts the temperature from Celsius to Fahrenheit using the conversion formula F = (C * 9/5) + 32, where F is the temperature in Fahrenheit and C is the temperature in Celsius. Finally, the program prints the temperature in Fahrenheit to the console.

In summary, the program is a simple temperature converter that converts a temperature in Celsius to Fahrenheit.

## The Working Principle

The program works in the following way:

1.  It declares a variable called `celsius` of the `long double` data type to store the temperature in Celsius.
2.  It displays a prompt asking the user to enter the temperature in Celsius, using the `printf` function.
3.  It reads the user input using the `scanf` function and stores it in the `celsius` variable.
4.  It calculates the temperature in Fahrenheit using the formula F = (C * 9/5) + 32, where F is the temperature in Fahrenheit and C is the temperature in Celsius.
5.  It displays the result using the `printf` function in a formatted string along with the converted temperature in Fahrenheit.
6.  The program ends by returning 0, indicating successful execution.

Overall, the program prompts the user to enter a temperature in Celsius, converts it to Fahrenheit using a formula, and displays the result to the user.

## The Program

```c
#include<stdio.h>
int main()
{
    long double celsius;  // Declare variables for temperature in Celsius and Fahrenheit scales
    
    printf("Enter the temperature in celsius scale:- ");  // Prompt user to enter temperature in Celsius
    scanf("%LF", &celsius);  // Read temperature in Celsius from user input
    
    // Convert temperature to Fahrenheit using the conversion formula and Print the temperature in Fahrenheit
    printf("\nThe temperature in fahrenheit scale is %LF \n", ((celsius * 9/5) + 32));  

    return(0);  // End the program
}

```

## The Variable Description

| **Variable Identifier** | **Variable Type** | **Description** |
| --- | --- | --- |
| `celsius` | `long double` | stores the temperature in celsius scale |


## The Output

```
Enter the temperature in celsius scale:- 0 

The temperature in fahrenheit scale is 32.000000 
```

## File Links
1. [Output Screenshot](../screenshots/celsiusToFahrenheit.png)
2. [Source Code](../src/celsiusToFahrenheit.c)
3. [Variables Description](../variableDescription/celsiusToFahrenheit.md)
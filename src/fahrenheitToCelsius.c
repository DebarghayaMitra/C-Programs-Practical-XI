#include<stdio.h>
int main()
{
    long double celsius, fahrenheit;  // Declare variables for temperature in Celsius and Fahrenheit scales
    
    printf("Enter the temperature in fahrenheit scale:- ");  // Prompt user to enter temperature in Fahrenheit
    scanf("%LF", &fahrenheit);  // Read temperature in Fahrenheit from user input
    
    // Convert temperature to Celsius using the conversion formula and Print the temperature in Celsius
    
    printf("\nThe temperature in celsius scale is %LF\n", ((fahrenheit - 32) * 5/9));  
    
    return(0);  // End the program
}

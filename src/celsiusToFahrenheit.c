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

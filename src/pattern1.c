/*
The following code prints out the following pattern
●
●●
●●●
●●●●
*/

#include <stdio.h>

int main()
{
    unsigned long lines = 0;  // variable to store the number of lines in the pattern
    unsigned long i = 0, j = 0;  // loop counters
    printf("Enter the number of lines you want: ");
    scanf ("%lu", &lines);  // getting input from user

    printf("\nHere is the pattern: \n");
    for (i = 1; i <= lines; i++, printf("\n"))  // loop to iterate over the lines
    {
        for (j = 1; j <= i; j++, printf("●"));  // loop to print the symbols in each line
    }

    return 0;  // exit program
}

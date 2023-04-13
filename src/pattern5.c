/*
The following code prints out the following pattern
1
12
123
1234
12345
*/

#include <stdio.h>
int main()
{
    unsigned long lines = 0; // initialize a variable to hold the number of lines
    unsigned long i = 0, j = 0; // initialize loop counters
    printf("Enter the number of lines you want: ");
    scanf ("%lu", &lines); // read in the number of lines
    printf("\nHere is the pattern: \n");
    for (i = 1; i <= lines; i++, printf("\n")) // loop through each line
    {
        for (j = 1; j <= i; printf("%lu", j++)); // loop through each character in the line and print the current value of j
    }
    return 0; // exit the program
}

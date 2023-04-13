/*
The following code prints out the following pattern
1
22
333
4444
55555
*/

#include <stdio.h>

int main()
{
    unsigned long lines = 0;
    unsigned long i = 0, j = 0;
    
    // Prompt user to enter number of lines
    printf("Enter the number of lines you want: ");
    scanf ("%lu", &lines);
    
    // Print the pattern header
    printf("\nHere is the pattern: \n");
    
    // Loop through the lines of the pattern
    for (i = 1; i <= lines; i++, printf("\n"))
    {
        // Loop through each character in the line
        for (j = 1; j <= i; j++, printf("%lu", i));
    }
    
    return 0;
}

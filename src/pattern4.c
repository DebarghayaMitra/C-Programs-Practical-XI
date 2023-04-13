/*
The following code prints out the following pattern
55555
4444
333
22
1
*/

#include <stdio.h>

int main()
{
    unsigned long lines = 0;
    unsigned long i = 0, j = 0;

    // Prompt user to enter number of lines
    printf("Enter the number of lines you want: ");
    scanf ("%lu", &lines);

    // Print pattern in reverse order
    printf("\nHere is the pattern: \n");
    for (i = lines; i >= 1; i--, printf("\n"))
    {
        // Print the value of 'i' in each row 'i' times
        for (j = 1; j <= i; j++, printf("%lu", i));
    }

    return 0;
}

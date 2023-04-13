/*
The following code prints out the following pattern
●●●●
●●●
●●
●
*/

#include <stdio.h>

int main() {
    unsigned long lines = 0; // variable to store the number of lines
    unsigned long i = 0, j = 0; // loop variables

    // prompt user to enter number of lines
    printf("Enter the number of lines you want: ");
    scanf("%lu", &lines);

    // print heading
    printf("\nHere is the pattern: \n");

    // outer loop to iterate over each line
    for (i = lines; i >= 1; i--, printf("\n")) {

        // inner loop to print '●' for each position in the line
        for (j = 1; j <= i; j++, printf("●"));
    }

    return 0;
}

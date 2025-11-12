#include <stdio.h>

int main() {
    int start, end, sum = 0;
     /* name: kazi naveeel
        UIN;251P020
        class:comps
        */
    // Taking input from the user
    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    // Loop through all numbers between start and end
    for (int i = start; i <= end; i++) {
        if (i % 2 != 0) {  // Check if the number is odd
            sum += i;
        }
    }

    // Display the result
    printf("The sum of all odd numbers between %d and %d is: %d\n", start, end, sum);

    return 0;
}

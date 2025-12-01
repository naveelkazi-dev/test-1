/* Aim : WAP to print array elements in reverse order using pointer
   Name : KAZI NAVEEL
   UIN  : 251P020
   Roll No : 19
   Division : C1
*/

#include <stdio.h>

int main() {
    int arr[5], i;
    int *p;

    // Input array elements
    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Pointer pointing to last element
    p = &arr[4];

    // Print in reverse order
    printf("\nArray in Reverse Order:\n");
    for(i = 4; i >= 0; i--) {
        printf("%d ", *p);
        p--;   // Move pointer backward
    }

    return 0;
}

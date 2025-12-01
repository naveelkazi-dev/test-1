/* Aim : WAP to find the Largest element in an array.
   Name : KAZI NAVEEL
   Roll No : 19
   UIN : 251P020
   Division : C1
*/

#include <stdio.h>

int main()
{
    int n, i, a[100], large;  // Integer array of size 100

    printf("Enter the number of elements = ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter a value = ");
        scanf("%d", &a[i]);
    }

    large = a[0];   // Assume first element is largest

    for(i = 1; i < n; i++)
    {
        if(large < a[i])
            large = a[i];
    }

    printf("\nLargest Number is = %d", large);

    return 0;
}

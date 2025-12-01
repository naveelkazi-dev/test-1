/* Aim : WAP to perform addition of two matrices.
   Name : KAZI NAVEEL
   Roll No : 19
   UIN : 251P020
   Division : C1
*/

#include <stdio.h>

int main()
{
    int a[50][50], b[50][50], c[50][50], i, j, n;

    printf("Addition of two Matrices :\n\n");

    printf("Input the size of the square matrix : ");
    scanf("%d", &n);

    printf("\nInput elements in the first matrix :\n\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("\nInput elements in the second matrix :\n\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("element - [%d],[%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    printf("\nThe first matrix is : \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }

    printf("\nThe Second matrix is : \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            printf("%d\t", b[i][j]);
        printf("\n");
    }

    printf("\nThe Addition of two matrix is :\n\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

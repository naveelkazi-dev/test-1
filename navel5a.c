/* name: KAZI NAVEEL
  Uin : 251P020
  roll no: 19
  div : C1 */
#include <stdio.h>

int factorialIterative(int num) // function definition
{
    int prod = 1;

    for (int i = 1; i <= num; i++)
    {
        prod *= i;  // prod = prod * i
    }

    return prod;
}

int main()
{
    int num;

    printf("\t\t\t**Iterative Factorial-Function**\n\n"); // Title
    printf("Enter Number = ");
    scanf("%d", &num);

    printf("Factorial of %d is %d", num, factorialIterative(num)); // function call

    return 0;
}

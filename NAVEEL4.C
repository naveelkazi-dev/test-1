/* name: KAZI NAVEEL
  Uin : 251P020
  roll no: 19
  div : C1 */
#include <stdio.h>

int isPrimeNumber(int num)
{
    if (num <= 1)
        return 0;

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int start_num, end_num, i;

    printf("\t\t\t**Prime Number Finder**\n\n");

    printf("Enter Starting Number = ");
    scanf("%d", &start_num);

    printf("Enter Ending Number = ");
    scanf("%d", &end_num);

    // Ensure starting point is at least 2
    i = (start_num <= 1) ? 2 : start_num;

    printf("Prime Numbers Between %d and %d = ", start_num, end_num);

    while (i <= end_num)
    {
        if (isPrimeNumber(i))
        {
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}

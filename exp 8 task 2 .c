/* Aim : WAP to check if the entered string is palindrome or not.
   Name : KAZI NAVEEL
   Roll No : 19
   UIN : 251P020
   Division : C1
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i;

    printf("\t\t*** Palindrome Finder ***\n\n\n");
    printf("Enter Your String : ");
    gets(str);

    for(i = 0; i < strlen(str) - 1; i++)
    {
        if(str[i] != str[strlen(str) - 1 - i])
        {
            printf("\nThe String is NOT a Palindrome\n");
            return 0;
        }
    }

    printf("\nThe String is Palindrome.\n");

    return 0;
}

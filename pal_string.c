#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    char b[100];

    int flag = 0;
    printf("enter the string");
    gets(a);
    int size = strlen(a);
    for (int i = 0; i < size; i++)
    {
        b[i] = a[size - i - 1];
    }

    for (int i = 0; i < size; i++)
    {
        if (a[i] != b[i])
        {
            flag = 1;
            printf("Not a palindrome");
            break;
        }
    }

    if (flag == 0)
    {
        printf("Palindrome");
    }
    return 0;
} 
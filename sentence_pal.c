#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    char b[100];
    char temp[100];
    int j = 0;

    int flag = 0;
    printf("enter the string");
    gets(temp);
    // in temp we take in the string with spaces and remove them and store them in a[]
    for (int i = 0; i < strlen(temp); i++)
    {
        if (temp[i] != ' ')
        {
            a[j++] = temp[i];
        }
    }
    a[j] = '\0';

    for (int i = 0; i < strlen(a); i++)
    {
        printf("%c", a[i]);
    }

    printf("\n");
    // check if the string is palindrome
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
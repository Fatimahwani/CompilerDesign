#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main()
{
    char str[80], substring[10];
    int count1 = 0, count2 = 0, i, j, flag;
 
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    printf("Enter a substring:");
    fgets(substring,sizeof(substring),stdin);
    while (str[count1] != '\0')
        count1++;
    while (substring[count2] != '\0')
        count2++;
    for (i = 0; i <= count1 - count2; i++)
    {
        for (j = i; j < i + count2; j++)
        {
            flag = 1;
            if (str[j] != substring[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
        printf("String Found!");
    else
        printf("String Not Found!");
 
    return 0;
}

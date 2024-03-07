#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[100];
    printf("Enter the string:");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; i < strlen(str); i++)
    {

        if (str[i] == '{' && str[i + 1] == '(')
        {

            printf("7");
            i++;
        }

       
        else if (str[i] == '(')
        {
            printf("0");
        }
       
        else if (isdigit(str[i]))
        {
            while(isdigit(str[i])){
                i++;
            } 
            printf("2");
            if (str[i] == 43)
        {

            printf("3");
        }
        else if (str[i] == 42)
        {

            printf("4");
        }

        else if (str[i] == 47)
        {

            printf("5");
        }

        else if (str[i] == 45)
        {

            printf("6");
        }
         else if (str[i] == ')' && str[i + 1] == '}')
        {

            printf("8");
            break;
        }
         else if (str[i] == ')')
        {
            printf("1");
        }
            
        }

        else
        {
            printf("not valid");
        }
    }
    return 0;
}
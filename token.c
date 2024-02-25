#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];
    printf("Enter a string: ");
    gets(input);

    int tokenLength = 0;
    int whiteSpaceCount = 0;

    printf("Individual token lengths:\n");

    for (int i = 0; i < strlen(input); i++)
    {
        if (input[i] == ' ' || input[i] == '\t' || input[i] == '\n')
        {
            // Print token length before resetting
            if (tokenLength > 0)
            {
                printf("Token length: %d\n", tokenLength);
            }
            // Reset token length for the next token
            tokenLength = 0;

            whiteSpaceCount++;
        }
        else
        {
            tokenLength++;
        }
    }

    // Print the length of the last token (if any)
    if (tokenLength > 0)
    {
        printf("Token length: %d\n", tokenLength);
    }

    printf("Total white spaces: %d\n", whiteSpaceCount);

    return 0;
}
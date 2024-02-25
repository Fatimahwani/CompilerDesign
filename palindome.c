#include <stdio.h>
int main()
{

    int ori_num = 0, num, rev_no = 0, rem = 0;
    printf("enter the number");
    scanf("%d", &num);
    ori_num = num;

    while (num > 0)
    {
        rem = num % 10;
        rev_no = rev_no * 10 + rem;
        num = num / 10;
    }
    if (ori_num == rev_no)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
    return 0;
}
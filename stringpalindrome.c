#include <stdio.h>

int main()
{
    int i, j = 0, count = 0, flag = 0;
    char str[100];
    printf("Enter the string: ");
    scanf("%s", str);

    while (str[j] != '\0')
    {

        count++;
        j++;
    }
    printf("Count is %d\n", count);
    for (i = 0; i <count; i++)
    {

        if (str[i] != str[count - 1-i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("palindrome");
    }
    else
    {
        printf(" Not palindrome");
    }
}

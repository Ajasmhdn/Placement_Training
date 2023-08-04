#include <stdio.h>

int main()
{

    char a[100];
    char count[26] = {'\0'};
    printf("Enter the string : ");
    scanf("%s", a);
    for (int i = 0; a[i]; i++)
    {
        count[a[i] - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] >= 2)
            printf("%c - %d\n", i + 97, count[i]);
    }
}
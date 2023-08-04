#include <stdio.h>

int main()
{

    char a[100];
    char count[26] = {'\0'};
    printf("Enter the string : ");
    scanf("%[^\n]s", a);
    for (int i = 0; a[i]; i++)
    {

        if (a[i] >= 97 && a[i] <= 122)
            count[a[i] - 97]++;
        else
            count[a[i] - 65]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (count[i] >= 2)
            printf("%c - %d\n", i + 97, count[i]);
    }
}
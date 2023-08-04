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
            printf("%c",a[i]);
        else
            printf("%c",a[i]+32);
    }

}
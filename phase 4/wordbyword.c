#include <stdio.h>

int main()
{

    char a[100];

    printf("Enter the string : ");
    scanf("%[^\n]s", a);
    int i, start = 0, end = 0;

    for (i = 0; a[i]; i++)
    {

        if (a[i] == ' ')
        {
            for(int k = start; k <= end - 1; k++){
                printf("%c", a[k]);
                     if (a[k] >= 97 && a[k] <= 122)
            printf("%c",a[k]);
        else
            printf("%c",a[k]+32);
    }

                }

            printf("\n");
            start = end + 1;
            end++;
        }
        else
        {
            if (a[i + 1] == '\0')
                a[i + 1] = ' ';
            end++;
        }
    }

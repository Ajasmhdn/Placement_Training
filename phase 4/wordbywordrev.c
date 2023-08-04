#include <stdio.h>
void rev(char a[], int start, int end)
{

    for (int i = end; i >= start; i--)
    {

        printf("%d", a[i]);
        printf(" ");
    }
}
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
            for (int k = start; k <= end - 1; k++)
                rev(a, start, end - 1);

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
}
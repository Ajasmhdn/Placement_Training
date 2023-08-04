#include <stdio.h>
void urev(char a[], int start, int end)
{

    for (int i = end; i >= start; i--)
    {
        if (a[i] >= 97 && a[i] <= 122)
        {
            printf("%c", a[i] - 32);
        }
        else
            printf("%c", a[i]);
    }
    printf(" ");
}
void lrev(char a[], int start, int end)
{

    for (int i = end; i >= start; i--)
    {
        if (a[i] >= 65 && a[i] <= 90)
        {
            printf("%c", a[i] + 32);
        }
        else
            printf("%c", a[i]);
    }
    printf(" ");
}
int main()
{

    char a[100];
    int s;
    printf("Enter the string : ");
    scanf("%[^\n]%n", a, &s);
    int i, start = 0, end = 0, count = 0;
    printf("%d", s);
    for (i = 0; i <= s; i++)
    {

        if (a[i] == ' ')
        {

            count++;

            if (count % 2 != 0)
                urev(a, start, end - 1);
            else
                lrev(a, start, end - 1);

            printf("\n");
            start = i + 1;
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

/*
0-127

0-null
1-31-control keys
32-space
48-57 -  0 to 9
65-90 - uppercase
97-122 - lowercase
remaining symbols




*/
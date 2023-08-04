#include <stdio.h>

int main()
{

    char a[100];
    char ch;
    int s, num = 0;
    printf("Enter the string : ");
    scanf("%[^\n]%n", a, &s);

    for (int i = 0; i <= s; i++)
    {

        if (a[i] >= 48 && a[i] <= 57)
        {

            num = num * 10 + a[i] - 48;

            if (a[i + 1] < 48 || a[i + 1] > 57)
            {
                for (int k = 0; k < num; k++)
                {
                    printf("%c", ch);
                }
                num = 0;
            }
        }
        else
            ch = a[i];
    }
}

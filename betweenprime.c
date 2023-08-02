#include <stdio.h>

int main()
{

    int i, j, flag = 0;
    for (j = 50; j <= 100; j++)
    {
        for (i = 2; i < j / 2; i++)
        {
            if (j % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf("%d \t", j);
        }
        flag = 0;
    }
}

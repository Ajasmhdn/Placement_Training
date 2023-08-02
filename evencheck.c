#include <stdio.h>

int main()
{

    int i, n = 101, count = 0;
    for (i = 25; i < n; i++)
    {
        if (i % 2 == 0)
        {
            count++;
        }
    }
    printf(" the no: of even numbers are %d\n", count);
}

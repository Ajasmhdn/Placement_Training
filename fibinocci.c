#include <stdio.h>

int main()
{

    int i, n;
    int n1, n2, n3;
    scanf("%d", &n);
    n1 = 0;
    n2 = 1;
    printf("%d\t", n1);
    printf("%d", n2);
    for (i = 2; i < n; i++)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf(" %d ", n3);
    }
}
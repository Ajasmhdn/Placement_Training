#include <stdio.h>

int main()
{

    int i, num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    for (i = 1; i <= num2; i++)
    {
        num1++;
    }

    printf("The sum is: %d\n", num1);

    return 0;
}
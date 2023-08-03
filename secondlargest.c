#include <stdio.h>

int main()
{
    int n, flag = 0,ss=0;
    printf("Enter the size: ");
    scanf("%d", &n);

    int arr[n], small;
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    small = arr[0];

    for (int i = 1; i < n; i++)
    {

        if (arr[i] < small)
        {
            ss = small;
            small = arr[i];
        }

        // this statement only executes once

        else if (flag == 0 && ss==0)
        {
            ss = arr[i];
            flag = 1;
        }
        // this statement intiliazes the ss
        else if (arr[i] < ss)
        {
            ss = arr[i];
        }
    }

    printf("\n");
    printf("%d\n ", small);
    printf("%d ", ss);

    return 0;
}

#include <stdio.h>
#include <stdbool.h>

int main()
{

    char a[100], b[100];
    char en[26];
    int flag = 0;
    bool use[26] = {false};
    printf("Enter the string : ");
    scanf("%s %s", a, b);
    for (int i = 0; a[i]; i++)
    {
        if (en[a[i] - 97] == '\0' && use[b[i] - 97] == false)
        {
            en[a[i] - 97] = b[i];
            use[b[i] - 97] = true;
        }
        else if (en[a[i] - 97] == b[i])
        {
            continue;
        }
        else if (en[a[i] - 97] != b[i])
        {
            flag = 1;
            printf("Not Isomorphic\n");
            break;
        }
    }
    if (flag == 0)
        printf("Print Isomorphic");
}
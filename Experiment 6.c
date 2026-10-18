#include <stdio.h>
int main()
{
    int i, j, n, num;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        for(j = 1; j <= n - i; j++)
            printf("  ");

        num = 1;

        for(j = 0; j <= i; j++)
        {
            printf("%4d", num);
            num = num * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}

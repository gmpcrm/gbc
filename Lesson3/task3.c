#include <stdio.h>

int main()
{
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 < num2 && num2 < num3)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
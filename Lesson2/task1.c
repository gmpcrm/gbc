#include <stdio.h>

int main()
{
    int num1, num2, num3, sum;

    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;

    printf("%d+%d+%d=%d\n", num1, num2, num3, sum);

    return 0;
}
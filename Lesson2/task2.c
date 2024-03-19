#include <stdio.h>

int main() 
{
    int num1, num2, num3;
    int sum, product;
    scanf("%d %d %d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    product = num1 * num2 * num3;

    printf("%d+%d+%d=%d\n", num1, num2, num3, sum);
    printf("%d*%d*%d=%d\n", num1, num2, num3, product);

    return 0;
}
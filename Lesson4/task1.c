#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, sum = 0;
    printf("Введите два числа через пробел по модулю не больше 100.\n");
    scanf("%d %d", &a, &b);

    if(abs(a) > 100 || abs(b) > 100) {
        printf("Числа должны быть по модулю не больше 100.\n");
        return 1;
    }

    for (int i = a; i <= b; i++) {
        sum += i * i;
    }

    printf("%d", sum);
    return 0;
}

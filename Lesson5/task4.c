#include <stdio.h>

int sum_to_n(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int N;
    scanf("%d", &N);
    printf("Сумма чисел от 1 до %d равна %d\n", N, sum_to_n(N));
    return 0;
}

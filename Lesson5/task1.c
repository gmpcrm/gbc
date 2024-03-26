#include <stdio.h>

int main() {
    int N;

    printf("Введите число от 1 до 64\n");
    scanf("%d", &N);

    if (N < 1 || N > 64) {
        printf("Введите число от 1 до 64\n");
        return 1;
    }

    unsigned long long result = 1ULL << (N - 1);
    printf("%llu", result);
    
    return 0;
}

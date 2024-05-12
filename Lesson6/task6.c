#include <stdio.h>

int recurs_power(int n, int p) {
    if (p == 0) return 1; // Любое число в степени 0 равно 1
    return n * recurs_power(n, p - 1); // Умножаем число на результат функции с уменьшенной степенью
}

int main() {
    int n = 3, p = 4;
    printf("%d в степени %d равно %d\n", n, p, recurs_power(n, p));
    return 0;
}
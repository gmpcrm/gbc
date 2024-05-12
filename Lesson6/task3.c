#include <stdio.h>

int count_ones(int num) {
    if (num == 0) {
        return 0;
    }
    return (num % 2) + count_ones(num / 2); // Считаем единицы в двоичном представлении
}

int main() {
    int num = 255;
    printf("Количество 1: %d\n", count_ones(num));
    return 0;
}
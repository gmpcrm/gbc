#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int last_digit_a = *(int*)a % 10;
    int last_digit_b = *(int*)b % 10;
    return last_digit_a - last_digit_b;
}

int main() {
    int numbers[10] = {109, 118, 100, 51, 62, 73, 1007, 16, 4, 555};

    qsort(numbers, 10, sizeof(int), compare);

    printf("Отсортированный массив: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

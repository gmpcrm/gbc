#include <stdio.h>

int main() {
    int numbers[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int result[12];

    for (int i = 0; i < 12; i++) {
        result[(i + 4) % 12] = numbers[i];
    }

    printf("Результат сдвига: ");
    for (int i = 0; i < 12; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}

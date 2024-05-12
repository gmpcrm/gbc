#include <stdio.h>

int main() {
    int numbers[5] = {4, 15, 3, 10, 14};
    int min = numbers[0];

    for (int i = 1; i < 5; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    printf("Минимальное число: %d\n", min);

    return 0;
}

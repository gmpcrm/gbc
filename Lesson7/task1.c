#include <stdio.h>

int main() {
    int numbers[5] = {4, 15, 3, 10, 14}; // Пример массива
    float sum = 0.0;

    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    float average = sum / 5;
    printf("Среднее арифметическое: %.3f\n", average);

    return 0;
}

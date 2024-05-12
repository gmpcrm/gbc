#include <stdio.h>

int main() {
    int numbers[] = {40, 105, 203, 1, 14, 1000, 22, 33, 44, 55};
    int result[10];
    int j = 0;

    for (int i = 0; i < 10; i++) {
        if ((numbers[i] / 10) % 10 == 0) {
            result[j++] = numbers[i];
        }
    }

    printf("Числа, удовлетворяющие условию: ");
    for (int i = 0; i < j; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}

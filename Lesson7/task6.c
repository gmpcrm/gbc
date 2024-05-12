#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int numbers[] = {4, 1, 2, 1, 11, 2, 34, 11, 0, 11};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // для того чтобы не делать вложенный цикл
    qsort(numbers, size, sizeof(int), compare);

    int max_count = 1, count = 1, result = numbers[0];

    for (int i = 1; i < size; i++) {
        if (numbers[i] == numbers[i - 1]) {
            count++;
        } else {
            if (count > max_count) {
                max_count = count;
                result = numbers[i - 1];
            }            
            count = 1;
        }
    }

    if (count > max_count) {
        max_count = count;
        result = numbers[size - 1];
    }

    printf("Число, встречающееся чаще других: %d\n", result);

    return 0;
}

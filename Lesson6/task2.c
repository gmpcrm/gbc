#include <stdio.h>

void print_range(int a, int b) {
    if (a < b) {
        printf("%d ", a);
        print_range(a + 1, b); // Рекурсивный вызов для следующего числа в порядке возрастания
    } else if (a > b) {
        printf("%d ", a);
        print_range(a - 1, b); // Рекурсивный вызов для следующего числа в порядке убывания
    } else {
        printf("%d ", a); // Вывод последнего числа
    }
}

int main() {
    int a = 2, b = 7;
    print_range(a, b);
    return 0;
}
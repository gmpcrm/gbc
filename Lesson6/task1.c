#include <stdio.h>

void print_num(int num) {
    if (num > 9) {
        print_num(num / 10); // Рекурсивный вызов функции для вывода предыдущих цифр
    }
    printf("%d ", num % 10); // Вывод последней цифры
}

int main() {
    int num = 54321;
    print_num(num);
    return 0;
}
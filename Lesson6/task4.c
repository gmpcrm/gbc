#include <stdio.h>
#include <stdlib.h>

// Функция для рекурсивного вывода нечетных чисел из строки
void printOddNumbers(char* s) {
    // Проверяем, не пуста ли строка
    if (*s == '\0') return;

    // Переменная для хранения текущего числа
    int num;

    // Читаем число из строки
    if (sscanf(s, "%d", &num) == 1) {
        // Если число равно 0, завершаем рекурсию
        if (num == 0) return;

        // Если число нечетное, выводим его
        if (num % 2 != 0) {
            printf("%d ", num);
        }

        // Находим следующее число в строке
        while (*s != ' ' && *s != '\0') s++;
        while (*s == ' ') s++;

        // Рекурсивный вызов функции с новой позиции в строке
        printOddNumbers(s);
    }
}

int main() {
    char s[] = "12 13 173 28 19 0";
    printOddNumbers(s);
    return 0;
}

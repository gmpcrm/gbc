#include <stdio.h>

int acounter() {
    char c = getchar();
    if (c == '.') return 0; // Остановка при встрече точки
    int count = (c == 'a') ? 1 : 0;
    return count + acounter(); // Считаем 'a' и продолжаем рекурсию
}

int main() {
    printf("Введите строку заканчивающуюся точкой:\n");
    printf("Количество 'a': %d\n", acounter());
    return 0;
}
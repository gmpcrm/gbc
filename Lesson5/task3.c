#include <stdio.h>

int is_happy_number(int n) {
    int sum = 0, product = 1, digit;

    while (n > 0) {
        digit = n % 10;
        sum += digit;
        product *= digit;
        n /= 10;
    }

    return sum == product;
}

int main() {
    int n;
    scanf("%d", &n);
    
    if (is_happy_number(n)) {
        printf("YES");
    } else {
        printf("NO");
    }
    
    return 0;
}

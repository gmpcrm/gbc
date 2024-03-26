#include <stdio.h>

int main() {
    int num, temp;
    scanf("%d", &num);
    
    int allEven = 1; 
    
    while (num > 0) {
        temp = num % 10;
        if (temp % 2 != 0) {
            allEven = 0;
            break;
        }
        num /= 10;
    }
    
    if (allEven) {
        printf("YES");
    } else {
        printf("NO");
    }
    
    return 0;
}

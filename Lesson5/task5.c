#include <stdio.h>

int main() {
    char str[1001];
    scanf("%1000s", str);
    int counter = 0;

    for (int i = 0; str[i] != '.'; i++) {
        if (str[i] == '(') {
            counter++;
        } else if (str[i] == ')') {
            counter--;
            if (counter < 0) {
                printf("NO\n");
                return 0;
            }
        }
    }
    
    if (counter == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
    char num[100];
    int i, sum = 0;
    float average;
    scanf("%s", num);

    for (i = 0; i < strlen(num); i++) {
        sum += num[i] - '0';
    }

    average = (float)sum / strlen(num);

    printf("%.2f\n", average);

    return 0;
}
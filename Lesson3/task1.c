#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int n, i, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The largest number is: %d\n", max);

    return 0;
}

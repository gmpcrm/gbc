#include <stdio.h>

#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int n, i, min;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    min = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("The smallest number is: %d\n", min);

    return 0;
}

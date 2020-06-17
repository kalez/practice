#include <stdio.h>
#include <stdlib.h>

void printArray(int *arr[], int r, int c)
{
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            printf("%d ", *(*(arr + i) + j));
}
int main()
{
    int c = 4, r = 3, count = 0, *arr[r];

    for (int i = 0; i < r; i++)
        arr[i] = (int *)malloc(c * sizeof(int));

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        {
            *(*(arr + i) + j) = ++count;
        }
    printArray(arr, r, c);
    return 0;
}

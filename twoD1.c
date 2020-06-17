#include<stdio.h>
#include<stdlib.h>


void printArray( int *arr, int r, int c)
{
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            printf("%d ", *(arr + i * c + j));
}
int main()
{
    int c = 4, r = 3, count = 0, *arr;

    arr = (int* )malloc(r * c * sizeof(int));

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            *(arr + i * c + j) = ++count;

    printArray(arr, r, c );
    return 0;

    

}



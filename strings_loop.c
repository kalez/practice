#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printfArray(int *a, int len)
{
    if ( a == NULL) return;
    for ( int  i = 0; i < len; i++)
    {
        printf("%d %d %d\n", i, *(a+i), a[i], i[a]);
    }
}

void printTwoD(int arr[], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf(" -->%d<--\n", *(*(arr + i) + j));
            k++;
        }
    }
}
{

}
int main()
{
    int row = 0, col = 0, k = 0;
    printf("Enter the rows and columns : ");
    scanf("%d %d", &row, &col);

    int *a = (int *)malloc(col * sizeof(int));

    printf("----%d, \n\n ", *(a + 1));

    //printfArray(a, col);

    int *arr[col]; int *p;
    //arr = (int *)malloc(row * sizeof(int));

    for(int i = 0; i < row; i++)
    {
        (arr + i) = (int *)malloc(col);
    }

    for ( int i = 0; i < row; i++)
    {
        for ( int j = 0; j < col; j++)
        {
            *(*(p + i) + j) = k;
            k++;
        }
    }

    printTwoD(arr, row, col);

    
    return 0;
}

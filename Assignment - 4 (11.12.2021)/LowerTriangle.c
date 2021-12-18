//Write c Program to print lower triangle of 2D matrix

#include <stdio.h>

int main()
{
    int arr[20][20], rows, columns;
    printf("Enter the rows : ");
    scanf("%d", &rows);
    printf("Enter the columns : ");
    scanf("%d", &columns);

    printf("Enter the elements : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Enter the value for arr[%d][%d] : ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nLower Triangle : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if(i >= j)
            {
                printf("%d\t", arr[i][j]);
            } else {
                printf("0\t");
            }
        }

        printf("\n");
    }
        return 0;
}
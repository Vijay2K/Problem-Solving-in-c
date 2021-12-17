//write c program to find transpose matrix using 2D array

#include <stdio.h>

int main()
{
    int arr[20][20], transpose[20][20], rows, columns;

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

            transpose[j][i] = arr[i][j];
        }
    }

    printf("\nEntered Matrix : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nThe Transpose matrix : \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", transpose[i][j]);
        }

        printf("\n");
    }

        return 0;
}
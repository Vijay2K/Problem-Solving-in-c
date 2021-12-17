//write c program for matrix multiplication using 2D array

#include <stdio.h>

int main()
{
	int a[10][10], b[10][10], c[10][10], rows, columns;

	printf("Enter the rows : ");
	scanf("%d", &rows);
	printf("Enter the columns : ");
	scanf("%d", &columns);

	printf("MATRIX A : \n");
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			printf("Enter the value for a[%d][%d] : ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("\n MATRIX B : \n");
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			printf("Enter the value for b[%d][%d] : ", i, j);
			scanf("%d", &b[i][j]);
		}
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k < columns; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	printf("Multiplication of MATRIX A and MATRIX B : \n");
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			printf("%d \t", c[i][j]);
		}

		printf("\n");
	}

	return 0;
}
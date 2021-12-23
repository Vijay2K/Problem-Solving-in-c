//Write a C program to add two matrix using pointers

#include <stdio.h>
#include <string.h>

int main()
{
	int a[20][20], b[20][20], c[20][20], rows, columns, i, j;
	
	printf("Enter the rows : ");
	scanf("%d", &rows);
	printf("Enter the columns : ");
	scanf("%d", &columns);
	
	printf("\n\nEnter the values for A matrix\n");
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < columns; j++)
		{
			printf("Enter the value for a[i][j] : ");
			scanf("%d", (*(a + i) + j));
		}
	}
	
	printf("\n\nEnter the values for B matrix\n");
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < columns; j++)
		{
			printf("Enter the value for b[i][j] : ");
			scanf("%d", *(b + i) + j);
		}
	}
	
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < columns; j++)
		{
			*(*(c + i) + j) = *(*(a + i) + j) + *(*(b + i) + j);
		}
	}
	
	printf("\n\nSum of A matrix and B matrix : \n");
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < columns; j++)
		{
			printf("%d\t", *(*(c + i) + j));
		}
		printf("\n");
	}
	
	
	return 0;
}

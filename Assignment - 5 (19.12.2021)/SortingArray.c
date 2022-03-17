//Write a C program to sort array using pointers.

#include <stdio.h>

int main()
{
	int arr[20], size, i, j;
	int *p = &arr;
	printf("Enter the size : ");
	scanf("%d", &size);
	
	for(i = 0; i < size; i++)
	{
		printf("Enter the value for arr[%d] : ", i);
		scanf("%d", p + i);
	}
	
	for(i = 0; i < size; i++){
		for(j = i + 1; j < size; j++)
		{
			if(*(p + j) < *(p + i))
			{
				int temp = *(p + i);
				*(p + i) = *(p + j);
				*(p + j) = temp; 	
			} 
		}
	}
	
	printf("After sorting : \n");
	for(i = 0; i < size; i++)
	{
		printf("%d\t", *(p + i));
	}
	
	return 0;
}

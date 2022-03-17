//Write a C program to search an element in array using pointers

#include <stdio.h>
#include <string.h>

int main()
{
	int arr[20], size, i, n;
	int *p;
	p = &arr;
	int hasFound;
	
	printf("Enter the size : ");
	scanf("%d", &size);
	
	for(i = 0; i < size; i++)
	{
		printf("Enter the value for arr[%d] : ", i);
		scanf("%d", p + i);
	}
	
	printf("Enter the search element : ");
	scanf("%d", &n);
	
	for(i = 0; i < size; i++)
	{
		hasFound = 0;
		if(*(p + i) == n)
		{
			hasFound = 1;
			break;
		}
	}
	
	printf("\nElements in an array : \n");
	for(i = 0; i < size; i++)
	{
		printf("%d\t", *(p + i));
	}
	
	printf("\n");
	if(hasFound == 1)
	{
		printf("\n %d has found!!", n);
	} else {
		printf("\n %d has not found!!", n);
	}
	
	return 0;
}

//Write a C program to reverse an array using pointers.

#include <stdio.h>
#include <string.h>

int main()
{
	int arr[20], rev[20], size, i, revIndex;
	int *p = &arr;
	int *q = &rev;
		
	printf("Enter the size : ");
	scanf("%d", &size);
	
	revIndex = size - 1;
	
	printf("Enter the elements of an array \n");
	for(i = 0; i < size; i++)
	{
		printf("Enter the value for arr[%d] : ", i);
		scanf("%d", p + i);
	}
	
	for(i = 0; i < size; i++)
	{
		rev[revIndex] = *(p + i);
		revIndex--;
	}
	
	printf("Reverse array : \n");
	for(i = 0; i < size; i++)
	{
		printf("%d\t", *(q + i));
	}
	
	return 0;
}

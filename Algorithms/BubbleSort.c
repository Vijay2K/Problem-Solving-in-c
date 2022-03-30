#include <stdio.h>

int main()
{
	int i, j;
	int size;	
	printf("Enter the size of an array : ");
	scanf("%d", &size);	
	
	int arr[size];
	
	printf("Enter the elements in an array in an unsorted way\n");
	for(i = 0; i < size; i++)
	{
		printf("arr[%d] : ", i);
		scanf("%d", &arr[i]);
	}
	
	printf("Elements in an array before sorting: ");
	for(i = 0; i < size; i++)
	{
		printf("%d  ", arr[i]);
	}
	
	printf("\nElements in an array after sorting using (bubble sort)\n");
	printf("Ascending order\n");
	for(i = 0; i < size; i++)
	{
		for(j = i + 1; j < size; j++)
		{
			if(arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}	
		
		printf("%d  ", arr[i]);
	}
	
	printf("\n\nDecending order\n");
	for(i = 0; i < size; i++)
	{
		for(j = i + 1; j < size; j++)
		{
			if(arr[i] < arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}	
		
		printf("%d  ", arr[i]);
	}
	
	return 0;
}

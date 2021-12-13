#include <stdio.h>

int main()
{
	int n, arr[20], size, i;
	
	printf("Enter the size for an array : ");
	scanf("%d", &size);
	
	for(i = 0; i < size; i++)
	{
		printf("Enter the value for arr[%d] : ", i);
		scanf("%d", &arr[i]);
	}

	printf("Enter the number : ");
	scanf("%d", &n);

	for(i = 0; i < size; i++)
	{
		if(arr[i] == n)
		{
			printf("The %d element is found in at %d index and %d position.", n, i, i + 1);
		}
	}
	
	if(i == size)
	{
		printf("The element not found");
	}
	
	return 0;
}

//inverted half triangle number in ascending order

#include <stdio.h>

int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d", &n);
	
	int i, j;
	for(i = n; i > 0; i--)
	{
		for(j = 1; j <= i; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
	
	return 0;
}

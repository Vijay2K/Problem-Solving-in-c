//inverted half triangle number in descending order

#include <stdio.h>

int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d", &n);
	
	int i, j;
	for(i = 1; i <= n; i++)
	{
		for(j = n; j >= i; j--)
		{
			printf("%d ", j);
		}
		
		printf("\n");
	}
	
	return 0;
}

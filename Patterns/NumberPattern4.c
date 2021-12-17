#include <stdio.h>

int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d", &n);
	
	int i, j;
	for(i = 1; i <= n; i++)
	{
		for(j = 0; j < i; j++)
		{
			printf("%d ", i);
		}
		
		printf("\n");
	}
		
	return 0;
}

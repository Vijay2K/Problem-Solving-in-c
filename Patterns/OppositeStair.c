//opposite stairs pattern

#include <stdio.h>

int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d", &n);
	
	int i, j, k;
	for(i = n; i > 0; i--)
	{
		for(j = 0; j < i - 1; j++)
		{
			printf("  ");
		}
		
		for(k = n; k >= i; k--)
		{
			printf("* ");
		}
		
		printf("\n");
	}
	
	return 0;
}



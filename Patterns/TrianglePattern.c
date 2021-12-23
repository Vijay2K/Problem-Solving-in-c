//star pattern

#include <stdio.h>

int main()
{
	int n, i, space, star;
	printf("Enter the number : ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		for(space = 1; space <= n - i; space++)
		{
			printf("  ");
		}
		
		for(star = 1; star <= (2 * i) - 1; star++)
		{
			printf("* ");
		}
		
		printf("\n");
	}
	
	return 0;
}

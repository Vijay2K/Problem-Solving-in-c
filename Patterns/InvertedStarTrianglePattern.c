//print inverted star triangle pattern

#include <stdio.h>

int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d", &n);
	
	int i, star, space;
	for(i = 0; i < n; i++)
	{
		for(space = 0; space < i; space++)
		{
			printf(" ");
		}
		
		for(star = n; star > i; star--)
		{
			printf("* ");
		}
		
		printf("\n");
	}
	
	return 0;
}

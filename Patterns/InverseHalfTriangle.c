//Inverse Half triangle

#include <stdio.h>

int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d", &n);
	
	int i, j;
	for(i = n; i > 0; i--)
	{
		for(j = 0; j < i; j++)
		{
			printf("*");
		}
		
		printf("\n");
	}
	
	return 0;
}

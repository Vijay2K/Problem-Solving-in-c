#include <stdio.h>

int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d", &n);
	
	int i, j, num = 0;
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j <= i; j++)
		{
			num++;
			printf("%d ", num);
		}
		
		printf("\n");
	}
	
	return 0;
}

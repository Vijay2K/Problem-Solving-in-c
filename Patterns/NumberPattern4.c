/*
output

Enter the number : 5
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

*/

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

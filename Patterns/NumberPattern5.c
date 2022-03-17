/*
output

Enter the number : 5
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/

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

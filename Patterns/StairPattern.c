//Stair Pattern 

/*
output

Enter the number : 5
*
* *
* * *
* * * *
* * * * *

*/

#include <stdio.h>

int main()
{
	int n;
	printf("Enter the number : ");
	scanf("%d", &n);
	
	int i, j;
	for(i = 0; i < n; i++)
	{
		for(j = 0; j <= i; j++)
		{
			printf("* ");
		}
		
		printf("\n");
	}
	
	return 0;
}

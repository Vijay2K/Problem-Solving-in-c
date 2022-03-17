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
	
	int i, space, star;
	for(i = 1; i <= n; i++)
	{
		for(space = 1; space <= n - i; space++)
		{
			printf(" ");
		}
		
		for(star = 1; star <= i; star++)
		{
			printf("* ");
		}
		
		printf("\n");
	}
	
	return 0;
}

/*
output

Enter the number : 5
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

*/

#include <stdio.h>

int main()
{
	int n, i, space, star;
	printf("Enter the number : ");
	scanf("%d", &n);
	
	for(i = n; i > 0; i--)
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

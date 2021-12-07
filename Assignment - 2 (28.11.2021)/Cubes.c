#include <stdio.h>

int main()
{
	int i;
	for(i = 1; i <= 10; i++)
	{
		int result = cube(i);
		printf("%d\n", result);
	}
	return 0;	
}

int cube(int a)
{
	return a * a * a;
}


